#include <iostream>
using namespace std;

int main ()
{
    int A[20][20], n, br=0;
    cin>>n;
    
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<"A=["<<i<<"]["<<j<<"]=";
            cin>>A[i][j];
        }
    }
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    
    for(int i=0; i<n; i++)
    {
        if(A[i][i]<0 && A[i][i]%2==0) br++;
    }
    
    cout<<br<<endl;
    
    return 0;
}
