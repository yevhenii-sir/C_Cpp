#include <iostream>
#include <fstream>
#include <clocale>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");

    ifstream fileinp;
    fileinp.open("index.dic");

    ofstream fileoutp;
    fileoutp.open("outpDictionary.dic");

    string input_string;
    int pos;

    while (!fileinp.eof()) {
        fileinp >> input_string;
        pos = input_string.find("/");
        input_string.resize((pos == -1) ? input_string.length() : pos);
        fileoutp << input_string << endl;
    }

    return 0;
}
