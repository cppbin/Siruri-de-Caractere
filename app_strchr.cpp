/***********************************************************
    Sa se afiseze pozitiile pe care apare un caracter dat
    intr-un sir de caractere
************************************************************/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a[31], c, *p;
    cout << "Sirul a: "; cin.get(a, 30);
    cout << "Caracterul cautat: "; cin >> c;
    p = strchr(a, c);
    while(p)
    {
        cout << "pozitia " << p - a << endl;
        p++;
        p = strchr(p, c);
    }
    return 0;
}
