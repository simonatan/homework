#include <iostream>
using namespace std;
int main()
{

    int x, a, b, c;
    cin>>x;
    
    a= x/100;
    b= (x/10)%10;
    c= x%10;
    
    if((a+b+c)%2==0) cout<<"Da"<<endl;
    else cout<<"Ne"<<endl;
    
return 0;
}

