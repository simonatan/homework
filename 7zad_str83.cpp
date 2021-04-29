#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   
    unsigned int a;
    cin>>a;
    
    switch (a)
    {
        case 1: cout<<"I\n"; break;
        case 5: cout<<"V\n"; break;
        case 10: cout<<"X\n"; break;
        case 50: cout<<"L\n"; break;
        case 100: cout<<"C\n"; break;
        case 500: cout<<"D\n"; break;
        case 1000: cout<<"M\n"; break;
        default: cout<<"Nqma takawa rimska cifra\n";
    }
    
return 0;
}

