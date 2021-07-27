#include <iostream>
using namespace std;
int main()
{
    int i, arr[5]={10, 11, 12, 13, 14};
    
    for(i=0; i<5; i++) cout<<arr[i]<<' ';
    cout<<endl;
    
    for(i=0; i<5; i++) cout<<*(arr+i)<<' ';
    cout<<endl;
    
    int *p=arr;
    
    for(i=0; i<5; i++) cout<<*p++<<' ';
    cout<<endl;
    
    return 0;
}

