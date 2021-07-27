#include <iostream>
using namespace std;

int main()
{
    int A[10]={0}, size;
    
    cout<<"size of array: ";
    cin>>size;
    
    for(int i=0; i<size; i++) cin>>*(A+i);
    
    int *max=A, *min=A;
    
    for(int i=0; i<size; i++)
    {
        if(*(A+i)>*max) max=A+i;
        if(*(A+i)<*min) min=A+i;
    }
    
    cout<<"max-min="<<*max-*min<<endl;
    
    return 0;
}
