#include <bits/stdc++.h>

using namespace std;

int main()
{
    srand((unsigned int)(time(0)));
    // srand has been added to avoid the repetitive nature of the rand functig++on
    int randomNumber = rand() % 100 + 1;
    int guess = -1;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Can you guess what it is?" << endl;

    while (true)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < randomNumber)
        {
            if (randomNumber - guess <= 10)
            {
                cout << "Your guess is still lower than the actual number, but you're very close!" << endl;
            }
            else if (randomNumber - guess <= 20)
            {
                cout << "Your guess is low, but you're getting closer!" << endl;
            }
            else
            {
                cout << "Your guess is too low. Try again!" << endl;
            }
        }
        else if (guess > randomNumber)
        {
            if (guess - randomNumber <= 10)
            {
                cout << "Your guess is still higher than the actual number, but you're very close!" << endl;
            }
            else if (guess - randomNumber <= 20)
            {
                cout << "Your guess is high, but you're getting closer!" << endl;
            }
            else
            {
                cout << "Your guess is too high. Try again!" << endl;
            }
        }
        else
        {
            cout << "Congratulations! You guessed the correct number!" << endl;
            break;
        }
    }

    return 0;
}
