#include <iostream>
using namespace std;

int main ()
{
    char str[201];
    cin.getline(str, 201);

    int i=0, br=0, min=200, n1=0;

    while(str[i]!='\0')
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            if(br<min)
            {
                min=br;
                n1=i-br;
            }
            br=0;
            while(str[i+1]==' ') i++;

        }else br++;
        i++;
    }

    if(br<min)
    {
        min=br;
        n1=i-br;
    }

    cout<<min<<" "<<n1<<endl;

    return 0;
}
