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

	cout << "�������� ����� �� 1 �� 100. ����� ��� ��������." << endl << "� ��� 7 �������!" << endl;

	while (a!=0)
	{
		cin >> x;
		if (x<randomDigit)
			{
				cout << "���. ���������� ����� ������, ��� " << x << endl;
				a = a-1;
				cout << "�������� " << a << " �������" << endl;
			}
			else {
					if (x>randomDigit)
					{
						cout << "���. ���������� ����� ������, ��� " << x << endl;
						a = a-1;
						cout << "�������� " << a << " �������" << endl;
					}
					else{
							if (x=randomDigit)
							{
								cout << "�����! ���������� ����� = " << x;
								return 0;
							}
						}
				}
	}
	
	cout << "������� ���������. �� �� ������� �����. ���������� ����� = " << randomDigit;

}
