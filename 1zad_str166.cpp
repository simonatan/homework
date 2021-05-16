#include <iostream>
using namespace std;

int main ()
{
    double arr[40][20], sum;
    
    int n, m;
    
    cout<<"Enter the number of rows: ";
    cin>>n;
    cout<<"Enter the number of columns: ";
    cin>>m;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<"arr["<<i<<"]["<<j<<"]=";
            cin>>arr[i][j];
        }
    }
    
    for(int i=0; i<n; i++)
    {
        sum=0;
        for(int j=0; j<m; j++)
        {
            cout<<arr[i][j]<<" ";
            sum+=arr[i][j];
        }
        cout<<"-> "<<sum<<endl;
    }
    
    return 0;
}
