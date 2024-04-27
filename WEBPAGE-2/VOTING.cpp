#include <cpprest/http_listener.h>
#include <cpprest/json.h>
#include <unordered_map>
#include <vector>
#include <string>

using namespace web;
using namespace http;
using namespace http::experimental::listener;

std::vector<voter> voters;
std::unordered_map<int, std::vector<std::string>> candidateData;

// Register Voter Endpoint
void handleRegisterVoter(http_request request) {
    request.extract_json().then([&](const json::value& data) {
        auto name = data[U("name")].as_string();
        auto voterId = data[U("voterId")].as_string();
        int region = data[U("region")].as_integer();

        voters.emplace_back(name, voterId, region);

        json::value response;
        response[U("status")] = json::value::string("success");
        response[U("message")] = json::value::string("Voter registered successfully.");
        request.reply(status_codes::OK, response);
    });
}

// Get Candidates Endpoint
void handleGetCandidates(http_request request) {
    auto query = uri::split_query(request.request_uri().query());
    int region = std::stoi(query[U("region")]); // Retrieve region from query parameters

    json::value response;
    json::value candidateList = json::value::array();

    if (candidateData.find(region) != candidateData.end()) {
        int index = 0;
        for (const auto& candidate : candidateData[region]) {
            candidateList[index++] = json::value::string(candidate);
        }

        response[U("candidates")] = candidateList;
        request.reply(status_codes::OK, response);
    } else {
        response[U("error")] = json::value::string("No candidates found for this region.");
        request.reply(status_codes::BAD_REQUEST, response);
    }
}

void startServer() {
    http_listener listener(U("http://localhost:8080/api"));

    listener.support(U("/registerVoter"), methods::POST, handleRegisterVoter); // Register voters
    listener.support(U("/getCandidates"), methods::GET, handleGetCandidates); // Get candidates based on region

    listener.open().wait();
    std::cout << "Server running on http://localhost:8080/" << std::endl;

    while (true) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

int main() {
    // Add candidate data for each region
    candidateData[1] = {"Candidate A", "Candidate B"};
    candidateData[2] = {"Candidate C", "Candidate D"};

    startServer();

    return 0;
}