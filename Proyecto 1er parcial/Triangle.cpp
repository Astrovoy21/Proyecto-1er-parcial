#include "Triangle.h"
#include <iostream>

using namespace std;

Triangle::Triangle(int size, int option) {
    tr = size;
    res = option;
}
void Triangle::draw() {
    int c, d, k, j;
    
    if (res == 1) {
        for (k = 1; k <= tr - 1; k++) {
            cout << " "; 
        }
        cout << "*" << endl;
        for (k = 2; k <= tr - 1; k++) {
            for (j = 1; j <= tr - k; j++) {
                cout << " ";
            }
            cout << "*";
            for (j = 1; j <= 2 * k - 3; j++) {
                cout << " ";
            }
            cout << "*" << endl;
        }
        cout << "*";
        for (k = 1; k <= tr - 1; k++) {
            cout << " *";
        }
        cout << endl << endl;
    }

    else if (res == 2)
        for (c = 1; c <= tr - 1; c++)
        {
            for (d = 1; d <= tr - c; d++)
                cout << " ";
            for (d = 1; d <= 2 * c - 1; d++)
                cout << "*";
            cout << endl << endl;
        }
}