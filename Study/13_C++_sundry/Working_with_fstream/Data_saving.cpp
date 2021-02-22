#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

struct point
{
    int x, y, z;
    char ch[15];
};

void Print(point* x)
{
    cout << "x = " << x->x << " y = " << x->y << " z = " << x->z << " ch = " << x->ch << endl;
}

void Randomik(point* x)
{
    x->x = rand() % 100;
    x->y = rand() % 100;
    x->z = rand() % 100;
    strcpy_s(x->ch, "Hello World!");
}

void outp_data(point* x)
{
    ofstream am;
    am.open("test2");
    for (int i = 0; i < 10; i++) {
        Randomik(&x[i]);
        Print(&x[i]);
        am.write((char*)&x[i], sizeof(point));
    }
    am.close();
}

void input_data(point* x)
{
    char name[] = { "test2" };
    ifstream fin(name); 
    if (!fin.is_open())
    {
        cout << "File not found" << endl;
    }
    else {
        cout << "File naideno!" << endl;
        int i = 0;
        while (fin.read((char*)&x[i], sizeof(point))) 
        {
            Print(&x[i]);
            i++;
        }
    }
    fin.close();
}

int main()
{
    point point_1[10];
    //outp_data(point_1);
    input_data(point_1);
    system("pause");
}

