#include <iostream>
using namespace std;

int main()
{
    int n, a[36], b[36], br=0, chislo, swap;
    cin>>n;

    for(int i=0; i<n; i++) cin>>a[i];

    for(int i=0; i<n; i++)
    {
        chislo=a[i];
        
        while(chislo!=1)
        {
          if(chislo%2!=0) break;
          chislo/=2;
        }
        if(chislo==1)
        {
          b[br]=a[i];
          br++;
        }
    }

    for(int i=0;i<br;i++)
    {
        for(int j=0; j<br-i-1; j++)
        {
          if(b[j]>b[j+1])
          {
            swap=b[j];
            b[j]=b[j+1];
            b[j+1]=swap;
          }
        }
    }
      
    for(int i=0; i<br; i++) cout<<b[i]<<" ";
    
return 0;
}
