/*
Генерируется рандомное число в диапазоне от 1 до 100.
Пользователю необходимо угадать это число за 6 попыток.
*/

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    srand(time(0));

    const int value = rand() % 100;
    int num;

    cout << "Угадайте число в диапазоне от 1 до 100" << endl;
    for (int i = 1; i <= 6; i++) {
        cout << "Попытка ввода числа номер " << i <<  " : ";
        cin >> num;

        if (num > value)
            cout << "Возьмите поменьше" << endl;
        else if (num < value)
            cout << "Возьмите побольше" << endl;
        else if (num == value) {
            cout << "Вы нашли правильный ответ за количество попыток : " << i << ". Это число : " << value << endl;
            break;
        }
        else
            cout << "Вы не нашли число за 6 попыток" << endl;
    }

    system("pause");
}