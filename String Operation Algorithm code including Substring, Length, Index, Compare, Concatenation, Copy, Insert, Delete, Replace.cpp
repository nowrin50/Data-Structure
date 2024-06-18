

#include <iostream>
#include <string>

using namespace std;

// Function to get a part of a string (substring)
string getSubstring(string str, int start, int end = -1) {
    if (end == -1) {
        return str.substr(start);
    }
    return str.substr(start, end - start);
}

// Function to get the length of a string
int getStringLength(string str) {
    return str.length();
}

// Function to find the starting index of a substring in a string
int findSubstringIndex(string str, string sub_str) {
    return str.find(sub_str);
}

// Function to compare two strings
bool compareStrings(string str1, string str2) {
    return str1 == str2;
}

// Function to concatenate two strings
string concatenateStrings(string str1, string str2) {
    return str1 + str2;
}

// Function to make a copy of a string
string copyString(string str) {
    return str;
}

// Function to insert a substring into a string at a specific index
string insertSubstring(string str, int index, string sub_str) {
    return str.insert(index, sub_str);
}

// Function to delete a part of a string from start to end
string deleteFromString(string str, int start, int end) {
    return str.erase(start, end - start);
}

// Function to replace a substring with another substring in a string
string replaceSubstring(string str, string old_sub_str, string new_sub_str) {
    size_t pos = 0;
    while ((pos = str.find(old_sub_str, pos)) != string::npos) {
        str.replace(pos, old_sub_str.length(), new_sub_str);
        pos += new_sub_str.length();
    }
    return str;
}

int main() {
    string sample_string = "Hello, World!";

    cout << "Original String: " << sample_string << endl;
    cout << "Substring: " << getSubstring(sample_string, 7, 12) << endl;
    cout << "Length: " << getStringLength(sample_string) << endl;
    cout << "Index of 'World': " << findSubstringIndex(sample_string, "World") << endl;
    cout << "Compare: " << compareStrings("Hello", "Hello") << endl;
    cout << "Concatenate: " << concatenateStrings("Hello", " World!") << endl;
    cout << "Copy: " << copyString(sample_string) << endl;
    cout << "Insert: " << insertSubstring(sample_string, 5, " Awesome") << endl;
    cout << "Delete: " << deleteFromString(sample_string, 5, 12) << endl;
    cout << "Replace: " << replaceSubstring(sample_string, "World", "Universe") << endl;

    return 0;
}
