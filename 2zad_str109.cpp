#include <iostream>
using namespace std;
int main()
{
    double arr[31], k;
    int n, br=0;
    cout<<"Wywedi broj dni w meseca: ";
    cin>>n;
    for(int i=0; i<n; i++) cin>>arr[i];
    cout<<"k=";
    cin>>k;
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]==k) br++;
    }
    
    cout<<"br="<<br<<endl;
    
return 0;
}
