#include <iostream>

#include "vectorkit.h"

VectorND::VectorND(std::initializer_list<double> args) {
	for (double i : args) {
		this->components.push_back(i);
	}
}

