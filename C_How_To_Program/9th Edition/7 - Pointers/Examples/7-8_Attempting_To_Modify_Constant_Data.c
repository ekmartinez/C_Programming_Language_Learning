// Attempting to modify data through a
// non-constant pointer to constant data.

void f(const int *xPtr); // prototype

int main(void) {
    int y = 7; // define y

    f(&y); // f attempts illegal modification
}

// xPtr cannot be used to modify the
// value of the variable to which it points
void f(const int *xPtr) {
    *xPtr = 100; // error cannot modify a const object
}

