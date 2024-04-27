// JavaScript function to validate the user form
function validateUserForm() {
    // Get form field values
    const age = document.getElementById('age').value;
    const voterId = document.getElementById('voterId').value;

    // Check age
    if (age < 18) {
        alert('You must be at least 18 years old to vote.');
        return false; // Prevent form submission
    }

    // Check voter ID
    if (voterId.trim() === '') {
        alert('Voter ID is required.');
        return false; // Prevent form submission
    }

    // If all checks pass, allow form submission
    return true;
}


function validateVotingForm() {
    const votingError = document.getElementById("votingError");
    const selectedCandidate = document.querySelector('input[name="candidate"]:checked'); // Check if a candidate is selected

    if (!selectedCandidate) { // If no candidate is selected
        votingError.style.display = "block"; // Show error message
        return false; // Prevent form submission
    } else {
        votingError.style.display = "none"; // Hide error message if a candidate is selected
        return true; // Allow form submission
    }
}
