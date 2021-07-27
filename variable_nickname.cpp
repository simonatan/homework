#include <iostream>
using namespace std;
int main()
{
    int var=18;
    int &varnick=var;
    
    cout<<var<<endl;
    cout<<varnick<<endl;
    
    varnick++;
    cout<<varnick<<endl;
    cout<<var<<endl;
    
    var=100;
    cout<<varnick<<endl;
    cout<<var<<endl;
    
    return 0;
}

