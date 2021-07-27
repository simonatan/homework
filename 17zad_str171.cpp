#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int A[50][20], n, m, sum[20]={0};
    bool flag;
    
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
        for(int i=0; i<n; i++)
        {
            flag=true;
            if(A[i][j]<2) flag=false;
            for(int k=2; k<=A[i][j]/2; k++)
            {
                if(A[i][j]%k==0)
                {
                    flag=false;
                    break;
                }
            }
            if(flag==true) sum[j]+=A[i][j];
        }
    }
    
    for(int i=0; i<m; i++) cout<<"-------";
    cout<<endl;
    
    for(int i=0; i<m; i++) cout<<setw(7)<<sum[i];
    cout<<endl;
    
    return 0;
}
