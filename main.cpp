#include <iostream>


class Calculator {
public:

    static int add(int a, int b) {
        return a + b;
    }


    static int subtract(int a, int b) {
        return a - b;
    }


    static int multiply(int a, int b) {
        return a * b;
    }


    static int divide(int a, int b) {
        return a / b; 
    }
};

int main() {

    int sum = Calculator::add(5, 3);        
    int diff = Calculator::subtract(10, 4);  
    int prod = Calculator::multiply(4, 7);   
    int quot = Calculator::divide(20, 4);   

    // Print results
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << diff << std::endl;
    std::cout << "Product: " << prod << std::endl;
    std::cout << "Quotient: " << quot << std::endl;

    return 0;
}
