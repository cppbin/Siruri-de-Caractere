/** Intr-un fisier text exista o multime de prenume,
cate unul pe fiecare rand. Sa se afiseze in ordine
crescatoare prenumele din fisier **/

#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

void afisare(char p[][25], int n)
{
    int i;
    for(i = 0; i < n; i++)
        cout << p[i] << endl;
}

void sortare(char p[][25], int n)
{
    int i, j;
    char aux[25];
    for(i = 0; i < n - 1; i++)
        for(j = i + 1; j < n; j++)
            if(strcmp(p[i], p[j]) > 0)
            {
                strcpy(aux, p[i]);
                strcpy(p[i], p[j]);
                strcpy(p[j], aux);
            }
}

int main()
{
    char p[25][25];
    int n = 0;
    ifstream f("date.txt");
    while(!f.eof())
    {
        f.getline(p[n], 24);
        n++;
    }
    afisare(p, n);
    sortare(p, n);
    cout << "\nDatele sortate: \n";
    afisare(p, n);
    return 0;
}
