#include <iostream>
#include <string>
#include <iomanip>

double courseAvg(int hw, int testAvg, int final);
char letterGrade(double avg);

using namespace std;

int main() {

    string name;
    int score1, score2, score3;
    double studentAvgGrade;
    char studentLetterGrade, runAgain;

    cout << "\n\n\t ======= What If? =======" << endl;
    cout << "  \nA 'What If' grade calculator for students\n  who just wished they aced that exam" << endl;

    do {
        cout << "\nEnter your name: ";
        getline(cin, name);

        cout << "\nFrom a score of 0 to 100, \n" << endl;

        cout << "Enter homework score: ";
        cin >> score1;

        cout << "Enter test average score: ";
        cin >> score2;

        cout << "Enter final exam score: ";
        cin >> score3;
        
        studentAvgGrade = courseAvg(score1, score2, score3);

        studentLetterGrade = letterGrade(studentAvgGrade);

        cout << fixed << setprecision(0);

        cout << "\n\nName: \t\t\t" << name << endl;
        cout << "Weighted average: \t" << studentAvgGrade << '%' << endl;
        cout << "Letter grade: \t\t" << studentLetterGrade << endl;

        cout << "\n\nWant more 'What if' grades? (y/n): ";
        cin >> runAgain;

        cin.ignore();


    } while (runAgain == 'y');


    return 0;
}

double courseAvg(int hw, int testAvg, int final){
    return (0.10 * hw) + (0.60 * testAvg) + (0.30 * final);
}

char letterGrade(double avg) {
    if (avg >= 90) {
        return 'A';
    } else if (avg >= 80) {
        return 'B';
    } else if (avg >= 70) {
        return 'C';
    } else if (avg >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}
