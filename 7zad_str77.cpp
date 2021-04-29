#include <iostream>
using namespace std;
int main()
{

    int x, proiz;
    cin>>x;
    
    proiz= (x/1000)*((x/100)%10)*((x/10)%10)*(x%10);
    
    if(proiz%3==0) cout<<"Da"<<endl;
    else cout<<"Ne"<<endl;
    
return 0;
}

