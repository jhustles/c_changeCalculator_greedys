#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void) // main script
{
    // variables here:
    float money;
    int cents;
    int coinCounter = 0;
    int runningTotal;
    int coins;


    // algorithm / program here:
    do
    {
        money = get_float("Change owed: \n");
    }
    while (money < 0);

    // convert to cents - whole
    cents = round(money * 100);
    // printf("%d\n", cents);

    runningTotal = cents;

    // insert loop / conditionals to figure out how much coins you need

    // condition 1) if runningTotal > 25, THEN cents / 25,
    // get the whole numbers = all the quarters you need
    // add whole numbers to coinCounter
    // runningTotal - (quarters * Ct)

    // condition 2) repeat same algoirthm until running total == 0
    do
    {
        if (runningTotal >= 25)
        {
            coins = runningTotal / 25;
            coinCounter += coins;
            runningTotal -= (coins * 25);
        }
        if (runningTotal >= 10)
        {
            coins = runningTotal / 10;
            coinCounter += coins;
            runningTotal -= (coins * 10);
        }
        if (runningTotal >= 5)
        {
            coins = runningTotal / 5;
            coinCounter += coins;
            runningTotal -= (coins * 5);
        }
        if (runningTotal >= 1)
        {
            coins = runningTotal / 1;
            coinCounter += coins;
            runningTotal -= (coins * 1);
        }
    }
    while (runningTotal > 1);

    printf("%i", coinCounter);
    printf("\n");

}
