/** lab16main.c
* ===========================================================
* Name: Bryson Fraelilch, 21 Sep 2019
* Section: T1A
* Project: Lab16
* Purpose:
* ===========================================================
*/
#include "lab16functs.h"


int main(void) {
    double resVals[NUM_RES];
    double circVolt = 12;
    double vDrop[NUM_RES];
    double currentVal;
    int userNum;

    // Exercise 1
    captureOhms(resVals);
    calculateCurrent(circVolt, resVals, &currentVal);
    voltageDrop(vDrop, resVals, currentVal);
    printDrop(vDrop);

    // Exercise 2
    printf("Survey response scale: 10 - Outstanding, 8-9 - Excellent, 6-7 - Good, 5 - Average,\n");
    printf("3-4 - Below Average, 1-2 - Awful, 0 - Horrible.\n");
    printf("Enter an integer value from 0-10 corresponding to your opinion of Cookies 'n Cream ice cream:\n");
    scanf("%d", &userNum);
    switch (userNum) {
        case 0:
            printf("Horrible.\n");
            break;
        case 1:
        case 2:
            printf("Awful.\n");
            break;
        case 3:
        case 4:
            printf("Below Average.\n");
            break;
        case 5:
            printf("Average.\n");
            break;
        case 6:
        case 7:
            printf("Good.\n");
            break;
        case 8:
        case 9:
            printf("Excellent.\n");
            break;
        case 10:
            printf("Outstanding.\n");
            break;
        default:
            printf("You did not enter a value between 0 and 10.\n");
            break;
    }

    // Exercise 3
    char userChar;
    int y;
    int z;

    printf("Enter a character denoting the requested operation:\n");
    scanf("%c", &userChar);
    printf("Enter two integer values:\n");
    scanf("%d%d", &y, &z);
    printf("%d", performOperation(userChar, y, z));

    // Exercise 4
    int myArray[5];
    int arraySize = 5;
    int minVal;
    int maxVal;

    getMinMax(myArray, arraySize, &minVal, &maxVal);
    printf("minimum: %d and maximum: %d\n", minVal, maxVal);

    return 0;
}