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
