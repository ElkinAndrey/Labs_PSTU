#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	// Чтобы всё работало с русским алфавитом
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Пользователь вводит строку
	string str;
	cout << "Введите строку : ";
	cin >> str;

	// Строка выводится в обратном порядке
	for (int i = str.size(); i >= 0; i--) {
		cout << str[i];
	}

	// Надо
	cout << endl;
	system("pause");
	return 0;
}
