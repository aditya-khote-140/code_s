#include <iostream>
#include <cctype>
using namespace std;

// Function to count vowels and consonants in a string
void countVowelsAndConsonants(const string& str, int& vowelCount, int& consonantCount) {
    vowelCount = 0;
    consonantCount = 0;

    for (char c : str) {
        // Convert character to lowercase for easier comparison
        char lowercaseChar = tolower(c);

        // Check if the character is a letter
        if (isalpha(lowercaseChar)) {
            // Check if the character is a vowel
            if (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' ||
                lowercaseChar == 'o' || lowercaseChar == 'u') {
                vowelCount++;
            } else {
                consonantCount++;
            }
        }
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    int vowelCount, consonantCount;
    countVowelsAndConsonants(str, vowelCount, consonantCount);

    cout << "Number of vowels: " << vowelCount << endl;
    cout << "Number of consonants: " << consonantCount << endl;

    return 0;
}
