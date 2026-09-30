#include <iostream>

using namespace std;

// C-style: Pass by pointer. Requires dereferencing with '*' and passing with '&'
void swapC(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}
// C++-style: Pass by reference. Syntax is identical to normal variables
void swap(int &a, int &b) {
    int aux = a;
    a = b;
    b = aux;
}

int main() {
    int 
        x = 10,
        y = 20;
    
    // C style call
    cout << "[C++] start: x = " << x << ", y = " << y << "\n";
    swap(x, y); 
    cout << "[C++] end: x = " << x << ", y = " << y << "\n";
    
    swap(x, y); 

    // C++ style call
    cout << "[C] start: x = " << x << ", y = " << y << "\n";
    swapC(&x, &y);
    cout << "[C] end: x = " << x << ", y = " << y << "\n";
    
    return 0;
}
// [Output]
// [C++] start: x = 10, y = 20
// [C++] end: x = 20, y = 10
// [C] start: x = 10, y = 20
// [C] end: x = 20, y = 10