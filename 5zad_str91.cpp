#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"n=";
    cin>>n;
    
    while(n<5 || n>50)
    {
        cout<<"Nekorektni danni!\nWywedi otnowo\nn=";
        cin>>n;
    }
    
    cout<<n*n<<endl;
    
return 0;
}
