#ifndef _KOLMAKOV_MATHTASK_H_
#define _KOLMAKOV_MATHTASK_H_

#include <cstring>
using namespace std;

//проверка корректности вводимых данных
bool UserInput(string input) {
//если строка пустая - ввод некорректен
    if (input.empty()) return false;
//попытаться
    try {
        //преобразование введенного в int
        int number = stoi(input);
    }
    catch (...) // если возникла ошибка в блоке try
    { return false; }
    return true;
}

//вычисление площади прямоугольника
int CalcRectangleArea(int NumberA, int NumberB) {
    return NumberA * NumberB ;
}
#endif