#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    double a, b, c, x1, x2, D;
    cin>>a>>b>>c;
    
    if(a==0)
    {
        if(b==0)
        {
            if(c==0) cout<<"Wsqko x e reshenie"<<endl;
            else cout<<"Nqma reshenie"<<endl;
        }
        else cout<<"x="<<-c/b<<endl;
    }
    else
    {
        D=b*b - 4*a*c;
        if(D>=0)
        {
            x1= (-b+sqrt(D))/(2*a);
            x2= (-b-sqrt(D))/(2*a);
            if(x1==x2) cout<<"x1=x2="<<x1<<endl;
            else cout<<"x1="<<x1<<" x2="<<x2<<endl;
            
        }
        else cout<<"Nqma realni koreni"<<endl;
    }
    
return 0;
}

