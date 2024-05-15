//ЗОНА НАСТРОЕК И ПРЕПРОЦЕССОР
#include "settings.h"
//ЗОНА СТРУКТУРЫ
#include "myStruct.h"
//ЗОНА ФУНКЦИЙ ДЛЯ РАБОТЫ СО СТРУКТУРОЙ
#include "funcPrintName.h"
void printAge(int age)
{
	cout << "Возраст человека: " << age << endl;
}
//ЗОНА РАБОТЫ ПРОГРАММЫ
int main()
{
	setlocale(LC_ALL, "ru");
	Human h1{ 28,"Вася","Белай" };
	printName(h1.name, h1.surname);
	return 0;
}
