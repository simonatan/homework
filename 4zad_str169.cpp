#include <iostream>
using namespace std;

int main ()
{
    int n, arr[20][20];
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
    
    for(int i=n-1; i>=0; i--)
    {
        sum+=arr[i][n-i-1]%10;
    }
    
    cout<<"sum="<<sum<<endl;
    
    return 0;
}
