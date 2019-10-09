/** lab14main.c
* ===========================================================
* Name: Bryson Fraelich, 17 Sep 19
* Section: T1/2A
* Project: Labs
* Purpose:
* ===========================================================
*/

#include "lab14functs.h"
#include "lab14fbFuncts.h"

int main(void) {
    int attempts[MAXPLAYERS];
    int yards[MAXPLAYERS];
    int touchdowns[MAXPLAYERS];

    int numPlayers = readData(attempts, yards, touchdowns);
    printf("%d players data read.\n", numPlayers);

    printf("The player ID 0 is %s and he scored %d touchdowns in 2017.\n", getPlayerName(0), touchdowns[0]);

    printf("The player ID 122 is %s and he rushed for %d yards in 2017.\n", getPlayerName(122), yards[122]);

    int maxYards = findMaxIndex(yards, numPlayers);
    printf("The player with the most yards in 2017 is %s and he had %d.\n", getPlayerName(maxYards), yards[maxYards]);

    int maxTDs = findMaxIndex(touchdowns, numPlayers);
    printf("The player with the most TDs in 2017 is %s and he had %d.\n", getPlayerName(maxTDs), touchdowns[maxTDs]);

    int playersOver10 = numPlayerOverX(touchdowns, 10, numPlayers);
    printf("The number of players with more than 10 TDs in 2017 is %d.\n", playersOver10);

    int playersOverYrds = numPlayerOverX(yards, 1000, numPlayers);
    printf("The number of players with more than 1000 yards in 2017 is %d.\n", playersOverYrds);

    int playerOverAtt = numPlayerOverX(attempts, 100, numPlayers);
    printf("The number of players with more than 100 attempts in 2017 is %d.\n", playerOverAtt);

    int player = getMaxYardsPerCarryIndex(yards, attempts, 100, numPlayers);
    double yardsPerCarry = (double)yards[player] / attempts[player];
    printf("The player with the most yards per carry (>100 attempts) is %s and he had %.1lf.\n", getPlayerName(player), yardsPerCarry);

    player = getMaxYardsPerCarryIndex(yards, attempts, 50, numPlayers);
    yardsPerCarry = (double)yards[player] / attempts[player];
    printf("The player with the most yards per carry (>50 attempts) is %s and he had %.1lf.\n", getPlayerName(player), yardsPerCarry);

    player = getMaxYardsPerCarryIndex(yards, attempts, 10, numPlayers);
    yardsPerCarry = (double)yards[player] / attempts[player];
    printf("The player with the most yards per carry (>10 attempts) is %s and he had %.1lf.\n", getPlayerName(player), yardsPerCarry);

    return 0;
}