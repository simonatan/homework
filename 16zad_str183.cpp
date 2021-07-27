#include <iostream>
using namespace std;

int main()
{
    int E[50]={0}, size, *p=E, proiz=1;
    
    cout<<"size of array: ";
    cin>>size;
    
    for(int i=0; i<size; i++) cin>>*p++;
    
    p=E;
    
    for(int i=0; i<size; i++)
    {
        if(*p%3==0)
        {
            proiz*=*p;
        }
        p++;
    }
    
    if(proiz) cout<<proiz<<endl;
    else cout<<"none of the numbers can be evenly divided by 3";
    
    return 0;
}
