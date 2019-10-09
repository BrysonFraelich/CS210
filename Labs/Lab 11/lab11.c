/** lab11.c
* ===========================================================
* Name: Bryson Fraelich, 08 Sep 19
* Section: T1/2A
* Project: Labs
* Purpose:
* ===========================================================
*/

#include <stdio.h>
#include "lab11.h"

int main(void) {
    int userNum;
    int userNum2;
    int userNum3;

    // Exercise 1 - Factorial
    printf("Enter an integer value:\n");
    scanf("%d", &userNum);
    printf("The factorial of %d is computed %d.\n", userNum, numFactorial(userNum));

    // Exercise 2 - Prime Number
    printf("Enter an integer value:\n");
    scanf(" %d", &userNum2);
    if (isPrime(userNum2) != 0) {
        printf("%d is a prime number.\n", userNum2);
    } else {
        printf("%d is not a prime number.\n", userNum2);
    }

    // Exercise 3 - Floyd's Triangle
    printf("Enter an integer value:\n");
    scanf(" %d", &userNum3);
    floydsTriangle(userNum3);

    return 0;
}

int numFactorial(int userNum) {
    int factVal = 1;
    int i;

    for (i = 1; i <= userNum; ++i) {
        factVal = i * factVal;
    }

    return factVal;
}

int isPrime(int userNum2) {
    int primeVal;

    if ((userNum2 % 2) != 0) {
        primeVal = 1;
    } else {
        primeVal = 0;
    }

    return primeVal;
}

void floydsTriangle (int userNum3){
    int i;
    int j;
    int check;

    for (i = 1; i <= userNum3; ++i) {
        if ((i % 2) == 0) {
            check = 0;
        } else {
            check = 1;
        }

        for (j = 1; j <= i; j++) {
            printf("%d", check);

            if (check == 1) {
                check = 0;
            } else {
                check = 1;
            }
        }
        printf("\n");

    }

    return;
}