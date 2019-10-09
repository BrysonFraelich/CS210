/** lab12.c
* ===========================================================
* Name: Bryson Fraelich, 08 Sep 19
* Section: T1/2A
* Project: Labs
* Purpose:
* ===========================================================
*/

#include <stdio.h>
#include "lab12.h"

int main(void) {
    int userNum1;
    int userNum2;
    int userNum3;
    int userNum4;
    int userNum5;

    // Exercise 1
    printf("Enter an integer:\n");
    scanf("%d", &userNum1);
    int armValue = isArmstrong(userNum1);
    if (armValue == 1) {
        printf("%d is an Armstrong number.\n", userNum1);
    } else {
        printf("%d is not an Armstrong number.\n", userNum1);
    }

    // Exercise 2
    printf("Enter two integers:\n");
    scanf("%d", &userNum2);
    scanf("%d", &userNum3);
    int GCD = findGCD(userNum2, userNum3);
    printf("GCD = %d\n", GCD);

    // Exercise 3
    printf("Enter two integers:\n");
    scanf("%d", &userNum4);
    scanf("%d", &userNum5);
    printRange(userNum4, userNum5);

    return 0;
}

int isArmstrong(int int1){
    int int2 = int1;
    int int3 = int1;
    int value = 0;
    int totValue = 0;
    int i = 0;

    while (int2 != 0){
        int2 = int2 / 10;
        ++i;
    }

    while (int3 > 0) {
        value = value + pow((int3 % 10), i);
        int3 = int3 / 10;
    }

    if (value == int1) {
        totValue = 1;
    } else {
        totValue = 0;
    }

    return totValue;
}

int findGCD(int int1, int int2){

    while (int1 != int2){
        if (int1 > int2){
            int1 = int1 - int2;
        } else {
            int2 = int2 - int1;
        }
    }

    return int1;
}

void printRange(int int1, int int2){
    int i;

    for (i = int1; i < int2 + 1; i++){
        printf("%d\n", i);
    }

//    while (int1 < int2)  {
//        printf("%d", int1);
//        int1 = int1 + 1;
//    }

    return;
}
