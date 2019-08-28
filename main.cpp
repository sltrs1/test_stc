#include <iostream>

#include "fib.h"

int main() {


    std::cout << "Hello, World!" << std::endl;

    for (int i = 0; i < 110; i += 10)
    {
        std::cout << i << ") " << fib(i) << std::endl;
    }
    std::cout <<  std::endl;

    std::cout << "N = 93, fib = " << fib(93)  << std::endl;
    std::cout << "N = 94, fib = " << fib(94)  << std::endl;

    return 0;
}