/*Number Game Implementation
1. Ask user for number
2. use scannerf
3. make it do while the method so that it keeps wanting to play until player wants to quit
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int firstChoice = 0; //initializing a number that represents the main menu
    int maxNumber = 10; //the default number
    int number; //holds the number for random
    while(firstChoice != 3)
    {
        printf("Hello welcome to the Number Game.\n");
        printf("Here are your options:\n");
        printf("Press 1 to play a game\n");
        printf("Press 2 to change the max number\n");
        printf("Press 3 to quit\n");
        scanf("%d", &firstChoice);
        int secondChoice = 0;
        char quit; // character that determines to quit the game

        time_t t;
        srand((unsigned) time(&t)); //initialize random number

        while(firstChoice == 1)
        {   
            if(secondChoice != number)
            {
                /*if(secondChoice = "q")
                {
                    printf("Returning back to the main menu\n");
                    firstChoice = 0; //criteria to go back to main menu
                }*/
                //else
                //{
                    number = rand() & maxNumber;
                    printf("Pick a number between 1 and %d: \n", maxNumber);
                    scanf("%d", &secondChoice);
                    while(secondChoice != number)
                    {
                        if(secondChoice > number)
                        {
                            printf("You guessed incorrectly, would you like to continue? To quit enter q, otherwish enter y: \n");
                            scanf("%s", &quit);
                            if(quit != "q")
                            {
                                printf("Enter another number, the number is lower than the one you entered: \n");
                                scanf("%d", &secondChoice);
                            }
                            else
                            {
                                secondChoice = 0;
                                while(secondChoice != number)
                                {
                                    secondChoice++; //conditions to quit
                                    firstChoice = 0; //conditions to quit
                                }
                            }
                        }
                        else if(secondChoice < number)
                        {
                            printf("You guessed incorrectly, would you like to continue? To quit enter q, otherwish enter y: \n");
                            scanf("%s", &quit);
                            if(quit != "q")
                            {
                                printf("Guess again, the number is higher than the one you entered: \n");
                                scanf("%d", &secondChoice);
                            }
                            else
                            {
                                secondChoice = 0;
                                while(secondChoice != number)
                                {
                                    secondChoice++; //conditions to quit
                                    firstChoice = 0; //conditions to quit
                                }
                            }
                        }
                        else if(secondChoice > maxNumber)
                        {
                            printf("You guessed incorrectly, would you like to continue? To quit enter q, otherwish enter y: \n");
                            scanf("%s", &quit);
                            if(quit != "q")
                            {
                                printf("Cannot enter number bigger than the max value please enter again: \n");
                                scanf("%d", &secondChoice);
                            }
                            else
                            {
                                secondChoice = 0;
                                while(secondChoice != number)
                                {
                                    secondChoice++; //conditions to quit
                                    firstChoice = 0; //conditions to quit
                                }
                            }
                        }
                    }
                //}
            }
            else if(secondChoice == number)
            {
                printf("Congratulations you entered correctly you will be brought back to the main menu.\n");
                firstChoice = 0;
            }
        }
        if(firstChoice == 2)
        {
            printf("What number do you want to change to the max number? \n");
            scanf("%d", &maxNumber);
            while(maxNumber < 0)
            {
                printf("The number you have entered is negative, please enter a positive number: \n");
                printf("What number do you want to change to the max number? \n");
                scanf("%d", &maxNumber);
            }
            printf("Returning back to the main menu. \n");
            firstChoice = 0;// giving the criteria to go back to the main menu
        }
    }
    printf("You have quit the game. We hope you had fun. Goodbye! \n");
    return 0;
}