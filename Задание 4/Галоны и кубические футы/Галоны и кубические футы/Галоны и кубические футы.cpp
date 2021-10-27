#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    // Объявление переменных
    float i, ans;

    // Пользователь вводит число галонов
    cout << "Введите число галлонов : ";
    cin >> i;

    // По формуле находится объем в кубических футах
    ans = i / 7.481;

    // Вывод ответа
    cout << "Эквивалентный объем в кубических футах : " << ans << endl;

    // Надо
    system("pause");
    return 0;
}