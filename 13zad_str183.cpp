#include <iostream>
using namespace std;

int main()
{
    int B[20]={0}, size, *p=B, sum=0, br=0;
    
    cout<<"size of array: ";
    cin>>size;
    
    for(int i=0; i<size; i++) cin>>*p++;
    
    p=B;
    
    for(int i=0; i<size; i++)
    {
        if(*p>=0) sum+=*p;
        else br++;
        p++;
    }
    
    cout<<"sum="<<sum<<"\nbr="<<br<<endl;
    
    return 0;
}
