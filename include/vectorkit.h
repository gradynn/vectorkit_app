#pragma once

#include <vector>
#include <initializer_list>

class Vector1D {
private:
	double length;

public:
	// Constructors
	Vector1D();
	explicit Vector1D(double);

	// Accessors
	double getLength() const;

	// Mutators
	void setLength(double);

	// Vector Operations
	Vector1D operator+(Vector1D) const; // allows addition of two 1D vectors
	Vector1D operator-(Vector1D) const; // allows ordered subtraction of two 1D vectors
	Vector1D operator-() const; // inverts the vector it is applied to

};

class VectorND {
private:
	std::vector<double> components;

public:
	VectorND(std::initializer_list<double>);
};
