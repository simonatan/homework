#include <iostream>
using namespace std;
int main()
{
    unsigned long int k;
    cout<<"k=";
    cin>>k;
    
    for(int i=1; i<=5; i++)
    {
        cout<<k%10;
        k/=10;
    }
    cout<<endl;

return 0;
}
