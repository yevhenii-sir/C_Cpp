#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1;
    str1 = "Stroka!";
    cout << str1 << endl;

    cout << "Enter sting: ";
    getline(cin, str1);
    string str2(str1);
    //cout << str1 << endl;
    str1 += str2;
    cout << str1 << endl;

    system("pause");
}