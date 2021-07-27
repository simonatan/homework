#include <iostream>
using namespace std;

int main()
{
    int D[40]={0}, size, *p=D, sum=0, br=0;
    
    cout<<"size of array: ";
    cin>>size;
    
    for(int i=0; i<size; i++) cin>>*p++;
    
    p=D;
    
    for(int i=0; i<size; i++)
    {
        if(*p%2==0)
        {
            sum+=*p;
            br++;
        }
        p++;
    }
    
    if(sum) cout<<"average of even numbers="<<(double) sum/br<<endl;
    else cout<<"there haven't been found any even numbers\n";
    
    return 0;
}
