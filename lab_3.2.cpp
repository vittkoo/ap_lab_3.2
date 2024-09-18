// Lab_03_2.cpp 
// < Дмитрович Віктор > 
// Лабораторна робота № 3.2 
// Розгалуження, задане формулою: функція з параметрами. 
// Варіант 7

#include <iostream>
using namespace std;

int main()
{
	double x;
	double a;
	double b;
	double c;
	double F;

	cout << "Enter a: "; cin >> a;
	cout << "Enter b: "; cin >> b;
	cout << "Enter c: "; cin >> c;
	cout << "Enter x: "; cin >> x;

	//спосіб 1: розгалуження в скороченій формі
	if (x < 5 && c != 0)
		F = -a * (x * x) - b;
	if (x > 5 && c == 0)
		F = (x - a) / x;
	if (!(x < 5 && c != 0) && !(x > 5 && c == 0 ))
		F = -x/c;

	cout << endl;
	cout << "1) F = " << F << endl;


	//спосіб 2: розгалуження в повній формі
	if (x < 5 && c != 0)
		F = -a * (x * x) - b;
	else
		if (x > 5 && c == 0)
			F = (x - a) / x;
		else
			F = -x / c;

	cout << "2) F = " << F << endl;

cin.get();
return 0;
}