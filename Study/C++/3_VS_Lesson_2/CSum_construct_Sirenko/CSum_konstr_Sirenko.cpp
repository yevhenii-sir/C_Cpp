#include <iostream>
#include <cstdlib>
#include "CSum.h"
using namespace std;

int main()
{
    CSum v1, v2(5, 3), v3(v2);
    int a, b;
    cout << "Vvedit a, b: ";
    cin >> a >> b;
    v1.Init(a, b);
    v1.Summa();
    v2.Summa();
    v3.Summa();
    system("pause");
}
