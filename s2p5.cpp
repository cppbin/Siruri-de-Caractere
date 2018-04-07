/**  SIMULARE BACALAUREAT 22 martie 2018

O pereche de cuvinte, unul cu număr par de litere, iar celălalt cu număr impar de litere, se
numește descentrată dacă se poate obține cuvântul cu număr par de litere din celălalt,
prin duplicarea caracterului din mijlocul acestuia.
Exemplu: perechile crezi și creezi, respectiv a și aa sunt descentrate.
Un text are cel mult 100 de caractere, iar cuvintele sale sunt formate din litere mici ale
alfabetului englez şi sunt separate prin câte un spațiu.
Scrieţi un program C/C++ care citeşte de la tastatură un text de tipul precizat mai sus şi
afișează pe ecran mesajul DA, dacă acesta conține cel puțin o pereche descentrată, sau
mesajul NU în caz contrar.
Exemplu: dacă textul citit este
crezi ca poti sa creezi ceva original
se afișează pe ecran mesajul DA

**/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[101], cuv[20][15], *pc;
    cin.get(s, 101);

    // construim matricea de cuvinte cuv, cate un cuvant din text pe cate o linie
    int i = 0;
    pc = strtok(s, " ");
    while(pc != NULL)
    {
        strcpy(cuv[i], pc);
        i++;
        pc = strtok(NULL, " ");
    }

    // cautam cuvinte cu numar impar de litere, duplicam caracterul din mijloc
    int j, flag = 0;
    char cuvp[15];
    for (j = 0; j < i; j++)
    {
        strcpy(cuvp,"");
        if(strlen(cuv[j]) % 2 != 0)
        {
            int mij = strlen(cuv[j])/2;
            strncat(cuvp, cuv[j], mij+1);
            strncat(cuvp, cuv[j]+mij, 1);
            strncat(cuvp, cuv[j]+mij+1, mij);
        }
        if (strstr(s, cuvp))
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        cout << "DA";
    else cout << "NU";
}
