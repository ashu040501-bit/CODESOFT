#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int number, guess, attempts = 0;

   
    srand(time(0));
    number = rand() % 100 + 1; 

    cout << "Guess a number between 1 and 100:\n";

    
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > number) {
            cout << "Too high! Try a smaller number.\n";
        } else if (guess < number) {
            cout << "Too low! Try a bigger number.\n";
        } else {
            cout << " You guessed the correct number (" << number << ") in " << attempts << " attempts.\n";
        }
    } while (guess != number);

    return 0;
}
