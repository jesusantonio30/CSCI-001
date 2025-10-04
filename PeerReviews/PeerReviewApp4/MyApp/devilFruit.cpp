#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

double probabCalc(double var, double simAmt);

int main() {

    srand(time(0));

// General variables
    int simulations = 1000000;
    int random_devil_fruit;

// Const variables
    const int CONFIRMED_DEVIL_FRUITS = 155;

    const int PARAMECIA_AMT = 89;   // 1 - 89
    const int ZOAN_AMT = 52;        // 90 - 141
    const int LOGIA_AMT = 14;       // 142 - 155

// Devil Fruits
    // PARAMECIA
    int paramecia_pull_count = 0;
    // ZOAN
    int norm_zoan_pull_count = 0;
    int ancient_zoan_pull_count = 0;
    int mythical_zoan_pull_count = 0;
    // LOGIA
    int logia_pull_count = 0;

// Streak
    bool is_paramecia = false, 
         is_zoan = false, 
         is_logia = false;

    int paramecia_streak = 0,
        paramecia_max_streak = 0,
        zoan_streak = 0, 
        zoan_max_streak = 0,
        logia_streak = 0,
        logia_max_streak = 0;



    for (int i = 0; i < simulations; i++) {
        random_devil_fruit = 1 + rand() % 155;

        if (random_devil_fruit <= 89) {
            paramecia_pull_count++;
            is_paramecia = true;
            is_zoan = false;
            is_logia = false;

        } else if (random_devil_fruit <= 141) {
            is_paramecia = false;
            is_zoan = true;
            is_logia = false;

            if (random_devil_fruit >= 90 && random_devil_fruit <= 98) {
                // 9 out of 52 chance of getting an ancient zoan devil fruit
                ancient_zoan_pull_count++;
            
            } else if (random_devil_fruit >= 99 && random_devil_fruit <= 107) { 
                // 9 out of 52 chance of getting a mythical zoan devil fruit
                mythical_zoan_pull_count++;

            } else {
                norm_zoan_pull_count++;

            }

        } else {
            is_paramecia = false;
            is_zoan = false;
            is_logia = true;
            logia_pull_count++;
        }

    // STREAKS
        if (is_paramecia) {
            paramecia_streak++;

            if (paramecia_streak > paramecia_max_streak) {
                paramecia_max_streak = paramecia_streak;
            }

        } else {
            paramecia_streak = 0;
        }

        if (is_zoan) {
            zoan_streak++;

            if (zoan_streak > zoan_max_streak) {
                zoan_max_streak = zoan_streak;
            }

        } else {
            zoan_streak = 0;
        }

        if (is_logia) {
            logia_streak++;

            if (logia_streak > logia_max_streak) {
                logia_max_streak = logia_streak;
            }

        } else {
            logia_streak = 0;
        }
    }

    cout << "You are isekai-ed into the world of One Piece and land alongside 9 year old Kuma who is about to steal a devil fruit from the prizes and escape. What is the probability of you getting a specific devil fruit?" << endl;

    cout << fixed << setprecision(2);
    cout << "\nDevil Fruit Probabilities" << endl;
    cout << "\nParamecia: " <<  probabCalc(paramecia_pull_count, simulations) << '%' << endl;
    cout << "Zoan: " << probabCalc(norm_zoan_pull_count, simulations) << '%' << endl;
    cout << "Ancient Zoan: " << probabCalc(ancient_zoan_pull_count, simulations) << '%' << endl;
    cout << "Mythical Zoan: " << probabCalc(mythical_zoan_pull_count, simulations) << '%' << endl;
    cout << "Logia: " << probabCalc(logia_pull_count, simulations) << '%' << endl;
    cout << endl;
    cout << "Longest Streaks Per Category:" << endl;
    cout << "Paramecia: " << paramecia_max_streak << endl;
    cout << "Zoan: " << zoan_max_streak << endl;
    cout << "Logia: " << logia_max_streak << endl;



        

    return 0;
}

double probabCalc(double var, double simAmt) {
    return var / simAmt * 100;
}
