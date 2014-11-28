/** Se citeste un text de maxim 100 de caractere. Sa se transforme acest text astfel incat
in niciun cuvant sa nu existe doua vocale pe pozitii alaturate.**/

#include <iostream>
#include <string.h>
using namespace std;

void eliminaVocaleConsecutive(char s[])
{
    int i, l = strlen(s);
    char *p, *q;
    for(i = 0; i < l-1; i++)
    {
        p = strchr("aeiou", s[i]);
        q = strchr("aeiou", s[i+1]);
        if(p != NULL && q != NULL)
        {
            strcpy(s+i, s+i+1);
            i++;
            l--;
        }
    }
}

int testExistaVocaleConsecutive(char s[])
{
    int i, l = strlen(s);
    char *p, *q;
    for(i = 0; i < l-1; i++)
    {
        p = strchr("aeiou", s[i]);
        q = strchr("aeiou", s[i+1]);
        if(p != NULL && q != NULL)
            return 1;
    }
    return 0;
}
int main()
{
    char s[101];
    int i, l;
    cout << "Textul: "; cin.get(s, 100);
    while(testExistaVocaleConsecutive(s))
        eliminaVocaleConsecutive(s);
    cout << s;
    return 0;
}
