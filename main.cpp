#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n,c,k[32];
    cout << "Scrivi un numero decimale da convertire in binario: ";
    cin>>n;
    cout << endl << "Il valore di " <<n<<" in base 2 e': ";
    for(c=32;c>>0;c--)
        {
         k[32]=n>>c;
         }

    cout << k[32] << endl << endl;
    system("PAUSE");
    return 0;
}
