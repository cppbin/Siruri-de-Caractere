/** scrieti o functie de tip int care returneaza codul ASCII
al caracterului trimis parametru **/

#include <iostream>
using namespace std;

int cod(char c)
{
    return (int)c;
}

int main()
{
    char c;
    cout << "c = "; cin >> c;
    cout << cod(c);
    return 0;
}
