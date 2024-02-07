﻿// Пользователь вводит число. 
// 1. Определить количество цифр в этом числе
// 2. Посчитать их сумму 
// 3. Посчитать среднее арифметическое
// 4. Определить количество нулей в этом числе
// Общение с пользователем организовать через меню

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    long long int userInput = 0;
    cout << "Введите любое число и я расскажу вам о нём подробно: ";
    cin >> userInput;

    int  counterDigits = 0, sum = 0, arithmeticMean = 0,  counterZero = 0  ;    

    if (userInput == 0)
    {
        counterZero = 0;
    }
    else
    {
        while (userInput > 0)
        {
            int digit = userInput % 10;

            if (digit == 0)
                ++counterZero; // Считаю нули

            sum += digit; // Считаю сумму всех цифр
            userInput /= 10;
            ++counterDigits ; // Считаю кол-во цифр
        }
    }
    

    arithmeticMean = sum / counterDigits; // Считаю среднее арифметическое



    cout << "Количество цифр в этом числе: " << " >>> " << counterDigits << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "Сумма всех цифр в этом числе: " << " >>> " << sum << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "Среднее арифметическое в этом числе: " << " >>> " << arithmeticMean << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "Всего нулей в этом числе: " << " >>> " << counterZero << endl;
    cout << "----------------------------------------------------------------------------" << endl;
}

// В данной программе есть изъян. Если вводить число с нулём в первом разряде, распознаётся как восьмеричное число. 
// В следующей стабильной версии будет пофиксино