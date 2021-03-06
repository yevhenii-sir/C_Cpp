#include <cstdlib>
#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
    stack s1, s2;
    int i;
    /*
    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');
    */
    
    char ch;
    for (ch = 'a'; ch <= 'f'; ch++)
    {
        s1.push(ch);
    };

    for (ch = 'x'; ch <= 'z'; ch++)
    {
        s2.push(ch);
    };
    

    for (i = 0; i <= s1.get_tos() + 1; i++)
    {
        cout << "sybol iz s1: " << s1.pop() << endl;
    }
    for (i = 0; i <= s2.get_tos() + 1; i++)
    {
        cout << "sybol iz s2: " << s2.pop() << endl;
    }
    system("pause");
}
