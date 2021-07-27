#include <iostream>
using namespace std;
int main()
{
    int a, b;
    double c, d;
    
    cout<<"address a="<<&a<<endl;
    cout<<"address b="<<&b<<endl;
    cout<<"address c="<<&c<<endl;
    cout<<"address d="<<&d<<"\n\n";
    
    int variable=158;
    int *pointer=&variable;
    
    cout<<variable<<endl;
    cout<<*pointer<<endl;
    
    cout<<&variable<<endl;
    cout<<pointer<<endl;
    
    
    return 0;
}

