#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Input a number\n";
    cin>>year;
    
    if(year%4==0 && year%100!=0) cout<<"Leap\n";
    else cout<<"Not leap\n";

return 0;
}
