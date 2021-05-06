#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int lottery = rand() % 900 + 100; // random three digit number
    int arrlottery[]={lottery/100, (lottery/10)%10, lottery%10};
    
    // Prompt the user to enter a guess

    cout << "Enter your lottery pick (three digits): ";
    int guess = 0;// enter a guess
    cin >> guess;
    // Get digits from lottery
    
    // Get digits from guess
    int guessDigit1 = guess/100;
    int guessDigit2 = (guess/10)%10;
    int guessDigit3 = guess%10;

    cout << "The lottery number is " << lottery << endl;
    
    int br=0;

    for(int i=0; i<3; i++)
        {
            if(arrlottery[i]==guessDigit1 || arrlottery[i]==guessDigit2 || arrlottery[i]==guessDigit3)
            {
                br++;
            }
        }
    
      switch (br)
      {
          case 1: cout<<"Match one digit: you win $1,000\n"; break;
          case 2: cout<<"Match two digits: you win $2,000\n"; break;
          case 3: if (guess == lottery) cout << "Exact match: you win $10,000\n";
                  else cout<<"Match all digits: you win $3,000\n"; break;
          case 0: cout<<"Sorry, no match\n"; break;
      }

    return 0;
}
