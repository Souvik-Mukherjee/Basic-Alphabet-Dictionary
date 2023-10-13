#include<bits/stdc++.h>

// Function to create and return the dictionary mapping
map<char, string> createDictionary() {
    map<char, string> dictionary;
    //Words and their definitions to the dictionary
    dictionary.insert(make_pair('A', "Apple"));
    dictionary.insert(make_pair('B', "Ball"));
    dictionary.insert(make_pair('C', "Cat"));
    dictionary.insert(make_pair('D', "Dog"));
    dictionary.insert(make_pair('E', "Elephant"));
    dictionary.insert(make_pair('F', "Fish"));
    dictionary.insert(std::make_pair('G', "Giraffe"));
    dictionary.insert(make_pair('H', "Horse"));
    dictionary.insert(make_pair('I', "Ice Cream"));
    dictionary.insert(make_pair('J', "Jaguar"));
    dictionary.insert(make_pair('K', "Kangaroo"));
    dictionary.insert(make_pair('L', "Lion"));
    dictionary.insert(make_pair('M', "Monkey"));
    dictionary.insert(make_pair('N', "Nest"));
    dictionary.insert(make_pair('O', "Ostrich"));
    dictionary.insert(make_pair('P', "Penguin"));
    dictionary.insert(make_pair('Q', "Queen"));
    dictionary.insert(make_pair('R', "Rabbit"));
    dictionary.insert(make_pair('S', "Snake"));
    dictionary.insert(make_pair('T', "Tiger"));
    dictionary.insert(make_pair('U', "Umbrella"));
    dictionary.insert(make_pair('V', "Violin"));
    dictionary.insert(make_pair('W', "Whale"));
    dictionary.insert(make_pair('X', "Xylophone"));
    dictionary.insert(make_pair('Y', "Yak"));
    dictionary.insert(make_pair('Z', "Zebra"));
    return dictionary;
}

// Function to prompt the user for input and look up the corresponding word
void lookupWord(const map<char, string>& dictionary) {
    // Look up the definition of a word
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // Convert the character to uppercase
    char chf = toupper(ch);

    // Find the word in the dictionary
    map<char, string>::const_iterator it = dictionary.find(chf);
    if (it != dictionary.end()) {
        cout << it->second << '\n';
    } else {
        cout << "Word not found in dictionary.\n";
    }
}

// Function to prompt the user for choice and handle the switch case
bool continueSearching() {
    char choice;
    std::cout << "Do you want to search for another word? (y/n) ";
    std::cin >> choice;

    // Handle the user's choice
    switch (choice) {
        case 'y':
        case 'Y':
            return true;
        case 'n':
        case 'N':
            cout << "Exiting program...\n";
            return false;
        default:
            cout << "Invalid choice. Exiting program...\n";
            return false;
    }
}

int main() {
    // Create the dictionary mapping
    map<char, string> dictionary = createDictionary();

    bool keepSearching = true;
    while (keepSearching) {
        lookupWord(dictionary);
        keepSearching = continueSearching();
    }

    return 0;
}