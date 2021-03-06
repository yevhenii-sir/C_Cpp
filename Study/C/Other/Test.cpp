#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main(){
    char A = {'B'};
    cout << A << " = a = a + 1 = " << static_cast<char>(A + 1) << endl;
    cout << static_cast<int>(A) << endl;
 getch();
}