#include <iostream>
#include <iomanip>

using namespace std;

struct Computer {
    string brand, 
           processor;
    int ram, 
        hardDriveStorage, 
        quantityInStock;
    float wholeSaleprice;

    Computer(string mBrand = "Apple", string mProcessor = "M4", int mRam = 64, int hDStorage = 1, int quantInStock = 10, float wholeSPrice = 999.99);
    void printComputer(float storeMarkUp);
    float retailPrice(float markupPercentage);
};

void displayComputers(vector<Computer> &argV, float markup);

int main() {

    vector<Computer> computers;

    char exit;
    float storeMarkup = 0.0;

    do {
        Computer x;

        cout << "\nComputer brand: ";
        getline(cin, x.brand);

        cout << "\nCPU: ";
        getline(cin, x.processor);

        cout << "\nRAM: ";
        cin >> x.ram;

        cout << "\nHard Drive Storage: ";
        cin >> x.hardDriveStorage;

        cout << "\nIn stock: ";
        cin >> x.quantityInStock;

        cout << "\nWholesale Price: ";
        cin >> x.wholeSaleprice;

        computers.push_back(x);

        cout << "\nEnter another? (y/n): ";
        cin >> exit;
        cin.ignore();
        
    } while (tolower(exit) != 'n');



    cout << "\nWhat is the store markup? (e.g. 35%): ";
    cin >> storeMarkup;

    displayComputers(computers, storeMarkup);




    return 0;
}

Computer::Computer(string mBrand, string mProcessor, int mRam, int hDStorage, int quantInStock, float wholeSPrice) {
    brand = mBrand;
    processor = mProcessor;
    ram = mRam;
    hardDriveStorage = hDStorage;
    quantityInStock = quantInStock;
    wholeSaleprice = wholeSPrice;
}

void Computer::printComputer(float storeMarkUp) {
    cout << "Brand: " << brand << endl;
    cout << "CPU: " << processor << endl;
    cout << "RAM: " << ram << "GB" << endl;
    cout << "Hard Drive Storage: " << hardDriveStorage << "GB" << endl;
    cout << "In stock: " << quantityInStock << endl;
    cout << fixed << setprecision(2);
    cout << "Retail Price: $" << retailPrice(storeMarkUp) << endl;
}

float Computer::retailPrice(float markupPercentage) {

    return wholeSaleprice * (1 + (markupPercentage / 100));
}

void displayComputers(vector<Computer> &argV, float markup) {
    for (int i = 0; i < argV.size(); i++) {
        cout << '\n' << endl;
        argV[i].printComputer(markup);
    }
}

