
#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c ;
    cout << "Введите a и b и получите их сумму! ";
    cin >> a >> b;
    c = a + b++;
    cout << a << " " << b <<" " << c << endl;
    c = a + ++b;
    cout << a << " " << b << " " << c << endl;
    _getch();


































    return 0; 
}
