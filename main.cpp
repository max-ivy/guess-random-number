#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int target = rand() % 100 + 1;

    // Ask the user to guess the number
    cout << "I'm thinking of a number between 1 and 100. Can you guess what it is?" << endl;
    int guess;
    cin >> guess;

    // Keep asking the user to guess the number until they get it right
    while (guess != target)
    {
        if (guess < target)
        {
            cout << "Your guess is too low. Try again: ";
        }
        else
        {
            cout << "Your guess is too high. Try again: ";
        }
        cin >> guess;
        cin.ignore(10000, '\n');
    }

    // The user has guessed the number
    cout << "Congratulations! You guessed the number!" << endl;

    return 0;
}