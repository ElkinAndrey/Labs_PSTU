#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	int n, m, ans1;
	bool ans2, ans3;
	cout << "Введите значение числа n : ";
	cin >> n;
	cout << "Введите значение числа m : ";
	cin >> m;
	ans1 = n++ * m;
	ans2 = n++ < m;
	ans3 = m-- > m;

	cout << "Значение выражения n++ * m : " << ans1 << endl;
	cout << "Значение выражения n++ < m : " << ans2 << endl;
	cout << "Значение выражения m-- > m : " << ans3 << endl;

	system("Pause");
	return 0;
}