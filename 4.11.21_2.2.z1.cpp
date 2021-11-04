#include <iostream>
using namespace std;

int main()
{
	setlocale (LC_ALL, "Russian");

	float F; //температура по Фаренгейту
	float C; //температура по Цельсию

	cout << "Введите температуру в градусах по Фаренгейту:" << endl;
	cin >> F;
	C = (F-32)*5/9;
	cout << F << "°F = " << C << "°C" << endl;
}
