#include <iostream>
#include <cstdlib>
#include "CFigure.h"
using namespace std;

int main()
{
    CFigure King;
    char a;
    int b;
    cout << "Vvedi polozhenya korolya (stand E1, E8): ";
    cin >> a >> b;
    King.Init(a, b);
    King.Show();
    char valid;
    do {
        cout << "Vvedit kudi vi hochite peremistiti korolya: ";
        cin >> a >> b;
        King.Move(a, b);
        King.Show();
        cout << "Xochite she peremistiti? [y / n] : ";
        cin >> valid;
    } while (valid == 'y');
    system("pause");
}
