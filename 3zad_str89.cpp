#include <iostream>
using namespace std;
int main()
{
    unsigned long int k;
    cout<<"k=";
    cin>>k;
    
    while(k!=0)
    {
        cout<<k%10;
        k/=10;
    }
    cout<<endl;
    
return 0;
}
