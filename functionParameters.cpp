#include <iostream>


using namespace std;

// Takes arguments by value
int square(int x) {
    x = x * x;
    return x;
}

// Takes arguments by pointer(address)
void swap(int *x, int *y) {
    // temp get value of integer where x is pointing
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Overload of previous swap function
// Takes arguments by reference
void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}


int main() {
    int a = 9, b;
    b = square(a);
    cout << "a = " << a << ", b = " << b << endl;
    // swap by pointer (pass in address)
    swap(&a, &b);
    cout << "a = " << a << ", b = " << b << endl;
    // swap by reference
    swap(a, b);
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
