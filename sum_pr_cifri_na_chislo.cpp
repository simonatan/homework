#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x;
    cout<<"x=";
    cin>>x;
    cout<<"sum="<<x/100+(x/10)%10+x%10<<endl;
    cout<<"pr="<<x/100*(x/10)%10*x%10<<endl;
    
return 0;
}

