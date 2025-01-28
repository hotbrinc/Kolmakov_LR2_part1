#include <iostream>
#include "Kolmakov_MathTask.h"

using namespace std;

int main()
{
    string str_input; //вспомогательная переменная

    // ввод ширины прямоугольника
    cout << "input height A" << endl;
    // ввод знначения в текстовом виде
    getline(cin, str_input);
    // пока ввод некорректен вводимое значение нельзя преобразовать в int
    while (!UserInput(str_input)) {
        cout << "input height A" << endl;
        // повторный ввод
        getline(cin, str_input);
    }
    // присвоение переменной NumberA преобразованного в тип int правильно введенного текстового значения
    int NumberA = stoi(str_input);

    
    // Ввод высоты прямоугольника
    cout << "input height B" << endl;
    getline(cin, str_input);
    while (!UserInput(str_input)) {
        cout << "input height B" << endl;
        getline(cin, str_input);
    }
    int NumberB = stoi(str_input);

    int RectangleArea = CalcRectangleArea(NumberA, NumberB)
    cout << "Area of Rectangle is " << RectangleArea << endl;

}