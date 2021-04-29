#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   
    char c;
    cin>>c;
    
    switch (c)
    {
        case '0': cout<<"nula"<<endl; break;
        case '1': cout<<"edno"<<endl; break;
        case '2': cout<<"dwe"<<endl; break;
        case '3': cout<<"tri"<<endl; break;
        case '4': cout<<"chetiri"<<endl; break;
        case '5': cout<<"pet"<<endl; break;
        case '6': cout<<"shest"<<endl; break;
        case '7': cout<<"sedem"<<endl; break;
        case '8': cout<<"osem"<<endl; break;
        case '9': cout<<"dewet"<<endl; break;
        default: cout<<"Ne e cifra"<<endl;
    }
    
return 0;
}

