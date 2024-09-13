// Predefine a list of words.
// Randomly select a word from the list.
// Display the word as underscores (_), hiding the actual letters.
// Allow the user to guess one letter at a time.
// If the guessed letter is in the word, reveal it in the correct positions.
// If the guessed letter is not in the word, increment the incorrect guess count.
// End the game if the user makes 6 incorrect guesses or if the word is fully guessed.

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
