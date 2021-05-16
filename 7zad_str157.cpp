#include <iostream>
#include <fstream>
using namespace std;
struct Person
{
    char name[51];
    char egn[11];
};
int main ()
{
    ofstream file;
    Person people[10];
    
    file.open("MyFile.txt");
    
    for(int i=0; i<10; i++)
    {
        cin.get();
        cin.getline(people[i].name, 51);
        cin>>people[i].egn;
        
        file<<people[i].name<<" ";
        file<<people[i].egn<<'\n';
    }
    
    file.close();
    
    return 0;
}
