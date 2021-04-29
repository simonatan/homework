#include <iostream>
using namespace std;
int main()
{
   
    unsigned int n;
    cout<<"n=";
    cin>>n;
    
//reshenie 1

    for(int i=1; i<n; i++)
    {
        if(i%5==0) cout<<i<<endl;
    }
//reshenie 2
    
   /* for(int i=5; i<n; i+=5)
    {
        cout<<i<<endl;
    } */
    
return 0;
}
