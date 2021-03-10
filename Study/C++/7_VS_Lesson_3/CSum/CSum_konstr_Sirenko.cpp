#include <iostream>
#include <cstdlib>
#include "CSum.h"
using namespace std;

int main()
{
    cout << "Calculate of Sumes" << endl;
    CSum x, y(5, 2), z(y);
    x.Summa();
    y.Summa();
    z.Summa();
    cout << "\nComptate of Sumes\n";
    if (x == y) cout << "Ekvivalent" << endl;
    else cout << "NO!" << endl;
    cout << "\nVvedi 2 chisla >> ";
    cin >> x;
    cout << "\n New Sum is!" << x << endl;
    
    cout << "x > y - " << ((x > y) ? "True" : "False") << endl;
    cout << "x < y - " << ((x < y) ? "True" : "False") << endl;
    cout << "x == y - " << ((x > y) ? "True" : "False") << endl;
    x++;
    cout << "x++" << x;
    x--;
    cout << "x--" << x;

}
