/** lab15functs.h
* ===========================================================
* Name: Bryson Fraelich, 19 Sep 19
* Section: T1/2A
* Project: Labs
* Purpose:
* ===========================================================
*/
#include <stdio.h>
#include <string.h>
#include "lab15fbFuncts.h"

#ifndef PEX1_LAB15_H
#define PEX1_LAB15_H

int findMaxIndex(int myArray[][DATACOLS], int column, int arraySize);
int numPlayerOverX(int myArray[][DATACOLS], int column, int threshold, int arraySize);
int getMaxYardsPerCarryIndex(int myArray[][DATACOLS], int threshold, int arraySize);
double getMaxYardsPerCarryValue(int myArray[][DATACOLS], int player);

#endif //PEX1_LAB15_H
