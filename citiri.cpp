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
    
    //3. utilizand functia cin.get
    char c1[20], c2[20];
    cout << "\nPrimul sir: "; cin.get(c1, 19); //dimensiunea reala e cu 1 mai mica decat cea declarata, din cauza '\0'
    cin.get(); // instructiune obligatorie la citirea consecutiva a doua siruri
    cout << "\nAl doilea sir: "; cin.get(c2, 19);
    cout << "sirul 1: " << c1 << "\nsirul 2:  " << c2;
    return 0;
}
