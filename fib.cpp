#include <iostream>


int fibonacci_iterative(int number) {
    int fib1 = 0;
    int fib2 = 1;
    int fib3 = 0;
    for (size_t i = 0; i < number; i++)
    {
        fib3 = fib1 + fib2;
        std::cout << fib3 << std::endl;
        fib1 = fib2;
        std::cout << fib1 << std::endl;
        fib2 = fib3;
        std::cout << fib2 << std::endl;
        std::cout << std::endl;
    }
    return fib2;
}

int main () {
    std::cout << fibonacci_iterative(18);
}
//int fibonacci_recursive(int sequence);