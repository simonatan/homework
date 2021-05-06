#include <iostream>
using namespace std;

int main()
{
    char arr[50];
    int br=0, n;
    cout<<"Broj na elementi: ";
    cin>>n;
    
    for(int i=0; i<n; i++) cin>>arr[i];
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]=='a') br++;
    }
    
    cout<<"'a' se sreshta "<<br<<" pyti.\n";

return 0;
}
