#include <iostream>
#include "Fraction.h"


using namespace std;

//���������� ������ ��� ������������� ����� ��������
void fraction::Init(double F, int S)
{
	first = F; second = S;
}

//���������� ������ ��� ������ �������� �����
void fraction::Read()
{
	cout << "\nFirst!? - "; 
	cin >> first; 
	cout << "Second? - ";
	cin >> second;

}

//���������� ������ ��� ������ �������� ����� ���������
void fraction::Show()
{
	cout << "\nFirst = " << first;
	cout << "\nSecond = " << second;
	cout << "\n";
}
//����� ��� ���������� � �������

double fraction::Power()
{
	return pow(first, second);
}

//����� ��������� ����� ����� �����
/*int fraction::ipart()
{

}*/