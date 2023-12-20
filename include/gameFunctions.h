#include<stdio.h>
//TODO: define, document, and implement this function
void initializeBlankString(int lenght, char *stirng);
void printWithSpaces(int lenght_1 , char *string_1);
int checkGuess(char *string_2 , char *string_3);

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


void printWithSpaces(int lenght_1 , char *string_1)
{
    int i;
    for(i=0;string_1[i]!=\0;i++)
    {
        printf("%c ",string_1[i]);
    }

    printf("\n");
}

//TODO: define, document, and implement this function
revealGuessedLetter();

//TODO: define, document, and implement this function
 int checkGuess(char *string_2 , char *string_3)
{
    if(strcmp(string_2 , string_3)==0)
    {
        return 1;
    }

    return 0;
}


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

    int string_1;
    printf("Enter String");
    scanf("%s"&string_1);

    int lenght_1 = strlen(string_1);
   
    printWithSpaces(lenght_1,string_1);


    int string_2;
    int string_3; 

    
    printf("Enter string");
    scanf("%s",&string_2);

    
    printf("Enter string");
    scanf("%s",&string_3);

    if(checkGuess(string_2,string_3))
    {
        printf("these string are same\n");
    }
    else{
        printf("these strings are different");
    }
    return 0;





    
}