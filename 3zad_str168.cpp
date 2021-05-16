#include <iostream>
using namespace std;

int main ()
{
    int n, arr[20][20], mult=1;
    long sum=0;
    cout<<"n=";
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<"arr["<<i<<"]["<<j<<"]=";
            cin>>arr[i][j];
        }
    }
    
    for(int i=0; i<n; i++)
    {
        mult*=arr[i][i];
    }
    cout<<"mult="<<mult<<endl;
    
    int max=arr[0][1];
    
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i][j]>max) max=arr[i][j];
        }
    }
    cout<<"max="<<max<<endl;
    
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(arr[i][j]%2==0) sum+=arr[i][j];
        }
    }
    
    cout<<"sum="<<sum<<endl;
    
    return 0;
}
