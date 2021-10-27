#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	// Объявление переменных
	double i, j, a;

	// Пользователь вводит два числа
	cout << "Программа, умножает два числа.\n";
	cout << "Введите первое число : ";
	cin >> i;
	cout << "Введите второе число : ";
	cin >> j;

	// Числа перемножаются 
	a = i * j;

	// Число выводится на экран с точностью 4 знака полсе запятой
	cout << fixed << showpoint;
	cout << "Ответ : " << setprecision(4) << a << endl;

	// Надо
	system("pause");
	return 0;
}