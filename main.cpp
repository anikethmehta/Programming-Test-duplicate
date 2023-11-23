#include <iostream>
#include <unordered_set>
using namespace std;

bool duplicate(const string& str)
{
    unordered_set<char> seenChars;//unique characters

    for (char ch : str)
    {
        // Convert character to lowercase for case-insensitivity
        char lowerChar = tolower(ch);

        // Check if the character is already in the set
        if (seenChars.find(lowerChar) != seenChars.end())
        {
            // Duplicate found
            return true;
        } else
        {
            // Add the character to the set
            seenChars.insert(lowerChar);
        }
    }

    // No duplicates found
    return false;
}

int main() {

    string inputStr = "EYE";
    if (duplicate(inputStr))
    {
        cout << "Duplicates found." << endl;
    } else
    {
        cout << "No duplicates found." << endl;
    }

    return 0;
}

