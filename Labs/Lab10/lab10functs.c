/** lab10functs.c
* ===========================================================
* Name: Bryson Fraelich, 05 Sep 19
* Section: T1/2A
* Project: Labs
* Purpose:
* ===========================================================
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include "lab10functs.h"

bool isFirstHalfAlpha (char userChar){
    bool charValue;

    if (islower(userChar)) {
        if (userChar >= 97 && userChar <= 109) {
            charValue = true;
        } else {
            charValue = false;
        }
    }

    if (isupper(userChar)) {
        if (userChar >= 65 && userChar <= 77) {
            charValue = true;
        } else {
            charValue = false;
        }
    }

    return charValue;
}

int typeOfChar (char userChar2) {
    int charValue;
    userChar2 = tolower(userChar2);

    if (isalpha(userChar2)) {
        switch (userChar2) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                charValue = 0;
            break;

            default:
                charValue = 1;
        }
    } else {
        charValue = -1;
    }

    return charValue;
}

bool isMagicChar(char userChar3) {
    bool magicValue;

    magicValue = (userChar3 == MAGIC_CHAR) ? true : false;

    return magicValue;
}