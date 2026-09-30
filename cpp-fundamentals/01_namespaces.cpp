#include <iostream>

// Creation of a custom namespace
namespace MathTest {
    int sumar(int a, int b) {
        return a + b;
    }
}

namespace Other {
    // Same function name, but in a different context
    int sumar(int a, int b) {
        return a + b;
    }
}

int main() {
    // The '::' operator (scope resolution) indicates which namespace the function comes from
    int math_result = MathTest::sumar(2, 4);

    // 'std' is the "Standard Namespace" where the entire C++ standard library lives
    std::cout << "Math: " << math_result << "\n";
    std::cout << "Other: " << Other::sumar(2, 4) << "\n";
    
    return 0;
}
// [Output]
// Math: 6
// Other: 6