#include <cpprest/http_listener.h>
#include <cpprest/json.h>
using namespace web;
using namespace web::http;
using namespace web::http::experimental::listener;

void handle_post(http_request request) {
    // Extract JSON content from request
    request.extract_json().then([=](json::value request_json) {
        // Process the request data, perform validation or database operations
        ucout << U("Received request: ") << request_json.serialize() << std::endl;

        // Create a response JSON object
        json::value response_json;
        response_json[U("message")] = json::value::string(U("User data received successfully"));

        // Send back the response
        request.reply(status_codes::OK, response_json);
    }).catch([](http_exception const& e) {
        std::wcerr << e.what() << std::endl;
    });
}

int main(){
    uri_builder uri(U("http://localhost:8080"));
    auto addr = uri.to_uri().to_string();
    http_listener listener(addr);

    listener.support(methods::POST, handle_post);

    try {
        listener
            .open()
            .then([&listener](){ ucout << U("Starting to listen at: ") << listener.uri().to_string() << std::endl; })
            .wait();

        std::string line;
        std::getline(std::cin, line);
    } catch (const std::exception& e) {
        std::cerr << "An error occurred: " << e.what() << std::endl;
    }

    return 0;
}