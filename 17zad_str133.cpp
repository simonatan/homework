#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
    char str[100];
    cin.getline(str, 100);
    
    int s=str[0], max=1, i=0, br=1;
    
    while(str[i]!='\0')
    {
        if(str[i]==str[i+1]) br++;
        else
        {
            if(br>max)
            {
                max=br;
                s=str[i];
            }
            br=1;
        }
        i++;
    }
    
    cout<<max<<" "<<(char)s<<endl;
    
    return 0;
}
