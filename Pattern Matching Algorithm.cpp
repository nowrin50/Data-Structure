#include<iostream>
#include<string>

using namespace std;

// Function to perform simple pattern matching
void simple_pattern_matching(const string &str, const string &pattern) {
    bool found = false;

    // Loop through the string to find the pattern
    for (size_t i = 0; i <= str.length() - pattern.length(); ++i) {
        // Check if substring matches the pattern
        if (str.substr(i, pattern.length()) == pattern) {
            found = true;
            // Print the index where the pattern is found
            cout << "Pattern found at index " << i << endl;
        }
    }

    // If pattern is not found, print a message
    if (!found) {
        cout << "Pattern not found in the string." << endl;
    }
}

// Main function
int main() {

    // Declare variables to store user input
    string user_string, user_pattern;

    // Prompt user to enter a string
    cout << "Enter a string: ";
    // Get the user input for the string
    getline(cin, user_string);

    // Prompt user to enter a pattern to find
    cout << "Enter a pattern to find: ";
    // Get the user input for the pattern
    getline(cin, user_pattern);

    // Call the function to perform pattern matching
    simple_pattern_matching(user_string, user_pattern);

    // Return 0 to indicate successful execution
    return 0;
}
