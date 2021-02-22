#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main()
{
    char file_name[] = {"test.txt"};
    ofstream out(file_name);
        int a, b;
        cout << "Enter a, b: ";
        cin >> a >> b;
        out << "Result - a + b = " << a << " + " << b << " = " << a + b << endl;
    out.close();

    ifstream in(file_name);
    if (!in.is_open())
    {
        cout << "Problem with opening!" << endl;
    }
    else
    {
        //cout << "File open!" << endl;
        char str[30];
        in.getline(str, 30);
        cout << str << endl;
    }
    in.close();
    system("pause");
}