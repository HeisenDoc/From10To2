#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n,c,k;
    cout << "Scrivi un numero decimale da convertire in binario: ";
    cin>>n;
    cout << endl << "Il valore di " <<n<<" in base 2 e': ";
    for(c=31;c>=0;c--)
        {
         k=n>>c;
         if(k&1) cout<<"1";
         else cout<<"0";
         }
    cout << endl;
    system("PAUSE");
    return 0;
}
