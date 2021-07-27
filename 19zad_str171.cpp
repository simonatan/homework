#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int A[20][20], n, max, min, mini=1, minj=0, maxi=0, maxj=1, swap;
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
    
    max=A[0][1];
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(A[i][j]>max)
            {
                max=A[i][j];
                maxi=i;
                maxj=j;
            }
        }
    }
    
    min=A[1][0];
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(A[i][j]<min)
            {
                min=A[i][j];
                mini=i;
                minj=j;
            }
        }
    }
    
    swap=A[maxi][maxj];
    A[maxi][maxj]=A[mini][minj];
    A[mini][minj]=swap;
    
    cout<<endl;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<setw(7)<<A[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}
