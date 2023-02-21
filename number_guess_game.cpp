// The Guessing Number Code

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int numGenerator()
{
    static int randomNumber = 0; // declare the random number as static to preserve its value between function calls

    if (randomNumber == 0)   // generate a random number only if it has not been generated yet
    {
        srand(time(0));
        randomNumber = rand() % 100;
    }

    return randomNumber;
}

int main()
{
    // This here is our INPUT ENTRY POINT.
    int x;
    cout << "Guess the number : ";
    cin >> x;

    // Our Beautifull judge, that hint us whether we are close or far from our path.
    while(x != numGenerator())
    {
        // This first conditional statement is for the winner who guessed the number in FIRST ENTRY POINT: 
        if(x == numGenerator())
        {
            cout << "Congratulation ! You Have Luck My Friend.";
            cout << "You Have Guessed Correctly.\n";
            cout << "The Number Is : " << x;
            break;
        }
        // Starting From Here Is For The TryHard
        else if (x < numGenerator())
        {
            cout << "Too, Low! Guess Again : ";
            cin>> x;
            if(x == numGenerator())
            {
                cout << "You Have Guessed Correctly.\n";
                cout << "The Number Is : " << x;
            }
        }
        else if(x > numGenerator())
        {
            cout << "Too, High! Guess Again : ";
            cin>> x;
            if(x == numGenerator())
            {
                cout << "You Have Guessed Correctly.\n";
                cout << "The Number Is : " << x;
            }
        }
    }
    return 0;
}
