// Макаришин, Олесь 
// Лабораторна робота N№ 2.1
// Лінійні програми.
// Варіант 23

#include <iostream>
#include <cmath>
#include <math.h>

double a;
double z1;
double z2;
//dsad
using namespace std;
int main()
{

	cout << "a = "; cin >> a;

	z1 = (sin(2 * a) + sin(5 * a) - sin(3 * a)) / (cos(a) + 1 - 2 * (sin(2 * a) * sin(2 * a)));
	z2 = 2 * (sin(a));

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
// SASSA
	cin.get();
	return 0;
}