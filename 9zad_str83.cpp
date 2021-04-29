#include <iostream>
using namespace std;
int main()
{
   
    unsigned int d, m, g;
    cin>>d>>m>>g;
    
    switch (d)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27: cout<<++d<<" "<<m<<" "<<g<<endl; break;
        case 28:
            if(m==2 && g%4!=0) cout<<"1 3 "<<g<<endl;
            else
            {
                if(m==2 && g%4==0) cout<<"29 2 "<<g<<endl;
                else cout<<++d<<" "<<m<<" "<<g<<endl;
            } break;
        case 29:
            if(m==2 && g%4==0) cout<<"1 3 "<<g<<endl;
            else
            {
                if(m==2 && g%4!=0) cout<<"Neprawilni danni"<<endl;
                else cout<<++d<<" "<<m<<" "<<g<<endl;
            } break;
        case 30:
            if(m==4 || m==6 || m==9 || m==11) cout<<"1 "<<++m<<" "<<g<<endl;
            else
            {
                if(m==2) cout<<"Neprawilni danni"<<endl;
                else cout<<"31 "<<m<<" "<<g<<endl;
            } break;
        case 31:
            if(m==4 || m==6 || m==9 || m==11 || m==2) cout<<"Neprawilni danni"<<endl;
            else
            {
                if(m==12) cout<<"1 1 "<<++g<<endl;
                else cout<<"1 "<<++m<<" "<<g<<endl;
            } break;
        default: cout<<"Neprawilni danni"<<endl;
    }
    
return 0;
}

