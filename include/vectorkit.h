#pragma once

#include <vector>
#include <initializer_list>

class Vector1D {
private:
	double length;

public:
	// constructors
	Vector1D();
	explicit Vector1D(double);

	// accessors
	double getLength() const;

	// mutators
	void setLength(double);

	// vector Operations
	Vector1D operator+(Vector1D) const; // allows addition of two 1D vectors
	Vector1D operator-(Vector1D) const; // allows ordered subtraction of two 1D vectors
	Vector1D operator-() const; // inverts the vector it is applied to
    Vector1D operator*(double) const; // scales the vector it is applied too
    double dot(Vector1D) const; // enables dot product operation
};

class Vector2D {
private:
    double components[2];

public:
    // constructors
    Vector2D();
    Vector2D(double, double);

    // accessors
    double getX();
    double getY();
    double getLength();
};

class VectorND {
private:
	std::vector<double> components;

public:
	VectorND(std::initializer_list<double>);
};
