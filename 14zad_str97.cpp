#include <iostream>
using namespace std;

int main() {
    
    int flag, sum;
    
    for(int i=100; i<1000; i++)
    {
        sum=i/100;
        sum+=(i/10)%10;
        sum+=i%10;
        flag=1;
        
        for(int k=2; k<=sum/2; k++)
        {
            if(sum%k==0)
            {
                flag=0;
                break;
            }
        }
        
        if(flag && sum!=1)
        { cout<<i<<", "; }
        
    }
    return 0;
}
