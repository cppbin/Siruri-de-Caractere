/** afisati literele si frecventa lor de aparitie **/

#include <iostream>
#include <string.h>

using namespace std;

int numarAparitii(char s[], char c)
{
    int i, contor = 0, l = strlen(s);
    for(i = 0; i < l; i++)
        if(c == s[i])
            contor++;
    return contor;
}

void proceseaza(char s[], char s1[], int &l1)
{
    int i, l = strlen(s);
    s1[0] = s[0];
    s1[1] = '\0';
    l1 = 1;
    for(i = 1; i <= l; i++)
        if(numarAparitii(s1, s[i]) == 0)
        {
            s1[l1] = s[i];
            l1++;
            s1[l1] = '\0';
        }
    s1[l1] = '\0';
}

void afisareAparitii(char s[], char s1[])
{
    int l = strlen(s), l1 = strlen(s1);
    int i;
    for(i = 0; i < l1; i++)
        cout << s1[i] << "\t" << numarAparitii(s, s1[i]) << endl;
}

int main()
{
    char s[255], s1[255];
    int l1;
    cout << "s: "; cin >> s;
    proceseaza(s, s1, l1);
    afisareAparitii(s, s1);
    return 0;
}



