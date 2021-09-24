/* Restaurant Bill Comments
1. Assign food items to numbers
2. Setup random generator
3. Put into argument for method
4. Calculate tip and tax

*/

/*

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) //Restaurant Bill Function
{
    double salad = 9.95;
    double soup = 4.55;
    double sandwich = 13.25;
    double pizza = 22.35;
    char foodName[4][10] = {"salad", "soup", "sandwich", "pizza"}; //creating a string array that lines up with array of price
    double food[4] = {salad, soup, sandwich, pizza}; //storing the price of the food

    double tax = 0.06;
    double tip;
    printf("How much would you like to tip? ");
    scanf("%lf", &tip); //Store the tip percentage that they will be tipping
    double tipValue = tip / 100.0; //converting tip percentage to its decimal value

    time_t t;
    srand((unsigned) time(&t));

    int number = rand() % 4;
    double total = food[number] + (food[number] * tipValue) + (food[number] * tax);
    printf("Your bill for the %s is %lf, so in total including the tax and tip, you owe %lf\n", 
                                            &foodName[number][10], food[number], total);

    
    return 0;
}