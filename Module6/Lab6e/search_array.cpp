#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// I didn't use AI, I've just been learning C to understand how memory works

void printArrContents(char *arr, int size);
void countCharAppeance(char charChoice, int size, char *arr);
void clearInputBuffer();

int main() {

    int charCount;

    srand(time(0));

    int size = 50;
    char randChars[size];
    char runAgain;

    printArrContents(randChars, size);

    do {

        char userChar;

        // C's version of cout
        printf("Select a char, any char: ");
        userChar = getchar();
        clearInputBuffer();

        countCharAppeance(userChar, size, randChars);

        printf("Want to count another char? (y/n): ");
        runAgain = getchar();
        clearInputBuffer();

    } while (runAgain == 'y');

    return 0;
}

// takes &arr as argment
void printArrContents(char *arr, int size) {
    for (int i = 0; i < size; i++) {
        // pointer arithemtic. incrementing address by 1 byte, size of char.
        // same as arr[i]
        *(arr + i) = 97 + (rand() % 26);
        
        // format specifiers. works similarly to template literals in javascript
        printf("arr[%d] : %c\n", i, *(arr + i));
    }
}

void countCharAppeance(char charChoice, int size, char *arr) {
    charCount = 0;
    for (int i = 0; i < size; i++){
        if (*(arr + i) == charChoice) {
            charCount++;
        }
    }
    printf("Char \"%c\" appeared %d times!\n", charChoice, charCount);
}

void clearInputBuffer() {
    int c;
    // while current garbage is not \n and hasn't reach end of file, discard garbage
    // while loop body is empty, so it discards each character without processing it
    while ((c = getchar()) != '\n' && c != EOF);
}
