#include <iostream>
#include <string>
using namespace std;

int main()
{
	setlocale (LC_ALL, "Russian");
	string line; //строка символов
	string a,b,c,d,e; //символы, которые вводит пользователь

	cout << "Введите первый символ: ";
	cin >> a;
	cout << "Введите второй символ: ";
	cin >> b;
	cout << "Введите третий символ: ";
	cin >> c;
	cout << "Введите четвертый символ: ";
	cin >> d;
	cout << "Введите пятый символ: ";
	cin >> e;

	line = a+b+c+d+e; //соединяет символы в одну строку
	line = string (line.rbegin(), line.rend()); //переворачивает строку
	cout << "\nСтрока в обратном порядке: " << line << endl;
}
