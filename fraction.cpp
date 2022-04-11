#include <iostream>
#include "Fraction.h"


using namespace std;

//Реализация метода для инициализации полей структры
void fraction::Init(double F, int S)
{
	first = F; second = S;
}

//Реализация метода для четния значений полей
void fraction::Read()
{
	cout << "\nFirst!? - "; 
	cin >> first; 
	cout << "Second? - ";
	cin >> second;

}

//Реализация метода для вывода значений полей структруы
void fraction::Show()
{
	cout << "\nFirst = " << first;
	cout << "\nSecond = " << second;
	cout << "\n";
}
//Метод для возведения в степень

double fraction::Power()
{
	return pow(first, second);
}

//Метод выделения целой части дроби
/*int fraction::ipart()
{

}*/