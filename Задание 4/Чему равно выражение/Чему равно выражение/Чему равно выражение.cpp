#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    // Записывается i
    int i = 1;

    // Находится ответ искомого выражения
    int ans = ++i * i++;

    // Выводится ответ
    cout << "Выражение ++i * i++, при i = 1, будет равно : " << ans << endl;

    // Надо
    system("pause");
    return 0;
}


