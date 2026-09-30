#include <iostream>
#include <string>   // Required for std::string
#include <cstring>  // Required for C-style string functions

int main() {
    // C-style strings require manual size management and functions like strcat()
    char greeting_c[20] = "Hola";
    strcat(greeting_c, " C");

    // C++ std::string manages memory dynamically and supports intuitive operators
    std::string greeting_cpp = "Hola";
    
    // Concatenation is done directly with the '+' or '+=' operator
    greeting_cpp += " C++";

    // Comparing strings uses '==' instead of strcmp()
    if (greeting_cpp == "Hola C++") {
        // Getting the string length is a method call, no strlen() needed
        int len = greeting_cpp.length();
        std::cout << greeting_cpp << " (Length: " << len << ")\n";
    }

    return 0;
}

// Output
// Hola C++ (Length: 8)