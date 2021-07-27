#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int A[20][20], n, br=0, sum=0;
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
    
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<i; j++)
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
            if(flag==true) sum+=A[i][j];
        }
    }
    
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(A[i][j]%2==0) br++;
        }
    }
    
    cout<<"\nPrimes sum: "<<sum<<"\nEven numbers count: "<<br<<endl;
    
    return 0;
}
