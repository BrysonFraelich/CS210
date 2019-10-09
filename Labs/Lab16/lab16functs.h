/** lab16functs.h
* ===========================================================
* Name: Bryson Fraelilch, 21 Sep 2019
* Section: T1A
* Project: Lab16
* Purpose:
* ===========================================================
*/
#include <stdio.h>

#ifndef LABS_LAB16FUNCTS_H
#define LABS_LAB16FUNCTS_H

#define NUM_RES 5

// Exercise 1
void captureOhms(double resVals[]);
void calculateCurrent(double voltage, double resVals[], double *currentVal);
void voltageDrop(double vDrop[], double resVals[], double current);
void printDrop(double vDrop[]);

// Exercise 3
int performOperation(char x, int y, int z);

// Exercise 4
void getMinMax(int array[], int arraySize, int *min, int *max);

#endif //LABS_LAB09FUNCTS_H
