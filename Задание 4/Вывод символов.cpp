#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
	// ����� �� �������� � ������� ���������
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// ������������ ������ ������
	string str;
	cout << "������� ������ : ";
	cin >> str;

	// ������ ��������� � �������� �������
	for (int i = str.size(); i >= 0; i--) {
		cout << str[i];
	}

	// ����
	cout << endl;
	system("pause");
	return 0;
}
