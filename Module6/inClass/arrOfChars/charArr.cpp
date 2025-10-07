#include <iostream>
#include <string>

using namespace std;

int string_size(char arr[]);
int char_counter(string str, char target_char);

// null char is '\0'

int main() {

    // char arr[] = "Jesus";
    // string b = "Morales";

    // cout << "Size of string is: " << string_size(arr) << endl;
    // cout << b[0] << endl;

    string b = "This is a big sentence or book even.";
    int size = char_counter(b, 'e');

    cout << "e count: " << char_counter(b, 'e') << endl;
    cout << "The percentage of e's relative to string is: " << 1.0 * size / b.size() << endl;

    return 0;
}

int string_size(char arr[]) {
    int size = 0;
    int i = 0;

    while (arr[i] != '\0') {
        size += 1;
        i++;
    }

    return size;
}

int char_counter(string str, char target_char) {
    char target = target_char;
    string userString = str;

    int targetCount = 0;

    for (int i = 0; i < userString.size(); i++) {

        if (userString[i] == target) {
            targetCount++;
        }
    }

    return targetCount;

}
