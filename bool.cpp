#include <iostream>
using namespace std;
int main()
{

    bool a=true, b=true;
    int x, y;

    x= a&&b;
    cout<<x<<endl;
    b=false;
    x= a&&b;
    cout<<x<<endl;
    a=false;
    b=true;
    x= a&&b;
    cout<<x<<endl;
    b=false;
    x= a&&b;
    cout<<x<<endl;

    a=true;
    b=true;
   
    y=a||b;
    cout<<y<<endl;
    b=false;
    y=a||b;
    cout<<y<<endl;
    a=false;
    b=true;
    y=a||b;
    cout<<y<<endl;
    b=false;
    y=a||b;
    cout<<y<<endl;

return 0;
}

