#include <iostream>
#include <cstring>
using namespace std;
struct People
{
    char first_name[21];
    char last_name[21];
    char egn[11];
};
int main ()
{
    int n, swap, arr[21];
    cin>>n;
    
    People people[51];
    
    for(int i=0; i<n; i++)
    {
        cin>>people[i].first_name;
        cin>>people[i].last_name;
        cin>>people[i].egn;
        arr[i]=i;
    }
    
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(strcmp(people[arr[j]].first_name, people[arr[j+1]].first_name)==1)
            {
                swap=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=swap;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<people[arr[i]].first_name<<" "<<people[arr[i]].last_name<<" "<<people[arr[i]].egn<<endl;
    }
    

    return 0;
}
