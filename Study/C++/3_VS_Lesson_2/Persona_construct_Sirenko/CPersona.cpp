#include "CPersona.h"
#include <iostream>
#include <string>
#include <ctime>
#include <stdio.h>
using namespace std;

CPersona::CPersona()
{

}

CPersona::CPersona(string _PIB, int _year, char _stat)
{
    PIB = _PIB;
    year = _year;
    stat = _stat;
}

CPersona::CPersona(CPersona& another)
{
    *this = another;
}

void CPersona::Init(string _PIB, int _year, char _stat)
{
    PIB = _PIB;
    year = _year;
    stat = _stat;
}


int CPersona::Rokiv()
{
    char datestr[10]; int dd, mm, yy;

    _strdate_s(datestr);
    printf("\nCurent date = %s", datestr);
    sscanf_s(datestr, "%d/%d/%d", &mm, &dd, &yy);
    printf("\nCurent date = %d-%d-%d\n", dd, mm, yy += 2000);
    return yy - year;
}


void CPersona::Show()
{
    cout << "PIB: " << PIB << endl;
    cout << "Year of birth: " << year << endl;
    cout << "Stat: " << stat << endl;
}


void CPersona::Avtor()
{
    cout << "Create by Yevhenii Sirenko" << endl;
}
 