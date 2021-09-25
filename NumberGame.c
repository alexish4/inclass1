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
    char quit; //the choice to quit
    while(firstChoice != 3)
    {
        printf("Hello welcome to the Number Game.\n");
        printf("Here are your options:\n");
        printf("Press 1 to play a game\n");
        printf("Press 2 to change the max number\n");
        printf("Press 3 to quit\n");
        scanf("%d", &firstChoice);
        int secondChoice = 0;

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
                    printf("Enter q if you would like to quit, enter another n if you want to continue: ");
                    scanf("%s", quit);
                    if(quit == "q") //player chooses to quit
                    {
                        printf("You will be directed to the main menu.\n");
                        number = 0;
                        firstChoice = 0;
                    }
                    else //player chooses to keep playing
                    {
                        number = rand() & maxNumber;
                        printf("Pick a number between 1 and %d: \n", maxNumber);
                        scanf("%d", &secondChoice);
                        while(secondChoice != number)
                        {
                            if(secondChoice > number)
                            {
                                printf("Guess again, the number is lower than the one you entered: \n");
                                scanf("%d", &secondChoice);
                            }
                            else if(secondChoice < number)
                            {
                                printf("Guess again, the number is higher than the one you entered: \n");
                                scanf("%d", &secondChoice);
                            }
                            else if(secondChoice > maxNumber)
                            {
                                printf("Cannot enter number bigger than the max value please enter again: \n");
                                scanf("%d", &secondChoice);
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
            printf("Returning back to the main menu. \n");
            firstChoice = 0;// giving the criteria to go back to the main menu
        }
    }
    printf("You have quit the game. We hope you had fun. Goodbye! \n");
    return 0;
}