#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int compChoice = rand() % 3;
    int userChoice, scissors=0, rock=1, paper=2;
    
    cout<<"scissors (0), rock (1), paper (2): ";
    cin>>userChoice;
    
    if(compChoice==scissors) cout<<"The computer is scissors. ";
    else if(compChoice==rock) cout<<"The computer is rock. ";
    else cout<<"The computer is paper. ";
    
    if(userChoice==scissors) cout<<"You are scissors. ";
    else if(userChoice==rock) cout<<"You are rock. ";
    else cout<<"You are paper. ";
    
    if(userChoice==compChoice) cout<<"Draw!\n";
        else if((userChoice==scissors && compChoice==paper)
             || (userChoice==rock && compChoice==scissors)
             || (userChoice==paper && compChoice==rock)) cout<<"You won!\n";
            else cout<<"You lost!\n";

return 0;
}
