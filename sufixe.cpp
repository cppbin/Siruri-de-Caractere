/** Afisati toate sufixele unui cuvant dat
    Daca cuv: vacanta
    Sufixele sale: vacanta
                   acanta
                   canta
                   anta
                   nta
                   ta
                   a
**/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char cuv[15];
    int i;
    cout << "Cuvantul: "; cin >> cuv;
    cout << cuv;
    for(i = 0; i < strlen(cuv); i++)
     cout << endl << cuv+i;
    return 0;
}







