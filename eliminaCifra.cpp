/** Eliminati toate cifrele care apar intr-un sir
    isdigit(char)
**/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[31];
    int i, l;
    cout << "Sirul : "; cin.get(s, 30);
    l = strlen(s);
    for(i = 0; i < l; i++)
        if(isdigit(s[i]))
        {
            strcpy(s+i, s+i+1);
            i--;
        }
    cout << "Sirul modificat: " << s;
    return 0;
}
