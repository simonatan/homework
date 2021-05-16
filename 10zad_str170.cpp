#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int A[40][30], n, m, br=0;
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
        for(int j=0; j<m; j++)
        {
            cout<<setw(7)<<A[i][j];
        }
        cout<<endl;
    }
    
    for(int j=0; j<m; j++)
    {
        br=0;
        for(int i=0; i<n; i++)
        {
            if(A[i][j]%2!=0) br++;
        }
        cout<<setw(7)<<br;
    }
    cout<<endl;
    
    return 0;
}
