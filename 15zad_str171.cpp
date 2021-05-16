#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int A[20][10], n, m;
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
    
    int flag;
    
    for(int j=0; j<m; j++)
    {
        flag=0;
        for(int i=0; i<n-1; i++)
        {
            if(A[i][j]==A[i+1][j])
            {
                flag=1;
                break;
            }
        }
        if(flag==1) cout<<setw(7)<<"no";
        else cout<<setw(7)<<"yes";
    }
    
    cout<<endl;
    
    return 0;
}
