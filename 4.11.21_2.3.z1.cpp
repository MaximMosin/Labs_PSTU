#include <iostream>
using namespace std;

int main()
{
	setlocale (LC_ALL, "Russian");
	int a,b; //числа, которые ввел пользователь


	cout << "Умножение двух чисел" << endl;
	cout << "Введите первый множитель: ";
	cin >> a;
	cout << "Введите второй множитель: ";
	cin >> b;
	cout << "Результат: " << a << " * " << b << " = " << a*b << endl;
}
