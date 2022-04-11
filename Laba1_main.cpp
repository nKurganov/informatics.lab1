#include <iostream>
#include "Fraction.h"
using namespace std;

fraction make_fraction(double F, int S)
{
	fraction t; //������� ��������� ����������
	t.Init(F, S); //���������������� ���� ���������� t � ������� ���������� ������� 
	return t; //������� �������� ���������� t
}

void main()
{
	setlocale(LC_ALL, "Russian");

	fraction A; // ����������� ���������� A
	fraction B; // ����������� ���������� A
	A.Init(3.0, 2); // ������������� ���������� �
	B.Read(); // ���� ����� ���������� �
	A.Show(); // ����� �������� ���������� �
	B.Show(); // ����� �������� ���������� B

	cout << endl;

	//����� �������� �������, ������������ � ������� ������� Power()
	cout << "���������� � ������� - A.Power(" << A.first << "," << A.second << ") = " << A.Power() << endl;
	cout << "���������� � ������� - B.Power(" << B.first << "," << B.second << ") = " << B.Power() << endl;

	// ��������� 
	fraction* X = new fraction; // ��������� ������ ��� ������������ ����������
	X->Init(2.0, 5); // ������������� 
	X->Show(); // ����� �������� �����
	X->Power(); //���������� �������

	cout << "X.Power(" << X->first << "," << X->second << ") =" << X->Power() << endl;
	// �������
	
	fraction mas[3]; //����������� �������
	for (int i = 0; i < 3; i++)
		mas[i].Read(); //������ �������� �����
	for (int i = 0; i < 3; i++)
		mas[i].Show(); //����� �������� �����
	for (int i = 0; i < 3; i++)
	{
		mas[i].Power(); // ��������� �������
		cout << "mas[" << i << "].Power(" << mas[i].first << "," << mas[i].second << ")=";
		cout << mas[i].Power() << endl;
	}
	// ������������ �������
	fraction* p_mas = new fraction[3]; // ��������� ������
	for (int i = 0; i < 3; i++)
		p_mas[i].Read();//������ �������� �����
	for (int i = 0; i < 3; i++)
		p_mas[i].Show(); //����� �������� �����
	for (int i = 0; i < 3; i++)
	{
		mas[i].Power(); // ��������� �������
		cout << "p_mas[" << i << "].Power(" << p_mas[i].first << "," << p_mas[i].second << ")=";
		cout << p_mas[i].Power() << endl;
	}
	// ����� ������� make_fraction()
	double y; int z;
	cout << "First?";
	cin >> y;
	cout << "Second?";
	cin >> z;
	// ���������� F ����������� � ������� ������� make_fraction()
	fraction F = make_fraction(y, z);
	F.Show(); 
}