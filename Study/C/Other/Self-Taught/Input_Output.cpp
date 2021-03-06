#include <iostream>
using namespace std;


int main()
{
    int a = 10, b;
    cout<<"Hello World!"<<endl;
    cout<<"a = "<<a<<";"<<endl<<"Input A, B: ";
    cin>>a>>b;
    cout<<"a = "<<a<<"; b = "<<b<<";"<<endl;
    float f = 2.3245;
    cout.precision(3);
    cout<<fixed<<"F = "<<f;
    cout.scientific;
    cout.precision(8);
    cout<<fixed<<"F = "<<f;
    return 0;
}