#include <iostream>
using namespace std;
int main()
{
//reshenie 1
    int n1, n2, n3, n4;
    
    for(int i=1000; i<10000; i++)
    {
        n1=i/1000;
        n2=i/100%10;
        n3=i/10%10;
        n4=i%10;
        
        if(n1==n2 || n1==n3 || n1==n4 || n2==n3 || n2==n4 || n3==n4)
            {
                cout<<i<<" ";
            }
    }
    
    cout<<endl;
    
//reshenie 2
    
  /*  for(int a=1; a<=9; a++)
    for(int b=0; b<=9; b++)
    for(int c=0; c<=9; c++)
    for(int d=0; d<=9; d++)
    if(a==b||a==c||a==d||b==c||b==d||c==d)
      cout<<a<<b<<c<<d<<' '; */
    
return 0;
}
