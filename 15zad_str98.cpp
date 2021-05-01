#include <iostream>
using namespace std;
int main()
{

    unsigned int n, br=0;
    char s;
    cin>>n;
    
    for(int i=1; i<=n; i++)
    {
        cin>>s;
        if(s<=122 && s>=97) br++;
    }
    
    cout<<br<<endl;
    
return 0;
}
