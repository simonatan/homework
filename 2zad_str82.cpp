#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   
    int a, b;
    char c;
    cin>>a>>b>>c;
    
    switch (c)
    {
        case '+': cout<<a+b<<endl; break;
        case '-': cout<<fabs(a-b)<<endl; break;
        case '*': cout<<a*b<<endl; break;
        case '/':
            if(b!=0) cout<<a/b<<endl;
            else cout<<"Ne moje da se deli na 0"<<endl; break;
        default: cout<<"Greshna operaciq"<<endl;
    }
    
return 0;
}

