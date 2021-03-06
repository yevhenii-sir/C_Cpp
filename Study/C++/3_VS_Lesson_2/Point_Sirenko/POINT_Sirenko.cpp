#include <iostream>
#include <cstdlib>
#include "CPoint.h"
using namespace std;


int main()
{
    CPoint pt1, pt2(5, 10);
    int x, y;
    cout << "Vvedi x, y: ";
    cin >> x >> y;
    pt1.Init(x, y);
    cout << "-----------------------" << endl;
    cout << "Pt1:" << endl;
    pt1.Show();
    cout << "Pt2:" << endl;
    pt2.Show();
    cout << "Xochite peremistiti:\n1 - pt1\n2 - pt2\n3 - nichogo\nUvedit nomer: ";
    short int menu;
    cin >> menu;
    if ((menu < 0) && (menu > 3))
    {
        cout << "vidmina operacii!" << endl;
    }
    else {
        cout << "Uvedit x, y: ";
        cin >> x >> y;
        if (menu == 1) pt1.Move(x, y);
        if (menu == 2) pt2.Move(x, y);
    }
    cout << "-----------------------" << endl;
    cout << "Pt1:" << endl;
    pt1.Show();
    cout << "Pt2:" << endl;
    pt2.Show();
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Distancia miz tochkami pt1, pt2: " << pt1.Dist(pt2) << endl;
    pt1.Avtor();
    system("pause");
}
