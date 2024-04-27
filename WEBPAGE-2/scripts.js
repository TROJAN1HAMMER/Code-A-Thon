function submitUserData() {
    const form = document.getElementById('userForm');
    const name = form.name.value;
    const phone = form.phone.value;
    const voterId = form.voterId.value;
    const age = parseInt(form.age.value);

    // Validate phone number (must be 10 digits)
    if (!/^\d{10}$/.test(phone)) {
        alert("Phone number must be exactly 10 digits.");
        return false; // Prevent form submission
    }

    // Validate age (must be at least 18)
    if (age < 18) {
        alert("You must be at least 18 years old.");
        return false; // Prevent form submission
    }

    const data = {
        name: name,
        phone: phone,
        voterId: voterId,
        age: age
    };

    // Correct the endpoint URL
    const endpoint = 'http://localhost:8080/api/users'; // Update to your backend endpoint

    fetch(endpoint, {
        method: 'POST',
        headers: {
            'Content-Type': 'application/json'
        },
        body: JSON.stringify(data)
    })
    .then(response => {
        if (response.ok) { // If the response is successful
            return response.json(); // Parse the JSON response
        } else {
            throw new Error(`Request failed with status ${response.status}`); // Capture the HTTP status code
        }
    })
    .then(result => {
        if (result.error) { // If the server returns an error
            console.error('Error from server:', result.error);
            alert('Submission failed. Please try again.'); // Notify the user
        } else {
            // Redirect to display.html after successful submission
            window.location.href = 'display.html'; // Redirect on success
        }
    })
    .catch(error => {
        console.error('Error:', error);
        alert('An error occurred. Please try again later.'); // Show a generic error message
    });

    return true; // Allow form submission
}
