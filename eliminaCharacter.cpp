/** Eliminati toate aparitiile unui caracter dat **/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[31], c, *p;
    int poz;
    cout << "Sirul : "; cin.get(s, 30);
    cout << "Caracterul de eliminat: "; cin >> c;
    p = strchr(s, c);
    while(p)
    {
        poz = p - s;
        strcpy(s+poz, s+poz+1);
        p++;
        p = strchr(s, c);
    }

    cout << s;
    return 0;
}
