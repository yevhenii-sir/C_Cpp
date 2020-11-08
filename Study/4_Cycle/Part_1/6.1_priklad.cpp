#include <iostream>
using namespace std;
int main()
{
    double x;
    double sum = 0;
    cout << "Enter reals:\n";
    while (cin >> x)
    {
        if (x == 0.)
            break; //виходимо з циклу
        if (x < 0.)
            continue; //пропускаємо від'ємні
        sum += x;
    }
    cout << "sum=" << sum << endl;
    cout << "Yevhenii Sirenko\n";
    return 0;
}