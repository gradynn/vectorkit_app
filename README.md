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

#### Addition:

`Vector1D add(Vector1D&) const`: Addition implemented as Vector1D class member function.

    Vector1D v1(1.2); // v1.getLength() == 1.2
    Vector1D v2(0.8); // v2.getLength() == 0.8

    Vector1D v3 = v1.add(v2); // v3.getLength() == 2.0
