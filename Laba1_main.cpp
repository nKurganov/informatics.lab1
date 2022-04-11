#include <iostream>
#include "Fraction.h"
using namespace std;

fraction make_fraction(double F, int S)
{
	fraction t; //создаем временную переменную
	t.Init(F, S); //Инициализировали поля переменной t с помощью параметров функции 
	return t; //Вернули значение переменной t
}

void main()
{
	setlocale(LC_ALL, "Russian");

	fraction A; // Определение переменной A
	fraction B; // Определение переменной A
	A.Init(3.0, 2); // Инициализация переменной А
	B.Read(); // Ввод полей переменных В
	A.Show(); // Вывод значений переменных А
	B.Show(); // Вывод значений переменных B

	cout << endl;

	//Вывод значений степени, вычесленного с помощью функции Power()
	cout << "Возведение в степень - A.Power(" << A.first << "," << A.second << ") = " << A.Power() << endl;
	cout << "Возведение в степень - B.Power(" << B.first << "," << B.second << ") = " << B.Power() << endl;

	// Указатели 
	fraction* X = new fraction; // Выделение памяти под динамическую переменную
	X->Init(2.0, 5); // Инициализация 
	X->Show(); // Вывод значений полей
	X->Power(); //Вычесление степени

	cout << "X.Power(" << X->first << "," << X->second << ") =" << X->Power() << endl;
	// Массивы
	
	fraction mas[3]; //Определение массива
	for (int i = 0; i < 3; i++)
		mas[i].Read(); //Чтение значений полей
	for (int i = 0; i < 3; i++)
		mas[i].Show(); //Вывод значений полей
	for (int i = 0; i < 3; i++)
	{
		mas[i].Power(); // Вычесляем степени
		cout << "mas[" << i << "].Power(" << mas[i].first << "," << mas[i].second << ")=";
		cout << mas[i].Power() << endl;
	}
	// Динамеческие массивы
	fraction* p_mas = new fraction[3]; // Выделение памяти
	for (int i = 0; i < 3; i++)
		p_mas[i].Read();//Чтение значений полей
	for (int i = 0; i < 3; i++)
		p_mas[i].Show(); //Вывод значений полей
	for (int i = 0; i < 3; i++)
	{
		mas[i].Power(); // Вычесляем степени
		cout << "p_mas[" << i << "].Power(" << p_mas[i].first << "," << p_mas[i].second << ")=";
		cout << p_mas[i].Power() << endl;
	}
	// Вызов функции make_fraction()
	double y; int z;
	cout << "First?";
	cin >> y;
	cout << "Second?";
	cin >> z;
	// Переменная F формируется с помощью функции make_fraction()
	fraction F = make_fraction(y, z);
	F.Show(); 
}