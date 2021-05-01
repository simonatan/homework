#include <iostream>
using namespace std;
int main()
{
    unsigned int chislo, br=0, flag;
    
    do
    {
        flag=1;
        cin>>chislo;
        for(int i=2; i<=chislo/2; i++)
        {
            if(chislo%i==0)
            {
                flag=0;
                break;
            }
        }
        if((flag) && (chislo!=0)) br++;
    }
    while(chislo!=0);
        
        cout<<"Broj prosti chisla: "<<br<<endl;
    
return 0;
}
