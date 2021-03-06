#include <iostream>
#include <cstdlib>
#include "CPersona.h"
using namespace std;

int main()
{
	CPersona Pers_1;
	char a[30], c;
	int b;
	cout << "Vvedi PIB: ";
	fgets(a, 30, stdin);
	cout << "Vvedite rik narodzhenya: ";
	cin >> b;
	cout << "Vvedite stat: ";
	cin >> c;
	Pers_1.Init(a, b, c);

	cout << "Kakoi seuchas god: ";
	cin >> b;
	Pers_1.Years_old(b);

	cout << "------------------------"<<endl;
	Pers_1.Show_info();
	Pers_1.Avtor();
	system("pause");
}
