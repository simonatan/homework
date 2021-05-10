#include <iostream>
#include <cstring>
using namespace std;
struct Hospital
{
    char name[41];
    char diagnose[21];
    int days;
};
int main ()
{
    int n;
    cin>>n;
    
    char d[21];
    
    Hospital patients[51];
    
    for(int i=0; i<n; i++)
    {
        cin.get();
        cin.getline(patients[i].name, 41);
        cin>>patients[i].diagnose;
        cin>>patients[i].days;
    }
    cin>>d;
    
    int max=patients[0].days, ind;
    
    for(int i=0; i<n; i++)
    {
        if(strcmp(patients[i].diagnose, d)==0)
        {
            cout<<patients[i].name<<endl;
        }
        if(patients[i].days>max)
        {
            max=patients[i].days;
            ind=i;
        }
    }
    
    cout<<patients[ind].name<<" "<<patients[ind].diagnose<<" "<<patients[ind].days;

    return 0;
}
