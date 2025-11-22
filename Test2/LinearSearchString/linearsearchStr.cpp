#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <cctype>

using namespace std;

string convertToStr(vector<string> const &argVec);
int sentenceCount(string const &str);
int letterCount(string const &str, char targetLetter);
int totalLetterCount(string const &str);

int main() {

    vector<string> lines;
    string line;

    cout << "\n============= Text Input =============\n" << endl;
    cout << "\tWhen finished, press: " << endl;
    cout << "    - macOS: Enter, then control+D" << endl;
    cout << "    - Windows: Ctrl+Z, then Enter" << endl;

    cout << "\n\nEnter Text: ";

    // continues reading user input until user declares EOF (no more to input)
    // and stores it into a vector
    while (getline(cin, line)) {
        lines.push_back(line);
    }

    string userText = convertToStr(lines);
    int totalLetters = totalLetterCount(userText);

    cout << "\nNumber of sentences: " << sentenceCount(userText) << endl; 
    
    cout << "\nLetter Frequency Analysis: " << endl;

    cout << "\nLetter\tCount\tPercentage\n";
    cout << "---------------------------\n";
    cout << fixed << setprecision(2);

    for (int i = 97; i <= 122; i++) {
        int count = letterCount(userText, char(i));
        cout << char(i) << '\t' << count << '\t' << 100.0 * count / totalLetters << "%\n";
    }

    return 0;
}

string convertToStr(vector<string> const &argVec) {
    string text;

    for (int i = 0; i < argVec.size(); i++) {
        text += argVec[i];
    }

    return text;
}

int sentenceCount(string const &str) {
    int count = 0;

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '.' || str[i] == '?' || str[i] == '!') count++;
    }

    return count;
}

int letterCount(string const &str, char targetLetter) {
    int count = 0;

    for (int i = 0; i < str.size(); i++) {
        if (tolower(str[i]) == tolower(targetLetter)) count++;
    }

    return count;
}

int totalLetterCount(string const &str) {
    int count = 0;

    for (int i = 0; i < str.size(); i++) {
        if (isalpha(str[i])) count++;
    }

    return count;
}
