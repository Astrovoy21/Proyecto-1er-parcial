#include "Menu.h"
#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Visual.h"

using namespace std;


void Menu::printMenu() {
    cout << "Choose the shape:" << endl;
    cout << "1 - Square\n2 - Triangle" << endl;
    cin >> choose;
    cout << "Size:" << endl;
    cin >> size;
    cout << "Choose an Option\n 1 - Empty\n 2 - Filled" << endl;
    cin >> Option;

    Shape* s = nullptr;
    if (choose == 1) {
        s = new Square(size, Option);
    }
    else {
        s = new Triangle(size, Option);
    }

    Visual canva;
    canva.printshape(s);
}
