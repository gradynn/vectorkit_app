## `vectorkit.h`

---

This library serves as building block for future projects related to physics that
I plan to build. It provides a simple interface for working with vector objects and
carrying out vector operations such as addition, scalar multiplication, and dot/cross
products.

## Initialization, Access, and Mutation

---

### Vector1D

`Vector1D()`: Default constructor. Initializes a one-dimensional vector with length 0.

`Vector1D(double)` : Initializes a one-dimensional vector with a length of type double.

`double getLength() const` : Accessor method. Returns double equal to the Vector1D object's length.

`void setLength(double)` : Mutator method. Accepts a double and sets the Vector1D object's length equal to that double.


## Vector Operations

---

### Vector1D

#### Addition/Subtraction:

The Vector1D class overloads the addition, subtraction, and unary minus operators to enable natural vector arithmetic. 

    Vector1D v1(1.0), v2(0.5);

    Vector1D v3 = v1 + v2; // v3.getLength() == 1.5
    Vector1D v4 = v1 - v2; // v4.
    Vector1D v5 = v1 + (-v2); 


