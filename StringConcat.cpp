#include <iostream>
#include <string>

using namespace std;

int main() {
    string input1, input2;

    for (int i = 0; i < 3; ++i) {
        // Prompt the user to enter the first string
        cout << "Enter the first string: ";
        getline(cin, input1); // Read entire line including spaces

        // Prompt the user to enter the second string
        cout << "Enter the second string: ";
        getline(cin, input2); // Read entire line including spaces

        // Concatenate the strings
        string concatenated = input1 + input2;

        // Print the concatenated string
        cout << "Concatenated string: " << concatenated << endl << endl;
    }

    return 0;
}
