/*
Задание 5: Пользователь вводит целое число А.Программа должна определить, что куб суммы цифр этого числа равен А* А
*/
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	int A, A1, sum = 0;
	cout << "A = "; cin >> A;
	if (A < 0) A = -A;
	A1 = A;
	while (A > 0)
	{
		sum += A % 10;
		A /= 10;
	}
	if (sum * sum * sum == A1 * A1) cout << "Подходит\n";
	else cout << "Не подходит\n";
	return 0;
}
