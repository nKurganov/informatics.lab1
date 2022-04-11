struct fraction
{
	double first;
	int second;
	void Init(double, int); // Метод для инициализации полей
	void Read(); //Метод для чтения полей
	void Show(); //Метод для вывода значения полей
	double Power(); //Вычесление степени
	int ipart(); //Метод выделения целой части дроби
};
