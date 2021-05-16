#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int A[10][20], n, m;
    long sum[20]={0};
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
            sum[j]+=A[i][j];
        }
        cout<<endl;
    }
    
    for(int i=0; i<m; i++)
    {
        cout<<setw(7)<<sum[i];
    }
    
    cout<<endl;
    
    return 0;
}
