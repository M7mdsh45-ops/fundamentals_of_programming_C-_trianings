
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    int target = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "I'm thinking of a number between 1 and 100.\n";

    while (guess != target) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < target) {
            std::cout << "Too low! Try again.\n";
        } else if (guess > target) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed it in " << attempts << " attempts.\n";
        }
    }
    return 0;
}

```
