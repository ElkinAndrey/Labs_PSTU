/*
Задача: 
На ввод поступает число от 100 до 999 включительно:
Цифры в том числе не должны повторяться.
Выведите все комбинации числа без повторов.
Вывести максимальное число из комбинаций
*/

#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int s; // Строка
    int max = 0;
    cout << "Введите число от 100 до 999 : ";
    cin >> s;

    // Массив со всеми значениямиы
    int first = s / 100;
    int second = s / 10 % 10;
    int third = s % 10;
    int mas[] = {
        first * 100 + second * 10 + third,
        first * 100 + third * 10 + second,
        second * 100 + first * 10 + third,
        second * 100 + third * 10 + first,
        third * 100 + first * 10 + second,
        third * 100 + second * 10 + first,
    };

    // Вывод вcех значений
    cout << "Все комбинации числа без повторов : " << endl;
    for (int i : mas) {
        cout << i << endl;
    }

    // Поиск наибольшего
    for (int i : mas) {
        if (i > max)
            max = i;
    }
    cout << endl << "Максимальное число из комбинаций : " << max << endl;

    system("pause");
    return 0;
}