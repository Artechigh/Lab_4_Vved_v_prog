﻿
#include <iostream>

int main()
{
    setlocale(LC_CTYPE, "Russian");
    std::cout << "\n" << "Задача 1\n" << "\n";// Задача 1                    
    std::cout << "Введите длину прямоугольника ";  //общение с пользователем
    double a = 0;                                    //инициализация "a" (длины прямоугольника)
    std::cin >> a;                                 //ввод длины прямоугольника
    std::cout << "Введите ширину прямоугольника "; //общение с пользователем
    double b = 0;                                    //инициализация "b" (ширины прямоугольника)
    std::cin >> b;                                  //ввод ширины прямоугольника
    if (a == 0 or b == 0)
    {
        bool flag = 0;                              //флаг - тригер выхода из циклв
        int k = 0;                                  //счётчик попыток
        while (flag != 1)
        {
            k = k++;
            std::cout << "Это не прямоугольник ";
            for (int i = 0; i < k; i++)
            {
                std::cout << ":/ ";
            }
            std::cout << "Попробуй ещё раз...\n";
            std::cout << "Введите длину прямоугольника ещё раз :/ ";  //общение с пользователем
            std::cin >> a;                                            //ввод длины прямоугольника
            std::cout << "Введите ширину прямоугольника ещё раз :/ "; //общение с пользователем
            std::cin >> b;                                            //ввод ширины прямоугольника
            if (a != 0 and b != 0) flag = 1;
        }
    }
    double P = 2 * (a + b);                          //инициализация "P" и вычисление периметра прямоугольника
    double S = a * b;                                //инициализация "S" и вычисление площади прямоугольника
    std::cout << "Периметр фигуры = " << P << "\n";          //Вывод значения периметра
    std::cout << "Площадь фигуры = " << S << "\n";           //Вывод значения площади                 
    a = 0;
    b = 0;
    P = 0;
    S = 0;
    std::cout << "\n" << "Задача 2\n" << "\n";// Задача 2
    std::cout << "Введите диаметр окружности ";    //общение с пользователем
    double d = 0;                                    //инициализация "d"
    std::cin >> d;
    double l = 0;                                    //инициализация "l"
    P = 3.14;                                       // Запись сокр значения числа пи в "P"
    l = P * d;                                      // Вычисление длины окружности
    std::cout << "Длина окружности = " << l << "\n";                                 // Вывод полученного значения
    l = 0;
    P = 0;
    d = 0;
    std::cout << "\n" << "Задача 3\n" << "\n";// Задача 3
    std::cout << "Введите первое число ";   //общение с пользователем
    std::cin >> a;                          //ввод 1-ого числа в "a"
    std::cout << "Введите второе число ";   //общение с пользователем
    std::cin >> b;                          //ввод 2-ого числа в "b"
    d = (a + b) / 2;                        //вычисление среднего значения
    std::cout << "Среднее значение чисел = " << d << "\n"; // вывод ответа
    a = 0;
    b = 0;
    d = 0;
    std::cout << "\n" << "Задача 4\n" << "\n";// Задача 4
    std::cout << "Введите первое число ";   //общение с пользователем
    std::cin >> a;                          //ввод 1-ого числа в "a"
    std::cout << "Введите второе число ";   //общение с пользователем
    std::cin >> b;                          //ввод 2-ого числа в "b"
    a = pow(a, 2);                          //возведение в квадрат "a"
    b = pow(b, 2);                          //возведение в квадрат "b"
    std::cout << "Сумма квадратов = " << (a + b) << "\n" << "Разность квадратов = " << (a - b) << "\n" << "Произведение квадратов = " << (a * b) << "\n" << "Частное квадратов = " << (a / b) << "\n"; //общение с пользователем
    a = 0;
    b = 0;
    std::cout << "\n" << "Задача 5\n" << "\n";// Задача 5
    std::cout << "Введите первое число ";   //общение с пользователем
    std::cin >> a;                          //ввод 1-ого числа в "a"
    std::cout << "Введите второе число ";   //общение с пользователем
    std::cin >> b;                          //ввод 2-ого числа в "b"
    a = abs(a);                             //возвращение модуля "a" 
    b = abs(b);                             //возвращение модуля "b"
    std::cout << "Сумма модулей = " << (a + b) << "\n" << "Разность модулей = " << (a - b) << "\n" << "Произведение модулей = " << (a * b) << "\n" << "Частное модулей = " << (a / b) << "\n";  //общение с пользователем
    a = 0;
    b = 0;
    return 0;
}