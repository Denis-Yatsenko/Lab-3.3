// Lab_03_3.cpp
// Яценко Денис Павлович
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 24

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x;  //вхідний параметр
	double y;  //результат обчислення виразу
	double R;  //вхідний параметр
	cout << "x = "; cin >> x;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі

	if (x < 0)
		y = -((x * R) + (6 * R)) / 6;
	else
		if (x >= 0 && x < R)
			y = -(sqrt(pow(R, 2) - pow(x, 2)));
		else
			if (x >= R && x < 2 * R)
				y = sqrt(pow(R, 2) - pow(x - (2 * R), 2));
			else
				y = R;
	cout << "y = " << y << endl;

	cin.get();
	return 0;

}