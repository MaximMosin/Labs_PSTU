#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstdlib>
#include <sstream>
using namespace std;

int main (void)
{
	setlocale (LC_ALL, "Russian");
	int x=0; //��������� �����
	string str; //��������� ����� ���� int ��������������� � ������ ���� string
	string a,b,c; //�������� ����� �� �����
	string x1,x2,x3,x4,x5,x6; //���������� �� ����
	int q,w,e,r,t,y,max; //���������� ���� string ��������������� � ��� int (��� ���������� ������������� �����)
	
	while ((x<100)||(x>999)) //�������� �� ����������� �����
	{
		cout << "������� ����� ���������� �� ���� ����" << endl;
		cin >> x;
	}

	ostringstream stream; //�������������� ���������� ����� �� ���� int � ��� string ��� ��������� ������ ����� � ��������� ���������� 
	stream << x;
	str = stream.str();
	a = str;
	b = str;
	c = str;

	a.pop_back(); //������� ��� ��������� ����� ��� ��������� ������ ����� �� ���������
	a.pop_back();
	b.pop_back();
	b = string (b.rbegin(), b.rend()); //������� ������ � ��������� ����� ��� ��������� ������� ����� �� ���������
	b.pop_back();
	c = string (c.rbegin(), c.rend()); //������� ��� ������ ����� ��� ��������� ������� ����� �� ���������
	c.pop_back();
	c.pop_back();

	x1 = a+b+c; //����������
	x2 = a+c+b;
	x3 = b+a+c;
	x4 = b+c+a;
	x5 = c+a+b;
	x6 = c+b+a;

	q = atoi(x1.c_str()); //�������������� ���������� �� ���� string � ��� int ��� ���������� ���������
	w = atoi(x2.c_str());
	e = atoi(x3.c_str());
	r = atoi(x4.c_str());
	t = atoi(x5.c_str());
	y = atoi(x6.c_str());

	max = q; //���������� ���������
	if (w>max) max = w;
	if (e>max) max = e;
	if (r>max) max = r;
	if (t>max) max = t;
	if (y>max) max = y;


	cout << "����������:" << endl << q << endl << w << endl << e << endl << r << endl << t << endl << y << endl;
	cout << "������������: " << max;

}