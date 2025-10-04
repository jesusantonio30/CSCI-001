#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <string>

using namespace std;

double probabCalc(int var, int simAmt);

int main() {

    srand(time(0));

// General variables
    int simulations = 1000000;
    int random_devil_fruit;
    string grabbed_devil_fruit;

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


// Simulation
    for (int i = 0; i < simulations; i++) {
        random_devil_fruit = 1 + rand() % 155;

    // Devil fruit counters
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

//  Regenerate random num for new devil fruit
    int final_random_devil_fruit = 1 + rand() % 155;

    if (final_random_devil_fruit <= 89) {
        grabbed_devil_fruit = "Paramecia";
    } else if (final_random_devil_fruit <= 141) {
        if (final_random_devil_fruit >= 90 && final_random_devil_fruit <= 98) {
                // 9 out of 52 chance of getting an ancient zoan devil fruit
                grabbed_devil_fruit = "Ancient Zoan";
            
            } else if (final_random_devil_fruit >= 99 && final_random_devil_fruit <= 107) { 
                // 9 out of 52 chance of getting a mythical zoan devil fruit
                grabbed_devil_fruit = "Mythical Zoan";

            } else {
                grabbed_devil_fruit = "regular Zoan";

            }
    } else {
        grabbed_devil_fruit = "Logia";
    }

    cout << "\n\tYou find yourself suddenly transported to the One Piece world on God Valley ";
    cout << "during the Native Hunting Competition, ";
    cout << "\n38 years before the Great Pirate Era. Enslaved by Celestial Dragons, ";
    cout << "you team up with 9-year-old Bartholomew Kuma.";
    cout << "\nAs Rocks Pirates and Marines begin to fight in the distance, ";
    cout << "Kuma aims to grab a Devil Fruit from a prize chest holding 155 Devil Fruits ";
    cout << "\n(89 Paramecia, 52 Zoan with 9 Ancient and 9 Mythical types, and 14 Logia) ";
    cout << "to help you and him escape. " << endl;
    cout << "\nYou start to wonder: What are your chances of picking a certain Devil Fruit from this chest?" << endl;

    int total_zoan_pull_count = norm_zoan_pull_count + ancient_zoan_pull_count + mythical_zoan_pull_count;

    cout << fixed << setprecision(2);
    cout << "\n\tDevil Fruit Probabilities" << endl;
    cout << "\n\tParamecia: " <<  probabCalc(paramecia_pull_count, simulations) << '%' << endl;
    cout << "\tZoan: " << probabCalc(total_zoan_pull_count, simulations) << '%' << endl;
    cout << "\tAncient Zoan: " << probabCalc(ancient_zoan_pull_count, simulations) << '%' << endl;
    cout << "\tMythical Zoan: " << probabCalc(mythical_zoan_pull_count, simulations) << '%' << endl;
    cout << "\tLogia: " << probabCalc(logia_pull_count, simulations) << '%' << endl;
    cout << endl;

    cout << "If you had the ability to reach " << simulations << " times, you would find that you pulled as many as " << endl;

    cout << paramecia_max_streak << " Paramecia, " << zoan_max_streak << " Zoan, " << "or " << logia_max_streak << " Logias in a row." << endl;

    cout << "\nSadly, you don't. So upon coming back to the reality of your surroundings, you see Kuma reach in..." << endl;
    cout << "And grab a fruit." << endl;

    cout << "\nHe grabbed a " << grabbed_devil_fruit << " type Devil Fruit.\n" << endl;

    return 0;
}

double probabCalc(int var, int simAmt) {
    return static_cast<double>(var) / simAmt * 100;
}
