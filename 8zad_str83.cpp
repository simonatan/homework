#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   
    unsigned int m, g;
    cin>>m>>g;
    
    switch (m)
    {
        case 2:
            if(g%4==0) cout<<"29\n";
            else cout<<"28\n"; break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: cout<<"31\n"; break;
        case 4:
        case 6:
        case 9:
        case 11: cout<<"30\n"; break;
        default: cout<<"Ne syshtestwuwa takyw mesec\n";
    }
    
return 0;
}

