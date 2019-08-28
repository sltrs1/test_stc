//
// Created by root on 8/28/19.
//

#include "fib.h"


unsigned long long fib(const unsigned int n)
{
    // Первые 3 числа возвращаются без вычисления
    if (n == 0) return 0;
    if (n <= 2) return 1;

    unsigned long long  f1 = 1; // N-1 число Фибоначчи
    unsigned long long  f2 = 1; // N-2 число Фибоначчи
    unsigned long long  answer = 0; // N число Фибоначчи

    for (int i = 2; i < n; i++)
    {
        if (f1 > (ULLONG_MAX - f2))
        {
            // Сломаться должно где-то в районе 94 числа
            std::cout << "Error! Unsigned long long overflow! Value for N = "<< n << " can not be calculated, returning last available value for N = " << i << std::endl;
            return answer;
        }

        answer = f1 + f2;
        f2 = f1;
        f1 = answer;
    }
    return answer;

}