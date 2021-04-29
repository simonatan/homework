#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    cin>>a>>b>>c;

    if(a+b<=c || b+c<=a || a+c<=b) cout<<"ne syshtestwuwa takyw triygylnik"<<endl;
    else
    {
        if(a==b && a==c) cout<<"syshtestwuwa, rawnostranen"<<endl;
        else
        {
            if(a==b || b==c || a==c) cout<<"syshtestwuwa, rawnobedren"<<endl;
            else cout<<"syshtestwuwa, raznostranen"<<endl;
        };
            
    }
        
return 0;
}

