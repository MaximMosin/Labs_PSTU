#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
	setlocale (LC_ALL, "Russian");
	int randomDigit = 0;
	int x,a;

	srand(time(NULL));
	randomDigit = 1 + rand() % 100;
	a = 7;

	cout << "Загадано число от 1 до 100. Нужно его отгадать." << endl << "У вас 7 попыток!" << endl;

	while (a!=0)
	{
		cin >> x;
		if (x<randomDigit)
			{
				cout << "Нет. Загаданное число больше, чем " << x << endl;
				a = a-1;
				cout << "Осталось " << a << " попыток" << endl;
			}
			else {
					if (x>randomDigit)
					{
						cout << "Нет. Загаданное число меньше, чем " << x << endl;
						a = a-1;
						cout << "Осталось " << a << " попыток" << endl;
					}
					else{
							if (x=randomDigit)
							{
								cout << "Верно! Загаданное число = " << x;
								return 0;
							}
						}
				}
	}
	
	cout << "Попытки кончились. Вы не угадали число. Загаданное число = " << randomDigit;

}
