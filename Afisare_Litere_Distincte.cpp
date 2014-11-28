/** afisati literele distincte dintr-un cuvant **/

#include <iostream>
#include <string.h>

using namespace std;

int numarAparitii(char s[], char c)
{
    int i, contor = 0, l = strlen(s);
    for(i = 0; i < l; i++)
        if(c == s[i])
            contor++;
    return contor;
}

void afisareLitereDistincte(char s[])
{
    int i, l = strlen(s);
    for(i = 0; i < l; i++)
        if(numarAparitii(s, s[i]) == 1)
            cout << s[i] << endl;
}

int main()
{
    char s[255];
    cout << "cuvantul: "; cin >> s;
    afisareLitereDistincte(s);
    return 0;
}
