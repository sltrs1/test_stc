//
// Created by root on 8/28/19.
//

#ifndef TEST_STC_FIB_H
#define TEST_STC_FIB_H

#include <climits>
#include <iostream>

// Структура,содержащая информацию о вычислении числа Фибоначчи
 struct fib_result {
    bool correct;               // Было ли вычисление завершено корректно
    unsigned int Ncalc;         // Номер вычисленного числа
    unsigned long long result;  // Число Фибоначчи

    friend std::ostream& operator<<(std::ostream &os, const fib_result& n);
} ;


// Нерекурсиыное вычисление числа Фибоначчи

fib_result fib(const unsigned int n);


#endif //TEST_STC_FIB_H
