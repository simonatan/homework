#include <iostream>
using namespace std;
int main()
{

//reshenie 1
    int sum, flag;
    
    for(int i=100; i<1000; i++)
    {
        flag=1;
        sum=i/100;
        sum+=i/10%10;
        sum+=i%10;
        
        for(int k=2; k<=sum/2; k++)
        {
            if(sum%k==0)
            {
                flag=0;
                break;
            }
        }
        if(flag!=0) cout<<i<<" ";
    }
    
//reshenie 2
   /* int sum;
    
    for(int i=100; i<1000; i++)
    {
        sum=i/100;
        sum+=i/10%10;
        sum+=i%10;
        
        switch(sum)
        {
            case 2:
            case 3:
            case 5:
            case 7:
            case 11:
            case 13:
            case 17:
            case 19:
            case 23: cout<<i<<" "; break;
        }
    } */
    
return 0;
}
