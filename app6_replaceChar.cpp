/**  Scrieti un program care inlocuieste intr-un text
toate aparitiile unei litere cu o alta litera. **/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char t[51], c1, c2, *p;
    cout << "Textul : "; cin.get(t, 50);
    cout << "Caracterul de inlocuit: "; cin >> c1;
    cout << "Caracterul care inlocuieste: "; cin >> c2;
    p = strchr(t, c1);
    while(p)
    {
        *p = c2;
        p++;
        p = strchr(p, c1);
    }
    cout << "Textul : " << t;
    return 0;
}
