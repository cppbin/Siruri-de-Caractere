/** Scrieti un program care citeste de la tastatura un text si
determina transformarea acestuia prin eliminarea numai a
ultimei consoane din text. **/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char t[51];
    int l, i;
    cout << "Textul : "; cin.get(t, 50);
    l = strlen(t);
    for(i = l-1; i >= 0; i--)
        if(!strchr("aeiouAEIOU ", t[i]))
        {
           strcpy(t+i, t+i+1);
           break;
        }
    cout << "textul : " << t;
    return 0;
}
