/** lab10main.c
* ===========================================================
* Name: Bryson Fraelich, 05 Sep 19
* Section: T1/2A
* Project: Labs
* Purpose:
* ===========================================================
*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "lab10functs.h"

int main(void) {
    char char1;
    char char2;
    char char3;

    // Exercise 1.A
    printf("Enter a single character to pass to isFirstHalfAlpha():\n");
    scanf("%c", &char1);
    if (isFirstHalfAlpha(char1) == true) {
        printf("A %c is in the first half of the alphabet.\n", char1);
    } else {
        printf("A %c is NOT in the first half of the alphabet.\n", char1);
    }

    // Exercise 1.B
    printf("Enter a single character to pass to typeOfChar():\n");
    scanf(" %c", &char2);
    if (typeOfChar(char2) == 0) {
        printf("A %c is a vowel.\n", char2);
    } else if (typeOfChar(char2) == 1) {
        printf("A %c is a consonant.\n", char2);
    } else {
        printf("A %c is neither a vowel nor a consonant.\n", char2);
    }

    // Exercise 1.C
    printf("Enter a single character to pass to isMagicChar():\n");
    scanf(" %c", &char3);
     if (isMagicChar(char3) == true) {
        printf("A %c is the magic character @.\n", char3);
    } else {
        printf("A %c is NOT the magic character @.\n", char3);
    }

    return 0;
}
