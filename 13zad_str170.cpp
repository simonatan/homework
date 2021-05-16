#include <iostream>
using namespace std;

int main ()
{
    int A[10][30], n, m, max, arr[10];
    cin>>n>>m;
    
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<"A=["<<i<<"]["<<j<<"]=";
            cin>>A[i][j];
        }
    }
    
    for(int i=0; i<n; i++)
    {
        max=A[i][0];
        for(int j=0; j<m; j++)
        {
            cout<<A[i][j]<<" ";
            if(max<A[i][j]) max=A[i][j];
        }
        arr[i]=max;
        cout<<" - "<<max<<endl;
    }
    
    int min=arr[0];
    
    for(int i=0; i<n; i++)
    {
        if(arr[i]<min) min=arr[i];
    }
    
    cout<<min<<endl;
    
    return 0;
}
