#include "Position.h"
#include <iostream>
#include "Shape.h"

Position::Position() {
	x = 0;
	y = 0;
	i = 0;
	retorno_ = 1;
}

void Position::movex() {
	for (int i = 0; i < x; i++) {
		std::cout << " ";
	}
	i = 0;
}

void Position::movey() {
	for (int i = 0; i < y; i++) { std::cout << "\n"; }
	i = 0;
}
void Position::setOption() {
	std::cin >> Option;
}