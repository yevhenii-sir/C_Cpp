#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int a, b;
    cout << "a = ";
    cin >> a;
    cin.ignore(32767, '\n');// для очистки потоку
    
    cout << "(b <> 0) = ";
    cin >> b;
    cout << "a + b = " << a + b << endl;

    float x = static_cast<float>(a) / b;//перетворення типів в С++ (static_cast)
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "a / b = " << x << endl;
    system("pause");
}