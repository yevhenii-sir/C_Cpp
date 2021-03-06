#include <iostream>
using namespace std;

int doubleNumber(int x)
{
    return x * 2;
}

int InputX()
{
    cout<<"Vvedit X: ";
    int x;
    cin>>x;
    return x;
}

int main()
{
    int x;
    x = InputX();
    cout<<"X = "<<x<<" Double x = "<<doubleNumber(x);
    return 0;
}