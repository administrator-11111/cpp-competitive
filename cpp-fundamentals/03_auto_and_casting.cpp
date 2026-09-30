#include <iostream>

int main() {
    // In C, you must exlicity declare the data type, e.g.,
    float pi_c = 3.14f;

    // The 'auto' keyword lets the C++ compiler deduce the type at compile time
    auto pi_cpp = 3.14f;
    auto message = "Hello world";

    // C-style type casting can be unsafe and hard to find in large codebases
    int integer_pi_c = (int)pi_c;
    
    // C++ provides 'static_cast' for safer, explicit compile-time conversions
    int integer_pi_cpp = static_cast<int>(pi_cpp);

    std::cout << "'auto' = " << pi_cpp << "\n";
    std::cout << "'static cast' = " << integer_pi_cpp << "\n";
    
    return 0;
}

// [Output]
// 'auto' = 3.14
// 'static cast' = 3