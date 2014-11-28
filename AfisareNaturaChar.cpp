/** scrieti o functie void care sa afiseze natura caracterului
primit ca parametru
- litera mare ; litera mica; cifra ; simbol **/

#include <iostream>
#include <string.h>
using namespace std;

void natura_char(char c)
{
    if(isupper(c)) cout << "litera mare";
    else if(islower(c)) cout << "litera mica";
    else if(isdigit(c)) cout << "cifra";
    else cout << "simbol";
}

int main()
{
    char c;
    cout << "c = "; cin >> c;
    natura_char(c);
    return 0;
}
