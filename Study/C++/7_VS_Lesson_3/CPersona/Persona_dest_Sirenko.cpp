#include <iostream>
#include <cstdlib>
#include <string>
#include "CPersona.h"
using namespace std;

int main()
{
    CPersona Pers1, Pers2("Sirenko Yevhenii", 2003, 'm'), Pers3(Pers2);
    string PIB;
    char stat;
    int years;
    cout << "Vvedi pib: ";
    getline(cin, PIB);
    cout << "Vvedi rik narodzhennya: ";
    cin >> years;
    cout << "Vvedi stat: ";
    cin >> stat;
    Pers1.Init(PIB, years, stat);
    cout << "-------------------------------\nPers1: " << endl;
    Pers1.Show();
    cout << "Emy " << Pers1.Rokiv() << " rokiv" << endl;
    cout << "-------------------------------\nPers2: " << endl;
    Pers2.Show();
    cout << "Emy " << Pers2.Rokiv() << " rokiv" << endl;
    cout << "-------------------------------\nPers3: " << endl;
    Pers3.Show();
    cout << "Emy " << Pers3.Rokiv() << " rokiv" << endl;
    cout << "\n\n";
    Pers1.Avtor();
    cout << "----------------------------------------\nPeregruzka operatoriv: " << endl;
    CPersona x, y;
    x.Init("Vasya", 1998, 'm');
    x.Show();
    cout << endl;
    y.Init("Fedya", 2001, 'm');
    y.Show();
    if (x == y) {
        cout << "Odnolitki" << endl;
    }
    else cout << "Ne odnolitki!" << endl;
    cout << "Riznica v viki = " << x - y << " rokiv" << endl << endl;
    x > y;
    cout << "---------------------------\nMolodshi: " << endl;
    (x.Mladshi(y)).Show();
    system("pause");
}
