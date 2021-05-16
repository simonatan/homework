#include <iostream>
using namespace std;

int main ()
{
    int A[10][30], n, m, max;
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
            if(A[i][j]>max) max=A[i][j];
        }
        cout<<max<<endl;
    }
    
    cout<<endl;
    
    return 0;
}
