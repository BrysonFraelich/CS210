/** lab14functs.c
* ===========================================================
* Name: Bryson Fraelich, 17 Sep 19
* Section: T1/2A
* Project: Labs
* Purpose:
* ===========================================================
*/

#include "lab15functs.h"

int findMaxIndex(int myArray[][DATACOLS], int column, int arraySize) {
    int maxVal = -999;
    int maxValIndex = 0;
    int i;

    for (i = 0; i < arraySize; i++) {
        if (myArray[i][column] > maxVal) {
            maxVal = myArray[i][column];
            maxValIndex = i;
        }
    }

    return maxValIndex;
}

int numPlayerOverX(int myArray[][DATACOLS], int column, int threshold, int arraySize) {
    int numPlayers = 0;
    int i;

    for (i = 0; i < arraySize; ++i) {
        if (myArray[i][column] > threshold) {
            numPlayers = numPlayers + 1;
        }
    }

    return numPlayers;
}

int getMaxYardsPerCarryIndex(int myArray[][DATACOLS], int threshold, int arraySize) {
    int player = 0;
    int i;
    double max = 0.0;
    double yardsPerCarry;

    for (i = 0; i < arraySize; i++) {
        if (myArray[i][0] > threshold) {
            yardsPerCarry = (double)myArray[i][1] / myArray[i][0];
            if (yardsPerCarry > max) {
                max = yardsPerCarry;
                player = i;
            }
        }
    }

    return player;
}

double getMaxYardsPerCarryValue(int myArray[][DATACOLS], int player) {
    double yardsPCValue;

    yardsPCValue = (double)myArray[player][1] / myArray[player][0];

    return yardsPCValue;
}




