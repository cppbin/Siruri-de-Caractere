/** Modalitati de a citi siruri de caractere **/

#include <iostream>
using namespace std;

//1. utilizand o functie de citire vector
void citireSir(char c[], int n)
{
    int i;
    for(i = 0; i < n-1; i++)
    {
        cout << "c[" << i << "]=";
        cin >> c[i];
    }
    c[n - 1] = '\0';
}

void afisareSir(char c[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        cout << c[i];
}

int main()
{
  /*  int n;
    char c[20];
    cout << "n = "; cin >> n;
    citireSir(c, n);
    cout << "\nSirul citit: ";
    afisareSir(c, n); */

    //2. utilizand cin - doar pentru siruri alcatuite dintr-un singur cuvant
    char c1[20];
    cout << "\nIntroduceti un sir: ";
    cin >> c1; // pune implicit terminatorul de sir
    cout << "\nAti introdus: ";
    cout << c1;

    return 0;
}
