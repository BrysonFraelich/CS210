/** lab14functs.c
* ===========================================================
* Name: Bryson Fraelich, 17 Sep 19
* Section: T1/2A
* Project: Labs
* Purpose:
* ===========================================================
*/

int findMaxIndex(int myArray[], int arraySize) {
    int maxVal = 0;
    int i;

    for (i = 0; i < arraySize; i++) {
        if (myArray[i] > myArray[maxVal]) {
            maxVal = i;
        }
    }

    return maxVal;
}

int numPlayerOverX(int myArray[], int threshold, int arraySize) {
    int numPlayers = 0;
    int i;

    for (i = 0; i < arraySize; ++i) {
        if (myArray[i] > threshold) {
            numPlayers = numPlayers + 1;
        }
    }

    return numPlayers;
}

int getMaxYardsPerCarryIndex(int yards[], int attempts[], int threshold, int arraySize) {
    int player = 0;
    int i;
    double max = 0.0;
    double yardsPerCarry;

    for (i = 0; i < arraySize; i++) {
        if (attempts[i] > threshold) {
            yardsPerCarry = (double)yards[i] / attempts[i];
            if (yardsPerCarry > max) {
                max = yardsPerCarry;
                player = i;
            }
        }
    }

    return player;
}




