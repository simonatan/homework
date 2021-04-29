#include <iostream>
using namespace std;
int main()
{
   
    unsigned int d, m, g;
    cin>>d>>m>>g;
    
    d=d+7;
    
    switch (m)
    {
        case 1: case 3: case 5: case 7: case 8: case 10:
            if(d>31) {d-=31; m++;}
            break;
        case 4: case 6: case 9: case 11:
            if(d>30) {d-=30; m++;}
            break;
        case 2:
            if(g%4==0)
            {
                if(d>29) {d-=29; m++;}
            }
            else if(d>28) {d-=28; m++;}
            break;
        case 12:
            if(d>31) {d-=31; m=1; g++;}
            break;
    }
    
    cout<<d<<" "<<m<<" "<<g<<endl;
    
return 0;
}
