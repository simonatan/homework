#include <iostream> // library for input output(cout, cin)
#include <cstdlib> // library for random number generating
#include <ctime> // access the current time
using namespace std;

int main()
{
    srand(time(0)); //seed random number generator
    int circle=0, ch, num2;
    int times=0;
    int minLimit=0, maxLimit=0;
    cout<<"Enter positive number as min limit for number range\n";
    cin>>minLimit;
    cout<<"Enter positive number as max limit for number range\n";
    cin>>maxLimit;
    
    while(minLimit<=0 || maxLimit<=0 || minLimit>maxLimit)
    {
        cout<<"Invalid data\n";
        cout<<"Enter positive number as min limit for number range\n";
        cin>>minLimit;
        cout<<"Enter positive number as max limit for number range\n";
        cin>>maxLimit;
    }
   
    int num = rand() % (maxLimit-minLimit +1) + minLimit; //random number between minLimit and maxLimit
    cout << "Guess My Number Game\n\n";

    int guess = 0;
    
    while (guess != num) { 
        cout << "Enter a guess between "<<minLimit<<" and "<<maxLimit<<": ";
        
        cin >> guess;
        times++;
        
        if(guess==0) break;

        if (guess > num) { 
            cout << "Too high!\n\n";
        }
        else if (guess < num)
            {
                cout << "Too low!\n\n"; 
            }
        else {
            cout << "\nCorrect! You got it in "<<times<<" tries\n";
        }
        
        if(times==5)
        {
            num2=num;
            while(num2!=0)
            {
                ch=num2%10;
                switch (ch)
                {
                    case 6:
                    case 9:
                    case 0: circle+=1; break;
                    case 8: circle+=2; break;
                }
                num2/=10;
            }
            cout<<"The number has "<<circle<<" circles!\n";
        }
    }

    return 0;
}
