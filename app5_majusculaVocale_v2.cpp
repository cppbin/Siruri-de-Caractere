/** Se citeste un cuvant de cel mult 20 de caractere.
Sa se transforme toate vocalele din
litera mica in litera mare corespunzatoare.

toupper(char)
tolower(char)

**/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char cuv[21];
    int i, l;
    cout << "Cuvantul: "; cin >> cuv;
    l = strlen(cuv);
    for(i = 0; i < l; i++)
       if(strchr("aeiou", cuv[i]))
          cuv[i] = toupper(cuv[i]);
    cout << "Cuvantul : " << cuv;
    return 0;
}


