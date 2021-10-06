// Lab_03_4.cpp
// Квецко Вікторії
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 11

#include <iostream>

using namespace std;

int main()
{
	double x, y, R;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if (((x)*(x)+(y)*(y)<=(R)*(R) && x>=0 && y>=0)||
		(x<=0 && y<=0 && y>=-x-R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
