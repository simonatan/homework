#include <iostream>
using namespace std;

int main ()
{
    int A[50][60], n, m;
    long sum=0;
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
        sum=0;
        for(int j=0; j<m; j++)
        {
            cout<<A[i][j]<<" ";
            if(A[i][j]%3==0) sum+=A[i][j];
        }
        cout<<sum<<endl;
    }
    
    cout<<endl;
    
    return 0;
}
