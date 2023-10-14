#include <iostream>
#include <conio.h>
#include <iomanip>
#include <algorithm>
#define N_x 10
#define N_y 8

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	short int j;
	int mas_x[N_x];
	int mas_y[N_y];
	int a;
	int a_x, b_x, a_y, b_y;
	float z, d, sum_x, sum_y;
	setlocale(LC_ALL, "ru");
	cout << "Введите границы диапазона значений элементов массива x, затем для массива y:";
	cin >> a_x >> b_x >> a_y >> b_y;
	cout << "Введите индекс j для переменно d: ";
	cin >> j;
	cout << "Введите а: ";
	cin >> a;

	//cout << "Элементы спикска x :\n";
	for (int i = 0; i < N_x; i++)
	{
		mas_x[i] = a_x + rand() % (b_x - a_x + 1);
		//cout << "mas_x[" << setw(1) << i << "]=" << mas_x[i] << endl;
	}

	//cout << "Элементы спикска y :\n";
	for (int i = 0; i < N_y; i++)
	{
		mas_y[i] = a_y + rand() % (b_y - a_y + 1);
		//cout << "mas_y[" << setw(1) << i << "]=" << mas_y[i] << endl;
	}

	for_each(begin(mas_x), end(mas_x), [&](int& i) {sum_x += (i - a); });
	for_each(begin(mas_y), end(mas_y), [&](int& i) {sum_y += (i + a); });

	z = sum_x / sum_y;
	d = (mas_x[0] - z) / mas_y[j];
	
	cout << "Значение z = " << z << endl << endl;
	cout << "Значение dj = " << d;
	_getch();
	return 0;
}
	




