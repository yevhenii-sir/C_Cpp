#include "CPersona.h"
using namespace std;

CPersona::CPersona()
{

}

CPersona::CPersona(string _PIB, char _stat, int day, int month, int year)
{
    PIB = _PIB;
    objDate.Init_Date(day, month, year);
    /* Або присвоїти так:
    objDate.day = day;
    objDate.month = month;
    objDate.year = year;
    */
    stat = _stat;
}

CPersona::CPersona(CPersona& another)
{
    *this = another;
}

void CPersona::Init(string _PIB, char _stat, int day, int month, int year)
{
    PIB = _PIB;
    objDate.Init_Date(day, month, year);
    /* Або присвоїти так:
    objDate.day = day;
    objDate.month = month;
    objDate.year = year;
    */
    stat = _stat;
}

void CPersona::Show()
{
    cout << "PIB: " << PIB << endl;
    cout << "Year of birth: " << objDate.year << endl;
    cout << "Stat: " << stat << endl;
    cout << "Years old: " << objDate.Years_old() << endl;
    cout << "Date of birth: ";
    objDate.Date_of_birth();
}

void CPersona::System_date()
{
    cout << "Curent date - " << objDate.datestr << endl;
}

int CPersona::operator==(CPersona& pers)
{
    return objDate.Years_old() == pers.objDate.Years_old();
}

int CPersona::operator-(CPersona& pers)
{
    return abs(objDate.Years_old() - pers.objDate.Years_old());
}

void CPersona::operator>(CPersona& pers)
{
    if (this->operator==(pers)) {
        cout << "Rovno";
    }
    else {
        cout << "Imya starshogo: ";
        if (pers.objDate.Years_old() > objDate.Years_old()) {
            cout << pers.PIB << endl;
        }
        else cout << PIB << endl;
        cout << "Riznitsa v let: " << this->operator-(pers) << endl;
    }
}

CPersona CPersona::Mladshi(CPersona& pers)
{
    if (pers.objDate.Years_old() > objDate.Years_old()) {
        return *this;
    }
    else return pers;
}

void CPersona::Avtor()
{
    cout << "Create by Yevhenii Sirenko" << endl;
}
 