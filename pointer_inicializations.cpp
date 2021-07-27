#include <iostream>
using namespace std;
int main()
{
    cout<<"pointer inicialization:"<<endl;
    
    int *q=(int *) 0x7ffeefbff478;
    cout<<"value="<<*q<<endl;
    
    int *p1=NULL;
    int *p2;
    p2=NULL;
    cout<<"p1=NULL="<<p1<<" p2=NULL="<<p2<<endl;
    
    double price=15.80;
    double *ptr=&price;
    cout<<"ptr=address price: "<<ptr<<endl;
    cout<<"*ptr=value price: "<<*ptr<<endl;
    
    int number=45;
    int *first=&number;
    int *second=first;
    cout<<"pointer first="<<first<<endl;
    cout<<"pointer second="<<second<<endl;
    
    return 0;
}

