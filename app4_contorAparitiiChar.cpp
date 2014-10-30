/** Numarati in cate cuvinte apare un caracter dat. **/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char t[51], c;
    int i, contor = 0, l;
    cout << "Textul : "; cin.get(t, 50);
    cout << "Caracterul : "; cin >> c;
    l = strlen(t);
    for(i = 0; i < l; i++)
        if(t[i] == c)
        {
            while(t[i] != ' ')
                i++;
            contor++;
        }
   if(contor == 0) cout << "Niciun cuvant";
   else cout << contor << " cuvinte";
   return 0;
}
