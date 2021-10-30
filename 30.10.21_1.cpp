#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <sstream>
using namespace std;

int main (void)
{
	setlocale (LC_ALL, "Russian");
	int x=0; //введенное число
	string str; //введенное число типа int преобразованная в строку типа string
	string a,b,c; //разбитое число на цифры
	string x1,x2,x3,x4,x5,x6; //комбинации из цифр
	int q,w,e,r,t,y,max; //комбинации типа string преобразованные в тип int (для нахождения максимального числа)
	
	while ((x<100)||(x>999)) //проверка на трехзначное число
	{
		cout << "Введите любую комбинацию из трех цифр" << endl;
		cin >> x;
	}

	ostringstream stream; //преобразование введенного числа из типа int в тип string для отделения каждой цифры в отдельную переменную 
	stream << x;
	str = stream.str();
	a = str;
	b = str;
	c = str;

	a.pop_back(); //удаляет две последние цифры для отделения первой цифры от остальных
	a.pop_back();
	b.pop_back();
	b = string (b.rbegin(), b.rend()); //удаляет первую и последнюю цифру для отделения средней цифры от остальных
	b.pop_back();
	c = string (c.rbegin(), c.rend()); //удаляет две первые цифры для отделения третьей цифры от остальных
	c.pop_back();
	c.pop_back();

	x1 = a+b+c; //комбинации
	x2 = a+c+b;
	x3 = b+a+c;
	x4 = b+c+a;
	x5 = c+a+b;
	x6 = c+b+a;

	q = atoi(x1.c_str()); //преобращование комбинаций из типа string в тип int для нахождения максимума
	w = atoi(x2.c_str());
	e = atoi(x3.c_str());
	r = atoi(x4.c_str());
	t = atoi(x5.c_str());
	y = atoi(x6.c_str());

	max = q; //нахождение максимума
	if (w>max) max = w;
	if (e>max) max = e;
	if (r>max) max = r;
	if (t>max) max = t;
	if (y>max) max = y;


	cout << "Комбинации:" << endl << q << endl << w << endl << e << endl << r << endl << t << endl << y << endl;
	cout << "Максимальное: " << max;

}
