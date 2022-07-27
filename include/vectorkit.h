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
	Vector1D add(Vector1D&) const;

};

class VectorND {
private:
	std::vector<double> components;

public:
	VectorND(std::initializer_list<double>);
};
