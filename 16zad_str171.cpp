#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int A[30][20], n, m, br, prev;
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
        flag=false;
        br=0;
        for(int j=0; j<m; j++)
        {
            cout<<setw(7)<<A[i][j];
            if(j!=0 && prev==A[i][j])
            {
                if(flag==false)
                {
                    flag=true;
                    br++;
                }
            }
            else
            {
                flag=false;
            }
            prev=A[i][j];
        }
        cout<<" - "<<br<<endl;
    }
    
    return 0;
}
