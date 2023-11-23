### ***Date*** : 23 November 2023
### ***Title*** : Programming Test question 3
### ***Algorithm*** :

Include Statements:

These lines include necessary libraries for input/output operations (iostream) and an unordered set data structure (unordered_set), which will be used to keep track of unique characters.

Function Definition:

This line defines a function named duplicate that takes a constant reference to a string (const std::string& str) as its parameter and returns a boolean value (bool). The function is designed to check for duplicate characters in the given string.

Set Initialization:

This line creates an empty unordered set (std::unordered_set) called seenChars. This set will be used to keep track of unique characters encountered during the iteration through the input string.

Iterating Through Characters:

This line starts a loop that iterates through each character (char ch) in the input string (str).

Case Insensitivity:

This line converts the current character to lowercase using the std::tolower function. This step ensures case-insensitivity when checking for duplicates.

Checking for Duplicates:

It checks if the lowercase character lowerChar is already present in the seenChars set. If it is, that means a duplicate has been found, and the function returns true immediately.

Updating the Set:

If the character is not already in the set, it is added to the set using the insert function.

No Duplicates Found:

After going through all characters in the string without finding any duplicates, the function returns false to indicate that no duplicates were found.

Main Function:

The main function demonstrates the usage of the duplicate function by checking if the word "Hello" has any duplicate letters and prints the result accordingly. In this case, since there are duplicates (the letter 'l' appears twice), it will print "Duplicates found."
