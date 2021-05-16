#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int A[20][10], n, m, min;
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
        min=A[j][0];
        for(int i=0; i<n; i++)
        {
            if(A[i][j]<min) min=A[i][j];
        }
        cout<<setw(7)<<min;
    }
    
    cout<<endl;
    
    return 0;
}
