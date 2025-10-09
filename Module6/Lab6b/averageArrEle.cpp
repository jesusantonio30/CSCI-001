#include <iostream>
#include <string>

using namespace std;

std::string myFunction(int n);


string getWord(int n);

int main() {
int i = 6;
while (i != 0) {
cout << getWord(i) << "\t";
i = i - 2;
}
    return 0;
}

string getWord(int n) {
if (n == 0)
return("Labs");
else if (n == 1)
return("Sleep");
else if (n == 2)
return("Brings");
else if (n == 3)
return("Ugly");
else if (n == 4)
return("Joy");
else
return("C++");
}
