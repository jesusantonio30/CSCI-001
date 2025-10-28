// Class Notes... rectangle objects using struct

#include <iostream>
#include <string>
using namespace std;

// Rectangle object structure
struct Rectangle {

 double width, length;
 string units;

};

//Function Prototypes
double rectangleArea(Rectangle arg);
double rectangleArea2(Rectangle &arg);

// Main function
int main(void) {

 const int size = 3;

 // Declare a Rectangle variable and then populate it => "Instantiate a Rectangle"
 Rectangle myRectangle;

 myRectangle.length = 3.4;
 myRectangle.width = 2.5;
 myRectangle.units = "cm";

 cout << "Perimeter is = " << 2 * myRectangle.width + 2 * myRectangle.length << " " << myRectangle.units << endl;

 // Can make as many rectangle objects as you want here is an array of Rectangles
 Rectangle myRectArray[size] = { { 1,2,"cm" },{ 5,6,"in" },{ 10.3, 1.1, "mm" } };

 for (int i = 0; i<size; i++)
 cout << "Units are: " << myRectArray[i].units << "\t";
 cout << endl;

 // Pass Objects to functions in two ways
 // 1. Pass objects by value => a local copy is made and the destroyed.
 cout << "Area = " << rectangleArea(myRectangle) << endl;

 // 2. Pass objects by reference => the address is passed using the "address of operator" &
 cout << "Area = " << rectangleArea2(myRectangle) << endl;

 return(0);
}

// Function implementations
double rectangleArea(Rectangle arg) {
 return(arg.length*arg.width);
}

double rectangleArea2(Rectangle &arg) {
 return(arg.length*arg.width);
}
