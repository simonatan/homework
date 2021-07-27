#include <iostream>
using namespace std;
int main()
{
    cout<<"operations with the values"<<"\n\n";
    
    double st=3.15, sr=1.58;
    double *r=&sr;
    
    *r=3.06;
    cout<<"value sr:"<<sr<<endl;
    cout<<"sum="<<*r+10<<endl;
    cout<<"div="<<*r/3<<endl;
    cout<<"address sr="<<&sr<<" value sr="<<sr<<endl;
    
    cout<<endl<<"combined operations"<<"\n\n";
    *(r+1)=10.08;
    cout<<"address st="<<&st<<" value st="<<st<<endl;
    
    return 0;
}

