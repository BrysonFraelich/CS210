/** lab16functs.c
* ===========================================================
* Name: Bryson Fraelilch, 21 Sep 2019
* Section: T1A
* Project: Lab16
* Purpose:
* ===========================================================
*/
#include "lab16functs.h"

void captureOhms(double resVals[]){
    int i;

    for (i = 0; i < NUM_RES; ++i){
        scanf("%lf", &(resVals[i]));
    }
}

void calculateCurrent(double voltage, double resVals[], double *currentVal){
    int i;
    double totRes;
    totRes = 0;

    for (i = 0; i < NUM_RES; ++i){
        totRes = totRes + resVals[i];
    }

    *currentVal = voltage / totRes;
}

void voltageDrop(double vDrop[], double resVals[], double current){
    int i;

    // V = I / R
    for (i = 0; i < NUM_RES; ++i){
        vDrop[i] = current * resVals[i];
    }
}

void printDrop(double vDrop[]){
    int i;

    for(i = 0; i < NUM_RES; ++i){
        printf("%d) %0.1lf V\n", i + 1, vDrop[i]);
    }
}

int performOperation(char x, int y, int z){
    int value = 0;

    switch (x){
        case '+':
            value = y + z;
            break;
        case '-':
            value = y - z;
            break;
        case '*':
            value = y * z;
            break;
        case '/':
            value = y / z;
            break;
    }

    return value;
}

void getMinMax(int array[], int arraySize, int *min, int *max){
    int i;
    *max = -999;
    *min = 999;

    for(i = 0; i < arraySize; ++i){
        if(array[i] > *max){
            *max = array[i];
        }
    }
    for(i = 0; i < arraySize; ++i){
        if(array[i] < *min){
            *min = array[i];
        }
    }
}
