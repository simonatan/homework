#include <iostream>
using namespace std;

int main()
{
    int C[30]={0}, size, *p=C, sum=0;
    
    cout<<"size of array: ";
    cin>>size;
    
    for(int i=0; i<size; i++) cin>>*p++;
    
    p=C;
    
    for(int i=0; i<size; i++)
    {
        if(*p<0)
        {
            cout<<"first negative number"<<*p<<endl;
            break;
        }
        else sum+=*p;
        p++;
    }
    
    cout<<"sum="<<sum<<endl;
    
    return 0;
}
