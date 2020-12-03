#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int a = 10, b = 5;
    if (a > b) cout<<"a > b"<<endl;
    else cout<<"a < b"<<endl;
    a = a > b ? a : b;
    return 0;
}