#include <iostream>
#include <cstdlib>
#include "CSum.h"
using namespace std;

int main()
{
    CSum Z1, *Z2;
    int a, b;
    cout << "Vvedi dva chisla: ";
    cin >> a >> b;
    Z1.Init(a, b);
    Z1.Summa();
    Z2 = &Z1;
    Z2->Summa();
    Z2->Init(5, 8);
    Z2->Summa();
    Z1.Avtor();
    system("pause");
}

