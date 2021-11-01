#include <iostream>
using namespace std;

int main()
{
	setlocale (LC_ALL, "Russian");
	int x; //число, которое ввел пользователь
	int a,b,c; //число разбитое на цифры
	int e;
	bool flag = false;

	cout << "Введите такое трехзначное число, чтобы ни одна цифра в нем не повторялась:" << endl;
	cin >> x;

	while (flag == false){
		a = x / 100; //первая цифра
		b = (x / 10) % 10; //вторая цифра
		c = x % 10; //третья цифра
		if (x > 100) { //проверка чиисла на трехзначность
			if (x < 999){
				if (a != b){ //проверка числа на неповторяющиеся цифры
					if (b != c){
						if (c != a){
							flag = true;
						}
					}
				}
			}
		}
		if (flag == false) {
			cout << "Введенное число не соответствует требованиям." << endl << "Введите новое трехзначное число, где ни одна цифра не повторяется:" << endl;
			cin >> x;
		}
	}
	cout << "Все возможные комбинации:" << endl;
	cout << a << b << c << endl; 
	swap (b,c);
	cout << a << b << c << endl; 
	swap (a,c);
	cout << a << b << c << endl; 
	swap (b,c);
	cout << a << b << c << endl; 
	swap (a,c);
	cout << a << b << c << endl; 
	swap (b,c);
	cout << a << b << c << endl;

	if (a>b){
		if (a>c){
			if (b>c){
			cout << "Максимальное: " << a << b << c << endl;
			return 0;
			}
			else {
				cout << "Максимальное: " << a << c << b << endl;
				return 0;
			}
		}
		else {
			cout << "Максимальное: " << c << a << b << endl;
			return 0;
		}
	}
	if (b>a){
		if (b>c){
			if (a>c){
			cout << "Максимальное: " << b << a << c << endl;
			return 0;
			}
			else {
				cout << "Максимальное: " << b << c << a << endl;
				return 0;
			}
		}
		else {
			cout << "Максимальное: " << c << b << a << endl;
			return 0;
		}
	}
	if (c>a){
		if (c>b){
			if (b>a){
				cout << "Максимальное: " << c << b << a << endl;
				return 0;
			}
			else {
				cout << "Максимальное: " << c << a << b << endl;
				return 0;
			}
		}
		else {
			cout << "Максимальное: " << b << c << a << endl;
			return 0;
		}
	}
	




}
