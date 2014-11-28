/** afisare coduri ASCII intre 32 si 127 **/

#include <iostream>
using namespace std;

int main()
{
    int i;
    for(i = 32; i <= 255; i++)
        cout << i << "\t" << (char)i << endl;
    return 0;
}
