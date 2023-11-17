#include <iostream>


int fibonacci_iterative(int sequence) {
    int fib1 = 0;
    int fib2 = 1;
    int fib3 = 0;
    for (size_t i = 0; i < sequence -1; i++)
    {
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
    }
    return fib2;
}

int fibonacci_recursive(int sequence) {
    if (sequence == 1 || sequence == 2) {
        return 1;
    }
    return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
}

int main () {
    std::cout << fibonacci_iterative(18) << std::endl;
    std::cout << fibonacci_recursive(18) << std::endl;
}
