#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
bool DifferentDigits(int number)
{
  bool arr[10]={false};

  while(number)
  {
    if(arr[number%10]) return 1;
    else arr[number%10]=true;
    number/=10;
  }
return 0;
}
void BullsAndCows(int digit, int secretnum[], int guess[])
{
    int bulls=0, cows=0;
    
    for(int i=0; i<digit; i++)
    {
        if(secretnum[i]==guess[i]) bulls++;
        else
        {
            for(int j=0; j<digit; j++)
            {
                if(secretnum[i]==guess[j]) cows++;
            }
        }
    }
    
    cout<<" - "<<bulls;
    if(bulls==1) cout<<" bull and ";
    else cout<<" bulls and ";
    if(cows==1) cout<<cows<<" cow"<<endl;
    else cout<<cows<<" cows"<<endl;
}
void Hint(int secretnum[])
{
    bool hint;
    int reveal;
    
    cout<<"Hint? no(0) yes(1)\n";
    cin>>hint;
    
    if(hint==true)
    {
        cout<<"Which digit would you like to reveal?\n";
        cin>>reveal;
        
        cout<<"The "<<reveal<<" digit is ";
        cout<<secretnum[reveal-1]<<".\n";
    }
}

int main()
{
    srand(time(0));
    
    int digit, times;
    bool game=1;
    
    cout<<"Bulls and cows\n\nRules:\nAll digits of the secret number are different.\nThe secret number can't start with a zero.\nIf the guess has matching digits in the right places, they are bulls.\nIf they match but aren't in the exact places, they are cows.\nIf you want to give up, enter 0.\n\nExample:\nsecret number: 2479\nguess: 8491 - 1 bull and 1 cow\n\n";
    
    while(game==true)
    {
        times = 1;
        cout<<"How many digits would you like to play with? (2, 3, 4)\n";
        cin>>digit;
        
        if(digit==4)
        {
            int secretnum4=rand()%9000+1000, secret4digits[4], guess4digits[4], guess4;
        
            cout<<"\nYou'll be allowed a hint after the 8th guess where your chosen digit will be revealed.\n\n";
        
            while(DifferentDigits(secretnum4)!=0) secretnum4=rand()%9000+1000;
            
            while(guess4!=secretnum4)
            {
                cout<<"Enter guess No."<<times<<": ";
                cin>>guess4;
                
                while((guess4>9999 || guess4<1000) && guess4!=0)
                {
                    cout<<"Oops! Remember you're playing with "<<digit<<" digits.\nRe-enter guess No."<<times<<": ";
                    cin>>guess4;
                }

                guess4digits[0]=guess4/1000;
                guess4digits[1]=guess4/100%10;
                guess4digits[2]=guess4/10%10;
                guess4digits[3]=guess4%10;
                
                secret4digits[0]=secretnum4/1000;
                secret4digits[1]=secretnum4/100%10;
                secret4digits[2]=secretnum4/10%10;
                secret4digits[3]=secretnum4%10;

                if(guess4==0)
                {
                    cout<<"The secret number was "<<secretnum4<<".\n\nWanna try again? no(0) yes(1)\n";
                    cin>>game;
                    break;
                }
                else if(guess4==secretnum4)
                {
                    cout<<"You guessed the number!\n\nWanna play again? no(0) yes(1)\n";
                    cin>>game;
                    break;
                }
                else
                {
                    BullsAndCows(digit, secret4digits, guess4digits);
                }
                
                if(times==8)
                {
                    Hint(secret4digits);
                }
                times++;
            }
        }
        else if(digit==3)
        {
            int secretnum3=rand()%900+100, secret3digits[3], guess3digits[3], guess3;
        
            cout<<"\nYou'll be allowed a hint after the 5th guess where your chosen digit will be revealed.\n\n";
        
            while(DifferentDigits(secretnum3)!=0) secretnum3=rand()%900+100;
            
            while(guess3!=secretnum3)
            {
                cout<<"Enter guess No."<<times<<": ";
                cin>>guess3;
                
                while((guess3>999 || guess3<100) && guess3!=0)
                {
                    cout<<"Oops! Remember you're playing with "<<digit<<" digits.\nRe-enter guess No."<<times<<": ";
                    cin>>guess3;
                }

                guess3digits[0]=guess3/100;
                guess3digits[1]=guess3/10%10;
                guess3digits[2]=guess3%10;
                
                secret3digits[0]=secretnum3/100;
                secret3digits[1]=secretnum3/10%10;
                secret3digits[2]=secretnum3%10;

                if(guess3==0)
                {
                    cout<<"The secret number was "<<secretnum3<<".\n\nWanna try again? no(0) yes(1)\n";
                    cin>>game;
                    break;
                }
                else if(guess3==secretnum3)
                {
                    cout<<"You guessed the number!\n\nWanna play again? no(0) yes(1)\n";
                    cin>>game;
                    break;
                }
                else
                {
                    BullsAndCows(digit, secret3digits, guess3digits);
                }
                
                if(times==5)
                {
                    Hint(secret3digits);
                }
                times++;
            }
        }
        else
        {
            int secretnum2=rand()%90+10, secret2digits[2], guess2digits[2], guess2;
        
            cout<<"\nYou'll be allowed a hint after the 3th guess where your chosen digit will be revealed.\n\n";
        
            while(DifferentDigits(secretnum2)!=0) secretnum2=rand()%90+10;
            
            while(guess2!=secretnum2)
            {
                cout<<"Enter guess No."<<times<<": ";
                cin>>guess2;
                
                while((guess2>99 || guess2<10) && guess2!=0)
                {
                    cout<<"Oops! Remember you're playing with "<<digit<<" digits.\nRe-enter guess No."<<times<<": ";
                    cin>>guess2;
                }
 
                guess2digits[0]=guess2/10;
                guess2digits[1]=guess2%10;
                
                secret2digits[0]=secretnum2/10;
                secret2digits[1]=secretnum2%10;

                if(guess2==0)
                {
                    cout<<"The secret number was "<<secretnum2<<".\n\nWanna try again? no(0) yes(1)\n";
                    cin>>game;
                    break;
                }
                else if(guess2==secretnum2)
                {
                    cout<<"You guessed the number!\n\nWanna play again? no(0) yes(1)\n";
                    cin>>game;
                    break;
                }
                else
                {
                    BullsAndCows(digit, secret2digits, guess2digits);
                }
                
                if(times==3)
                {
                    Hint(secret2digits);
                }
                times++;
            }
        }
    }

    return 0;
}
