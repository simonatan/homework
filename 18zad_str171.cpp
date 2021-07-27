#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int A[20][20], n, br;
    bool flag;
    
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
            cout<<setw(7)<<A[i][j];
        }
        cout<<endl;
    }
    
    for(int i=n-1; i>=0; i--)
    {
        flag=true;
        if(A[i][n-i-1]<2) flag=false;
        for(int k=2; k<=A[i][n-i-1]/2; k++)
        {
            if(A[i][n-i-1]%k==0)
            {
                flag=false;
                break;
            }
        }
        if(flag==true) br++;
    }
    
    cout<<"- "<<br<<endl;

    return 0;
}
