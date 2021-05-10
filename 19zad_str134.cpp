#include <iostream>
using namespace std;

int main ()
{
    char str[101];
    cin.getline(str, 101);

    int i=0, br=0, max=0, n1=0, n2;

    while(str[i]!='\0')
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            if(br>max)
            {
                n1=i-br;
                n2=i;
                max=br;
            }
            br=0;
        }else br++;

        i++;
    }

    if(br>max)
    {
        n1=i-br;
        n2=i;
        max=br;
    }

    for(int j=n1; j<n2; j++) cout<<str[j];
    cout<<endl;
    
    return 0;
}
