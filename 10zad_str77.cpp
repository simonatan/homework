#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    
    double x;
    cin>>x;
    
    if(x<-4) cout<<"y="<<(2*x+1)<<endl;
    else
    {
        if(x>=-4 && x<=5) cout<<"y="<<(sqrt(pow(x,2)+3))<<endl;
        else cout<<"y="<<(x/(2*x+1))<<endl;
    }
    
return 0;
}

