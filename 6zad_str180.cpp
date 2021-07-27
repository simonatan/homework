#include <iostream>
using namespace std;

int main()
{
    int arr[10], even=0, odd=0;
    
    for(int i=0; i<10; i++) cin>>*(arr+i);
    for(int i=9; i>=0; i--) cout<<*(arr+i)<<" ";
    cout<<endl;
    
    for(int *i=arr; *i<10; i++)
    {
        if(*i%2==0) even++;
        else odd++;
    }
    
    if(even>odd) cout<<"1\n";
    else if(odd>even) cout<<"2\n";
    else cout<<"0\n";
    
    return 0;
}
