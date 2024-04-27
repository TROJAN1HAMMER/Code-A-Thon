const express = require('express');
const mysql = require('mysql');
const bodyParser = require('body-parser');

const app = express();

// Middleware to parse JSON bodies in POST requests
app.use(bodyParser.json());

// MySQL connection
const connection = mysql.createConnection({
  host: 'localhost', // Change if necessary
  user: 'root', // Your MySQL username
  password: 'balaharshith', // Your MySQL password
  database: 'online_voting_system' // Change to your database name
});

// Connect to MySQL
connection.connect(err => {
  if (err) {
    console.error('Error connecting to MySQL:', err);
  } else {
    console.log('Connected to MySQL');
  }
});

// Handle incoming POST requests
app.post('/api/users', (req, res) => {
  const { name, voterId, phone, age } = req.body;

  if (!name || !voterId || !phone || !age) {
    return res.status(400).json({ error: 'All fields are required' });
  }

  const query = 'INSERT INTO users (name, voter_id, phone, age) VALUES (?, ?, ?, ?)';

  connection.query(query, [name, voterId, phone, age], (error, results) => {
    if (error) {
      console.error('Database error:', error);
      return res.status(500).json({ error: 'Failed to store data' });
    }

    res.status(201).json({ message: 'Data stored successfully' });
  });
});

// Start the server
app.listen(3000, () => {
  console.log('Server running on http://localhost:3000');
});
