#include<stdio.h>
//TODO: define, document, and implement this function
void initializeBlankString(int lenght, char *stirng);

void initializeBlankString(int lenght, char *string)
{
        int i;
        for(i=0;i<lenght;i++)
        {
            string[i] == '_';

        }
        char[lenght] = '\0';
}
//TODO: define, document, and implement this function


printWithSpaces();

//TODO: define, document, and implement this function
revealGuessedLetter();

//TODO: define, document, and implement this function
checkGuess();


//the following functions have been done for you.

/**
 * Sets the game up, checks for win condition,
 * prints relevant data
 */
void startGame(char *wordToGuess);

/**
 * Clears the unix terminal of previous input
 */
void clearScreen();

/**
 * Prints part of the horse based on the ratio between
 * the two numbers.
 */
void drawHorse(int guessedSoFar, int allowedGuesses);


int main()
{
    int lenght;
    printf("Enter the lenght of the string");
    scanf("%d",&lenght);

    char string[lenght + 1]; // plus 1 for null;

    printf("Enter string");
    scanf("%s",&string);

    initializeBlankString(lenght,*string);
}