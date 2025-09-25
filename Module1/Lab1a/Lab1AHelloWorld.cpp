// Jesus Morales
// 08/11/25
/* 
    Simple C++ program that outputs an introduction of myself and my major
*/

// iostream is a library
// #include is used to bring in the library; preprocessor directive
/*
    - IO stands for input and output
    - provides us with cin and cout function
    - the C in the functions stands for C programming language
    - the cin and cout functions utilize C

*/

// C is much faster than C++, and C++ also includes C
#include <iostream>

// The void means that it doensn't take any arguments
int main(void)
{

    // :: Scope resolution operator                                            // endl command is part of the iostream library
    std::cout << "Hello C++, my name is Jesus Morales" << std::endl;
    std::cout << "My major is: Computer Science" << std::endl;

   return 0;
}
