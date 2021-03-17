#include <iostream>
#include <string>
#include "CPersona.h"
using namespace std;

int main()
{
    CPersona pers1;
    pers1.Init("Yevhenii Sirenko", 'm', 9, 8, 2003);
    pers1.Show(); cout << endl << endl;

    CPersona pers2("Rostik Liashenko", 'm', 26, 8, 2002);
    pers2.Show(); cout << endl << endl;

    CPersona pers3(pers1);
    pers3.Show();

    cout << "-----------------------------------------" << endl;

    pers1.System_date(); cout << endl << endl;
    
    cout << "Molodshi: " << endl;
    (pers1.Mladshi(pers2)).Show(); cout << endl;
    
    pers1 > pers2; cout << endl;

    pers1.Avtor();
}
