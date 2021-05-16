#include <iostream>
using namespace std;

int main ()
{
    const int MAX_ROWS=200;
    const int MAX_COLS=300;
    double arr[MAX_ROWS][MAX_COLS];
    
    int rows, columns;
    
    cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>columns;
    
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            cout<<"Enter arr["<<i<<"]["<<j<<"]=";
            cin>>arr[i][j];
        }
    }
    
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
