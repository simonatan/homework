#include <iostream>
using namespace std;
int main()
{
/* reshenie 1 */

    float a, b, c;
    cin>>a>>b>>c;
    
    if(a>b)
    {
        if(a>c) cout<<a<<endl;
        else cout<<c<<endl;
    }
    else
    {
        if(b>c) cout<<b<<endl;
        else cout<<c<<endl;
    }

    
/* reshenie 2 */
    
/*    float x, max;
    cin>>x;
    max=x;
    cin>>x;
    if(x>max) max=x;
    cin>>x;
    if(x>max) max=x;
    cout<<max<<endl;
*/
    
return 0;
}

