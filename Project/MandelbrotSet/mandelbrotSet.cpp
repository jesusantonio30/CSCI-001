#include <iostream>
#include <complex>
using namespace std;

int mandelbrotEscapeNumber(complex<double> c);
char mandelbrotEscapeChar(int i);

int main(void)
{

    complex<double> w;
    int escapeNum;
    char escapeChar;

    /*
        TEST -------------------------------------------
                z.real(3);
        z.imag(4);

        cout << "Real part: " << z.real() << endl;
        cout << "Imaginary part: " << z.imag() << endl;
        cout << "Dist to origin: " << abs(z) << endl;
        int temp = mandelbrotEscapeNumber(z);
        cout << "Escape number: " << mandelbrotEscapeNumber(z) << endl;
        cout << "Color: " << mandelbrotEscapeChar(temp) << endl;
    */

    
    for (float j = 1.5; j >= -1; j -= 0.035) {

        for(float i = -2; i <= 2; i += 0.025) {
            w.real(i);
            w.imag(j);
            escapeNum = mandelbrotEscapeNumber(w);
            escapeChar = mandelbrotEscapeChar(escapeNum);
            cout << escapeChar;
        }
        cout << endl;
    }
    cout << endl;

    return(0);
}


//Function Implementation
int mandelbrotEscapeNumber(complex<double> c) {

    complex<double> z;
    int i = 0;

    do {

        z = z*z + c;
        i++;

        // two ways to stop, hit 500 iterations or leave bounds
        if (i >= 1000)
        break;

    } while (abs(z) <= 2.0);

    return(i);

}

char mandelbrotEscapeChar(int i) {

    if (i<5)
        return('_');
    if (i<10)
        return(' ');
    if (i<50)
        return(' ');
    if (i<100)
        return(' ');
    if (i<150)
        return(' ');

    return('*');

}
