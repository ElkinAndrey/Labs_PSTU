#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    // Приложение выполняется, пока пользователь не закроет его
    while (true) {
        // Объявление переменных
        double temp_c, temp_f;

        // Пользователь вводит температуру в фаренгейтах
        cout << "Введите температуру в градусах по Фаренгейту : ";
        cin >> temp_f;

        // По формуле вычисляется температура в цельсиях
        temp_c = (5.0 / 9.0) * (temp_f - 32);

        // Ответ выводится на экран
        cout << "Температура в градусах по Цельсию : " << temp_c << endl << endl;
    }
    
    // Надо
    system("pause");
    return 0;
}