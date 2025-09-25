/*

Jesus Morales

1.
    iter 21 times
    0 - 20

    ==================
    When i = 0 and i^2 = 0
    When i = 5 and i^2 = 25
    When i = 10 and i^2 = 100
    When i = 15 and i^2 = 225
    When i = 20 and i^2 = 400
    ====================
2. 

    iter 5, 4, 3, 2, 1
    if power is odd, answer will be negative
    pay attention to decimals

    ==================
    j = 5 and j^2 = -1.0
    j = 4 and j^2 = 1.0
    j = 3 and j^2 = -1.0
    j = 2 and j^2 = 1.0
    j = 1 and j^2 = -1.0
    ====================

3. 

    m = 5
    n = 3

    i = 0, 1 < 5

    ==================
    j = 0, 1, 2 < 3
    row 0 : 0 * 1 * 2 * 
    row 1 : 0 * 1 * 2 * 
    row 2 : 0 * 1 * 2 * 
    row 3 : 0 * 1 * 2 * 
    row 4 : 0 * 1 * 2 * 
    ====================
    

4. 

    x = 50
    tempX = 50

    Begin with x = 50
    Begin with tempX = 50
    ==================    
    error: use of undeclared identifier 'convertToBool'
    ====================

5.  

    any non zero number results in false when used with ! (NOT operator)

    i = 2
    j = 2
    k = 3
    m = 2

    ==================    
    Answer = 001010010
    Taco Time!
    ====================


*/

#include <iostream>

using namespace std;

int main() {

int i = 2, j = 2, k = 3, m = 2;
cout << "Answer = ";
cout << (i == 1);
cout << (j == 3);
cout << (i >= 1 && j < 4);
cout << (m <= 99 && k < m);
cout << (j >= i || k == m);
cout << (k + m < j || 3 - j >= k);
cout << !m;
cout << !(j - m);
cout << !(k > m);
cout << "\nTaco Time!"<< endl;

    return 0;
}
