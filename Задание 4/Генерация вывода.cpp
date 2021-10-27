#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    // Вывод целой константы  
    const int first = 10;
    cout << first << endl;

    // Вывод целого числа
    int second = 20;
    cout << second << endl;

    // Вычетание из целого числа 1 и вывод в консоль
    second--;
    cout << second << endl;

    // Надо
    system("pause");
    return 0;
}