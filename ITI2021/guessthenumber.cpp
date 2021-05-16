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
    cout << "Guess My Number Game\n\n"; //izwejda neshtata w kawichkite

    int guess = 0; //deklarira promenliwa guess sys stojnost 0
    
    while (guess != num) { // cikyl while, kojto ima uslowie - dokato guess ne e rawen na random number-a, kojto kompyutyra e generiral
        cout << "Enter a guess between "<<minLimit<<" and "<<maxLimit<<": "; //izwejda neshtata w kawichkite
        
        cin >> guess; // potrebitelq wywejda tehniq guess
        times++;
        
        if(guess==0) break;

        if (guess > num) { // kogato guess e po-golqmo ot num
            cout << "Too high!\n\n"; // izwejda neshtata w kawichkite
        }
        else if (guess < num) // kogato guess e po-malko ot num
            {
                cout << "Too low!\n\n"; //izwejda neshtata w kawichkite
            }
        else {
            cout << "\nCorrect! You got it in "<<times<<" tries\n"; //izwejda neshtata w kawichkite - chisloto ne e nito po-malko, nito po-golqmo sledowatelno edinstwenoto neshto, koeto ostawa e da num e rawno na guess
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
