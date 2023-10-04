#include <iostream>
#include<cmath>
#include<conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int B=0, N=0,cntr=0;
	float y, x,d, A=0;

	while (N <= 2)
	{
		cout << "Введите количество точек ";
		cin >> N;
		if (N <= 2) cout << "Введено недопустимое количество точек\n";

	}

	while (A == B) 
	{
		cout << "Введите диапозон ";
		cin >> A >> B;
		if (A == B) cout << "Введены недопустимые данные\n";
	}
	
	d = (B - A) / (N - 1);

	x = A;
	
	cout << "\t" << "x" << "\t" << "\t" << "f(x)\n";
	cout << "______________________________________\n";

	for (; cntr < N;cntr++, x += d) 
	{
		if (tan(x) == -2 || x < 0)cout << "\t" << x << "\t" << "|" << "\t" << "Точка разрыва\n";
		else
		{
			y = (sqrt(5 * x) - pow((x - 1), 2)) / (0.25 * (tan(x) + 2));
			cout << "\t" << x <<"\t" <<"|" << "\t" << y << "\n";
		}
	}
	_getch();
	return 0;
}
