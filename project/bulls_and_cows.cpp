#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    
    int digit, times = 1, bulls, cows, hint, reveal, game=2;
    
    cout<<"Bulls and cows\n\nRules:\nAll digits of the secret number are different.\nThe secret number can't start with a zero.\nIf the guess has matching digits in the right places they are bulls.\nIf they match but aren't in the exact places they are cows.\n\nExample:\nsecret number: 2479\nguess: 8491 - 1 bull and 1 cow\n\n";
    
    while(game==2)
    {
        times = 1;
    cout<<"How many digits would you like to play with? (2, 3, 4)\n";
    cin>>digit;
        
    if(digit==4)
    {
        int secretnum4=rand()%9000+1000, secret4digits[4], guess4digits[4], guess4;
        
        cout<<"\nIf you want to give up enter 0.\nYou'll be allowed a hint after the 8th guess where your chosen digit will be revealed.\n\n";
        
        for(int i=0; i<4; i++)
        {
            secret4digits[0]=secretnum4/1000;
            secret4digits[1]=(secretnum4/100)%10;
            secret4digits[2]=(secretnum4/10)%10;
            secret4digits[3]=secretnum4%10;

            for(int j=0; j<4; j++)
            {
                if(i!=j && secret4digits[i]==secret4digits[j])
                {
                    secretnum4=rand()%9000+1000;
                    i=-1;
                    break;
                }
            }
        }
            
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
            guess4digits[1]=(guess4/100)%10;
            guess4digits[2]=(guess4/10)%10;
            guess4digits[3]=guess4%10;

            bulls=0;
            cows=0;

            if(guess4==0)
            {
                cout<<"The secret number was "<<secretnum4<<".\n\nWanna try again? no(1) yes(2)\n";
                cin>>game;
                break;
            }

            for(int i=0; i<4; i++)
            {
                if(guess4digits[i]==secret4digits[i]) bulls++;

                for(int j=0; j<4; j++)
                {
                    if(j!=i && secret4digits[i]==guess4digits[j]) cows++;
                }
            }

            if(guess4==secretnum4)
            {
                cout<<"You guessed the number!\n\nWanna play again? no(1) yes(2)\n";
                cin>>game;
                break;
            }
            else
            {
                cout<<" - "<<bulls;
                if(bulls==1) cout<<" bull and ";
                else cout<<" bulls and ";
                if(cows==1) cout<<cows<<" cow"<<endl;
                else cout<<cows<<" cows"<<endl;
            }
                
            if(times==8)
            {
                cout<<"Hint? no(1) yes(2)\n";
                cin>>hint;
                    
                if(hint==2)
                {
                    cout<<"Which digit would you like to reveal?\n";
                    cin>>reveal;
                        
                    cout<<"The "<<reveal<<" digit is ";
                    reveal-=1;
                    cout<<secret4digits[reveal]<<".\n";
                }
            }
            times++;
        }
    }
        
    if(digit==3)
    {
        int secretnum3=rand()%900+100, secret3digits[3], guess3digits[3], guess3;
        
        cout<<"\nIf you want to give up enter 0.\nYou'll be allowed a hint after the 5th guess where your chosen digit will be revealed.\n\n";
        
        for(int i=0; i<3; i++)
        {
            secret3digits[0]=secretnum3/100;
            secret3digits[1]=(secretnum3/10)%10;
            secret3digits[2]=secretnum3%10;
                
            for(int j=0; j<3; j++)
            {
                if(i!=j && secret3digits[i]==secret3digits[j])
                {
                    secretnum3=rand()%900+100;
                    i=-1;
                    break;
                }
            }
        }
            
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
            guess3digits[1]=(guess3/10)%10;
            guess3digits[2]=guess3%10;

            bulls=0;
            cows=0;

            if(guess3==0)
            {
                cout<<"The secret number was "<<secretnum3<<".\n\nWanna try again? no(1) yes(2)\n";
                cin>>game;
                break;
            }

            for(int i=0; i<3; i++)
            {
                if(guess3digits[i]==secret3digits[i]) bulls++;

                for(int j=0; j<3; j++)
                {
                    if(j!=i && secret3digits[i]==guess3digits[j]) cows++;
                }
            }

            if(guess3==secretnum3)
            {
                cout<<"You guessed the number!\n\nWanna play again? no(1) yes(2)\n";
                cin>>game;
                break;
            }
            else
            {
                cout<<" - "<<bulls;
                if(bulls==1) cout<<" bull and ";
                else cout<<" bulls and ";
                if(cows==1) cout<<cows<<" cow"<<endl;
                else cout<<cows<<" cows"<<endl;
            }
                
            if(times==5)
            {
                cout<<"Hint? no(1) yes(2)\n";
                cin>>hint;
                    
                if(hint==2)
                {
                    cout<<"Which digit would you like to reveal?\n";
                    cin>>reveal;
                        
                    cout<<"The "<<reveal<<" digit is ";
                    reveal-=1;
                    cout<<secret3digits[reveal]<<".\n";
                }
            }
            times++;
        }
    }
        
    if(digit==2)
    {
        int secretnum2, secret2digits[2], guess2digits[2], guess2;
        
        cout<<"\nIf you want to give up enter 0.\nYou'll be allowed a hint after the 3th guess where your chosen digit will be revealed.\n\n";
        
        do
        {
            secretnum2=rand()%90+10;
            secret2digits[0]=secretnum2/10;
            secret2digits[1]=secretnum2%10;
                
        }while(secret2digits[0]==secret2digits[1]);
            
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

            bulls=0;
            cows=0;

            if(guess2==0)
            {
                cout<<"The secret number was "<<secretnum2<<".\n\nWanna try again? no(1) yes(2)\n";
                cin>>game;
                break;
            }
                
            for(int i=0; i<2; i++)
            {
                if(guess2digits[i]==secret2digits[i]) bulls++;

                for(int j=0; j<2; j++)
                {
                    if(j!=i && secret2digits[i]==guess2digits[j]) cows++;
                }
            }
                
            if(guess2==secretnum2)
            {
                cout<<"You guessed the number!\n\nWanna play again? no(1) yes(2)\n";
                cin>>game;
                break;
            }
            else
            {
                cout<<" - "<<bulls;
                if(bulls==1) cout<<" bull and ";
                else cout<<" bulls and ";
                if(cows==1) cout<<cows<<" cow"<<endl;
                else cout<<cows<<" cows"<<endl;
            }
                
            if(times==3)
            {
                cout<<"Hint? no(1) yes(2)\n";
                cin>>hint;
                    
                if(hint==2)
                {
                    cout<<"Which digit would you like to reveal?\n";
                    cin>>reveal;
                        
                    cout<<"The "<<reveal<<" digit is ";
                    reveal-=1;
                    cout<<secret2digits[reveal]<<".\n";
                }
            }
            times++;
        }
    }
    }

    return 0;
}

