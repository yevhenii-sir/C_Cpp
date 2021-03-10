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
   //printf("\nCurent date = %s", datestr);
    sscanf_s(datestr, "%d/%d/%d", &mm, &dd, &yy);
   // printf("\nCurent date = %d-%d-%d\n", dd, mm, yy);
    yy += 2000;
    return yy - year;
}


void CPersona::Show()
{
    cout << "PIB: " << PIB << endl;
    cout << "Year of birth: " << year << endl;
    cout << "Stat: " << stat << endl;
}

int CPersona::operator==(CPersona& pers)
{
    return Rokiv() == pers.Rokiv();
}

int CPersona::operator-(CPersona& pers)
{
    return abs(Rokiv() - pers.Rokiv());
}

void CPersona::operator>(CPersona& pers)
{
    if (this->operator==(pers)) {
        cout << "Rovno";
    }
    else {
        cout << "Imya starshogo: ";
        if (pers.Rokiv() > Rokiv()) {
            cout << pers.PIB << endl;
        }
        else cout << PIB << endl;
        cout << "Riznitsa v let: " << this->operator-(pers) << endl;
    }
}

CPersona CPersona::Mladshi(CPersona& pers)
{
    if (pers.Rokiv() > Rokiv()) {
        return *this;
    }
    else return pers;
}

void CPersona::Avtor()
{
    cout << "Create by Yevhenii Sirenko" << endl;
}
 