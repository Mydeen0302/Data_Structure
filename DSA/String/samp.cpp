#include <iostream>
using namespace std;

int letterToNumber(char letter) {
    // Convert the letter to lowercase to handle both 'a' and 'A'
    letter = tolower(letter);
    // Calculate the position in the alphabet
    int position = letter - 'a' + 1;
    return position;
}

int main() {
    char inputLetter;
    cout << "Enter a letter: ";
    cin >> inputLetter;

    int outputNumber = letterToNumber(inputLetter);
    cout << "The position of '" << inputLetter << "' in the alphabet is: " << outputNumber << endl;

    return 0;
}
