/** lab14main.c
* ===========================================================
* Name: Bryson Fraelich, 17 Sep 19
* Section: T1/2A
* Project: Labs
* Purpose:
* ===========================================================
*/

#include "lab15functs.h"
#include "lab15fbFuncts.h"

int main(void) {
    int array[MAXPLAYERS][DATACOLS];

    int numPlayers = readData(array);
    printf("%d players data read.\n", numPlayers);

    printf("The player ID 0 is %s and he scored %d touchdowns in 2017.\n", getPlayerName(0), array[0][2]);

    printf("The player ID 122 is %s and he rushed for %d yards in 2017.\n", getPlayerName(122), array[122][1]);

    int maxYards = findMaxIndex(array, 1, numPlayers);
    printf("The player with the most yards in 2017 is %s and he had %d.\n", getPlayerName(maxYards), array[maxYards][1]);

    int maxTDs = findMaxIndex(array, 2, numPlayers);
    printf("The player with the most TDs in 2017 is %s and he had %d.\n", getPlayerName(maxTDs), array[maxTDs][2]);

    int playersOver10 = numPlayerOverX(array, 2, 10, numPlayers);
    printf("The number of players with more than 10 TDs in 2017 is %d.\n", playersOver10);

    int playersOverYrds = numPlayerOverX(array, 1, 1000, numPlayers);
    printf("The number of players with more than 1000 yards in 2017 is %d.\n", playersOverYrds);

    int playerOverAtt = numPlayerOverX(array, 0, 100, numPlayers);
    printf("The number of players with more than 100 attempts in 2017 is %d.\n", playerOverAtt);

    int player = getMaxYardsPerCarryIndex(array, 100, numPlayers);
    double yardsPerCarry = getMaxYardsPerCarryValue(array, player);
    printf("The player with the most yards per carry (>100 attempts) is %s and he had %.1lf.\n", getPlayerName(player), yardsPerCarry);

    player = getMaxYardsPerCarryIndex(array, 50, numPlayers);
    yardsPerCarry = getMaxYardsPerCarryValue(array, player);
    printf("The player with the most yards per carry (>50 attempts) is %s and he had %.1lf.\n", getPlayerName(player), yardsPerCarry);

    player = getMaxYardsPerCarryIndex(array, 10, numPlayers);
    yardsPerCarry = getMaxYardsPerCarryValue(array, player);
    printf("The player with the most yards per carry (>10 attempts) is %s and he had %.1lf.\n", getPlayerName(player), yardsPerCarry);

    return 0;
}