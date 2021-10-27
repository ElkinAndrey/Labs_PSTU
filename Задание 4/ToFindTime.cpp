#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    
    // Объявление переменных
    int hour, minute, second, hour1, minute1, second1, hour2, minute2, second2;

    // Ввод данных пользователем
    cout << "Введите час в первый момент времени : ";
    cin >> hour1;
    cout << "Введите минуту в первый момент времени : ";
    cin >> minute1;
    cout << "Введите секунду в первый момент времени : ";
    cin >> second1;
    cout << "Введите час во второй момент времени : ";
    cin >> hour2;
    cout << "Введите минуту во второй момент времени : ";
    cin >> minute2;
    cout << "Введите секунду во второй момент времени : ";
    cin >> second2;

    // Нахождение часов
    hour = hour2 - hour1;

    // Нахождение минут, если в коцне минут меньше чем в начале, то из часов вычетается 1
    if (minute2 - minute1 >= 0)
        minute = minute2 - minute1;
    else {
        minute = minute2 - minute1 + 60;
        hour -= 1;
    }
    
    // Нахождение секунд, если в конце секунд меньше чем в начале, то из минут вычетается 1
    if (second2 - second1 > 0)
        second = second2 - second1;
    else {
        second = second2 - second1 + 60;
        minute -= 1;
    }

    // Вывод результата
    cout << endl << "Начало в " << hour1 << ":" << minute1 << ":" << second1 << endl;
    cout << "Конец в " << hour2 << ":" << minute2 << ":" << second2 << endl;
    cout << "Продолжительность " << hour << ":" << minute << ":" << second << endl;

    system("pause");
    return 0;
}