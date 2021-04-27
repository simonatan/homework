#include <iostream>
using namespace std;
int main()
{

    double a, b;
    cin>>a>>b;
    
    if(a==0)
    {
        if(b==0) cout<<"Wsqko x e reshenie"<<endl;
        else cout<<"Nqma reshenie"<<endl;
    }
    else cout<<-b/a<<endl;
    
return 0;
}

