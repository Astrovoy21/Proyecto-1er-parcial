#include "Shape.h"
#include "Square.h"
#include <iostream>

using namespace std;

Square::Square(int size, int option) {
    sq = size;
    res = option;
}

void Square::draw() {
    
    cout << endl; cout << endl; cout << endl; cout << endl;
    if (res == 1)
    {
        for (int a = 0; a < sq; a++)
        {
            for (int b = 0; b < sq; b++)
            {
                if (a == 0 || a == sq - 1 || b == 0 || b == sq - 1)
                    cout << "* ";
                else cout << "  ";
            }
            cout << endl;
        }
    }

    else if (res == 2) {
        for (int x = 0; x < sq; x++)
        {
            for (int y = 0; y < sq; y++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
}