#include <iostream>

#include "vectorkit.h"

// Constructors
Vector1D::Vector1D() : length{0} {}

Vector1D::Vector1D(double x) : length{x} {}

// Accessors
double Vector1D::getLength() const {
	return length;
}

// Mutators
void Vector1D::setLength(double x) {
	length = x;
}

// Vector Operations
Vector1D Vector1D::operator+(Vector1D b) const {
	Vector1D out(length + b.getLength());
	return out;
}

Vector1D Vector1D::operator-(Vector1D b) const {
	Vector1D out(length - b.getLength());
	return out;
}

Vector1D Vector1D::operator-() const {
	Vector1D out(length * (-1));
	return out;
}





