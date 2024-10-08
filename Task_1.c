#include <stdio.h>
#include <string.h>

/**
 * maain - Entry point
 * 
 * Return: Always 0 (Success)
 */

int main()
{
    char word[] = "hello";
    char guessedWord[] = "_____";
    char guess;
    int found = 0, maxGuesses = 6, incorrectGuesses = 0;

    printf("Welcome to the guessing game!\n");
    printf("You need to guess the word: %s\n", guessedWord);

    while (incorrectGuesses < maxGuesses)
    {
        printf("Enter your guess: ");
        scanf(" %c", &guess);

        found = 0;
        for (int i = 0; i < strlen(word); i++)
        {
            if (word[i] == guess)
            {
                guessedWord[i] = guess;
                found = 1;
            }
        }
        if (found == 0)
        {
            incorrectGuesses++;
            printf("Incorrect guess! You have %d guesses left.\n", maxGuesses - incorrectGuesses);
        }

        printf("Word: %s\n", guessedWord);

        if (strcmp(word, guessedWord) == 0)
        {
            printf("Congratulations! You have guessed the word correctly.\n");
            break;
        }
    }

    if (incorrectGuesses == maxGuesses)
    {
        printf("You have run out of guesses. The word was: %s\n", word);
    }

    return 0;
}
