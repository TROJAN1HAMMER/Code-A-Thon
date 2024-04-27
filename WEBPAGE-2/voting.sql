-- Create a new database (if needed)
CREATE DATABASE IF NOT EXISTS online_voting_system;
USE online_voting_system; -- Switch to the newly created database

-- Table to store user information
CREATE TABLE IF NOT EXISTS users (
    user_id INT AUTO_INCREMENT PRIMARY KEY,  -- Unique ID for each user
    name VARCHAR(100) NOT NULL,             -- User's name
    voter_id VARCHAR(50) UNIQUE NOT NULL,   -- Unique voter ID
    phone VARCHAR(15) UNIQUE NOT NULL,      -- Unique phone number (10-digit validation)
    age INT NOT NULL,                       -- User's age (must be 18 or older)
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP -- Timestamp for record creation
);

-- Table to store candidate information
CREATE TABLE IF NOT EXISTS candidates (
    candidate_id INT AUTO_INCREMENT PRIMARY KEY,  -- Unique ID for each candidate
    name VARCHAR(100) NOT NULL,                   -- Candidate's name
    party VARCHAR(100) NOT NULL,                  -- Party affiliation
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP -- Timestamp for record creation
);

-- Table to store votes
CREATE TABLE IF NOT EXISTS votes (
    vote_id INT AUTO_INCREMENT PRIMARY KEY,  -- Unique ID for each vote
    user_id INT,                             -- Foreign key linking to users
    candidate_id INT,                        -- Foreign key linking to candidates
    vote_time TIMESTAMP DEFAULT CURRENT_TIMESTAMP,  -- Timestamp for when the vote was cast
    FOREIGN KEY (user_id) REFERENCES users(user_id) ON DELETE CASCADE,  -- Ensures referential integrity
    FOREIGN KEY (candidate_id) REFERENCES candidates(candidate_id) ON DELETE CASCADE
);

-- Table to store election results
CREATE TABLE IF NOT EXISTS election_results (
    result_id INT AUTO_INCREMENT PRIMARY KEY,  -- Unique ID for each result
    candidate_id INT,                          -- Foreign key linking to candidates
    total_votes INT DEFAULT 0,                 -- Total votes received by the candidate
    FOREIGN KEY (candidate_id) REFERENCES candidates(candidate_id) ON DELETE CASCADE
);

-- Insert sample data for candidates
INSERT INTO candidates (name, party) VALUES
('Candidate 1', 'Party A'),
('Candidate 2', 'Party B'),
('Candidate 3', 'Party C');

-- Trigger to update election results when a vote is cast
DELIMITER //
CREATE TRIGGER update_results AFTER INSERT ON votes
FOR EACH ROW
BEGIN
    UPDATE election_results
    SET total_votes = total_votes + 1
    WHERE candidate_id = NEW.candidate_id;

    IF ROW_COUNT() = 0 THEN
        INSERT INTO election_results (candidate_id, total_votes) VALUES (NEW.candidate_id, 1);
    END IF;
END;
//
DELIMITER ;
