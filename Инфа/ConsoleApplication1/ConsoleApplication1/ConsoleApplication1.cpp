#include <cstdlib>
#include <iostream>
#include<conio.h>
#include<string>
#define n 100
using namespace std;

int main()
{
	int cnt = 1, index = 0, kolvo[n],indexvivod = 0, cntpov = 0;
	string str, str_now, probel = " ", mass[n],slovo[n];

	setlocale(0, "");
	cout << "Введите строку\n";
	getline(cin, str);//ввод строки

	str.append(" ");
	//надо т к пробел является границей справа, 
	//а у последнего слова нету пробела

	for (int i = 0; i < str.length();i++)
	{
		string sim(1, str[i]);
		if (sim != probel)str_now += sim;//создание массива слов
		else
		{
			mass[index] = str_now;
			index++;
			str_now = "";
		}
	}	

	for (int i = 0; i < (index - 1); i++)
	{
		for (int j = 1; j < index; j++)
		{
			if (mass[i] == mass[j])//подсчет повторов
			{
				cnt++;
			}
		}

		auto result{ find(begin(slovo), end(slovo),mass[i]) };//проверка, не было ли это слово уже посчитано
		if (result == end(slovo) && cnt > 1)
		{
			slovo[indexvivod] = mass[i];//если нет, то оно записывается в этот массив
			kolvo[indexvivod] = cnt;//а кол-во его вхождений в этот
			cntpov++;//кол-во слов с повторами += 1
			cnt = 0;//обнуление счетчика 
			indexvivod++;
		}
		else cnt = 0;//обнуление счетчика нужно в любом случае
	}

	cout << "Кол-во поторяющихся слов = " << cntpov<<endl<<endl;
	cout << "Повторяющиеся слова и кол-во повторов:\n\n";
	setlocale(0, "C");//нужно сменить кодировку для нормального вывода на русском

	for (int i = 0; i < indexvivod; i++)cout << slovo[i] << "\t" << kolvo[i]<< endl;

	_getch();
	return 0;
}