#include "./DogClass/dogClass.hpp"

#include <vector>
#include <iomanip>

int main() {

    std::vector<Dog> dogKennel;

    Dog One("Max", "large", 1, 2.5);
    Dog Two("Martha", "medium", 2, 1);
    Dog Three("Rex", "small", 3, 3.5);

    dogKennel = {One, Two, Three};

    std::cout << std::fixed << std::setprecision(2);
    
    for (int i = 0; i < dogKennel.size(); i++) {
        dogKennel[i].display();
        std::cout << "Kennel boarding cost: $" << dogKennel[i].calcBoardCost() << std::endl;
    }

    return 0;
}
