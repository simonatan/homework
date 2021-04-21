#include <iostream>
using namespace std;
int main()
{
    int m, n;
    
    cout<<"Wywedete 'm' i 'n' w tozi red, kato n e po-golqmo ot m";
    cin>>m>>n;
    
    for(int i=m; i<=n ; i++)
    {
        if(i%5==0)
        { cout<<i<<", "; }
    }
    

    return 0;
}
