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
    char foodName[4][10] = {"salad", "soup", "sandwich", "pizza"};
    double food[4] = {salad, soup, sandwich, pizza}; /*Not really using the array as I should but allows me to
                                                     visually see the food items as numbers */ 

    double tax = 0.06;
    double tip;
    printf("How much would you like to tip? ");
    scanf("%lf", &tip);
    double tipValue = tip / 100.0; //converting tip percentage to its decimal value

    time_t t;
    srand((unsigned) time(&t));

    //rand() % 4;
    double total = food[rand() % 4] + (food[rand() % 4] * tipValue) + (food[rand() % 4] * tax);
    printf("Your bill for the %s is %lf, so in total including the tax and tip, you owe %lf\n", 
                                            &foodName[rand() % 4][10], food[rand() % 4], total);

    
    return 0;
}