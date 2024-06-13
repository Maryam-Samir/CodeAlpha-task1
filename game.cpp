#include <iostream>
#include <cstdlib>
#include <ctime>

int main() 
{
    int secret_number, guess, attempts = 0;

    // Seed the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));

    // Generate a random number between 1 and 100
    secret_number = rand() % 100 + 1;

    std::cout << "I'm thinking of a number between 1 and 100. Can you guess what it is?\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;
        if ((guess < 0) || (guess > 100)) {
            std::cout << "Invalid input\n";
        } else if (guess < secret_number) {
            std::cout << "Too low! Try again.\n";
        } else if (guess > secret_number) {
            std::cout << "Too high! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
        }
    } while (guess != secret_number);

    return 0;
}