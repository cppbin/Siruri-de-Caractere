/** Eliminati caracterul de pe pozitia i dintr-un sir **/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[31];
    int i;
    cout << "Sirul: "; cin.get(s, 30);
    cout << "Pozitia: "; cin >> i;
    strcpy(s+i, s+i+1);
    cout << s;
    return 0;
}
