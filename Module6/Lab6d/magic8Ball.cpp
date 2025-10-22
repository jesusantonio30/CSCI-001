#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <thread>

using namespace std;

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define CYAN "\033[36m"

int main() {

    srand(time(NULL));

    char anotherQuestion;
    string userQues;
    int randEle;

    const int SIZE = 20;
    string magic8Ball[SIZE] = {
        // Affirmative
        {"It is certain"},
        {"It is decidedly so"},
        {"Without a doubt"},
        {"Yes definitely"},
        {"You may rely on it"},
        {"As I see it, yes"},
        {"Most likely"},
        {"Outlook good"},
        {"Yes"},
        {"Signs point to yes"},
        // Neutral
        {"Reply hazy, try again"},
        {"Ask again later"},
        {"Better not tell you now"},
        {"Cannot predict now"},
        {"Concentrate and ask again"},
        // Negative
        {"Don't count on it"},
        {"My reply is no"},
        {"My sources say no"},
        {"Outlook not so good"},
        {"Very doubtful"},
    };

    cout << "\n=========== 8 BALL ===========\n" << endl;

    cout << "----- Enter a question -----" << endl;

    do {

        cout << endl;

        cout << CYAN;
        cin.ignore();
        
        getline(cin, userQues);
        cout << RESET;

        cout << "\nMagic 8 Ball thinking... " << endl;

        cout << "\nMagic 8 Ball says: \n" << endl;

        randEle = rand() % SIZE;

        if (randEle < 10) {
            cout << GREEN;
        } else if (randEle < 15) {
            cout << YELLOW;
        } else {
            cout << RED;
        }

        cout << magic8Ball[randEle] << RESET << endl;

        cout << "\nAsk another question? (y/n): ";
        cin >> anotherQuestion;


    } while (anotherQuestion == 'y');

    return 0;
}
