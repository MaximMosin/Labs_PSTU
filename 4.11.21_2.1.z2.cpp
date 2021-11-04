#include <iostream>
using namespace std;

int main()
{
	setlocale (LC_ALL, "Russian");

	const float x = 7.481; //кол-во галлонов в одном кубическом футе
	float a; //хранит кол-во галлонов, которые ввел пользователь
	float b; //кубические футы

	cout << "Введите кол-во галлонов:" << endl;
	cin >> a;
	b = a/x;
	cout << "Объем в куб.футах = " << b << endl;
}
