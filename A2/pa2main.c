//
// Created by C22Bryson.Fraelich on 9/25/2019.
//

#include "pa2functs.h"

int main(void){
    srand((int)time(0));

    // Problem 1
    int userNum;
    int genNum;

    printf("Enter a number between 1 and 10.\n");
    scanf("%d", &userNum);
    genNum = guessNum(userNum);
    printf("Well guessed! The number was %d.\n", genNum);

    // Problem 2
    int numValsInt;
    double userVals[10];
    char operationVal;
    double genVal2;
    int i;

    printf("How many numbers will the user enter (max of 10)?\n");
    scanf("%d", &numValsInt);
    for(i = 0; i < numValsInt; ++i){
        printf("Please enter a double value:\n");
        scanf("%lf", &userVals[i]);
    }
    printf("What operation would you like to perform on the randomly generated numbers (enter the first letter)?\n");
    printf("Sum, Average, or Range.\n");
    scanf("%c", &operationVal);
    genVal2 = generateCalculate(numValsInt, userVals, operationVal);
    printf("The calculation returned %.2lf.\n", genVal2);

    // Problem 3
    char playerMove[7];
    int AIVal;
    printf("What is your Rock-Paper-Scissors Move?\n");
    scanf("%s", playerMove);
    AIVal = perfectAI(playerMove);
    if(AIVal == 0){
        printf("Rock!\n");
    } else if (AIVal == 1){
        printf("Paper!\n");
    } else {
        printf("scissor!\n");
    }
    printf("The perfectAI has won.\n");

    // Problem 4
    int num1;
    int num2;
    printf("Enter two positive integer values.\n");
    scanf("%d%d", &num1, &num2);


    // Problem 5
    int myArray[SIZE][SIZE];
    fill2D(myArray);
    printf("The number of values in the array divisible by both 3 and 5 is %d", count2D(myArray));

    return 0;
}