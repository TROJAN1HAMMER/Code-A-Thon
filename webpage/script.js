// script.js
let votes = { 'DMK': 0, 'ADMK': 0, 'BJP': 0, 'Congress': 0, 'LDK': 0 };

function vote(party) {
    if (votes.hasOwnProperty(party)) {
        votes[party] += 1;
        displayResults();
    }
}

function displayResults() {
    const resultsDiv = document.getElementById('results');
    resultsDiv.innerHTML = ''; // Clear previous results
    for (let party in votes) {
        let bar = document.createElement('div');
        bar.style.height = '${votes[party] * 20}px'; // Scaling the bar graph
        bar.style.backgroundColor = getPartyColor(party);
        bar.classList.add('bar');
        bar.innerHTML = <span>${votes[party]}</span>;
        resultsDiv.appendChild(bar);
    }

}