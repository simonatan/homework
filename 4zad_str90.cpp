#include <iostream>
using namespace std;
int main()
{
    unsigned long int n, p, k;
    cout<<"n=";
    cin>>n;
    cout<<"p=";
    cin>>p;
    
    do
    {
        k=n%10;
        n/=10;
    }
    while((k!=p) && (n!=0));
    
    if(k==p) cout<<"da"<<endl;
    else cout<<"ne"<<endl;
    
return 0;
}
