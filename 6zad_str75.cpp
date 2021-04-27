#include <iostream>
using namespace std;
int main()
{

    double xa, ya;
    cin>>xa>>ya;
    
    if(xa>0)
    {
        if(ya>0) cout<<"I kwadrant"<<endl;
        else cout<<"IV kwadrant"<<endl;
    }
    else
    {
        if(ya>0) cout<<"II kwadrant"<<endl;
        else cout<<"III kwadrant"<<endl;
    }
    
return 0;
}

