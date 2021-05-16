#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int n, m, mas[20][10];
    long long mult;
    cout<<"Enter rows/columns: ";
    cin>>n>>m;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<"mas["<<i<<"]["<<j<<"]=";
            cin>>mas[i][j];
        }
    }
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<setw(7)<<mas[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    for(int j=0; j<m; j++)
    {
        mult=1;
        for(int i=0; i<n; i++)
        {
            if(mas[i][j]%2==0) mult*=mas[i][j];
        }
        if(mult==1) cout<<setw(7)<<"-";
        else cout<<setw(7)<<mult;
    }
    
    return 0;
}
