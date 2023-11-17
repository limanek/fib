#include <iostream>


int fibonacci_iterative(int sequence) {
    int fib1 = 0;
    int fib2 = 1;
    int fib3 = 0;
    for (size_t i = 0; i < sequence; i++)
    {
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
    }
    return fib2;
}

int fibonacci_recursive(int sequence) {

}

int main () {
    std::cout << fibonacci_iterative(18);
    std::cout << fibonacci_recursive(18);
}
