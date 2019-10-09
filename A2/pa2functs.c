//
// Created by C22Bryson.Fraelich on 9/25/2019.
//

#include "pa2functs.h"

int guessNum(int userVal){
    int genVal;
    genVal = (rand() % 10) + 1;

    while(userVal != genVal){
        genVal = (rand() % 10) + 1;
    }

    return genVal;
}

double generateCalculate(int numVals, double userVals[], char operationVal){
    int i;
    double returnVal = 0;
    double sumVal = 0;
    double aveVal = 0;
    double range = 0;
    double max = -999;
    double min = 999;

    switch(operationVal){
        case 'S':
            for(i = 0; i < numVals; ++i){
                sumVal = sumVal + userVals[i];
            }
            break;
        case 'A':
            for(i = 0; i < numVals; ++i){
                sumVal = sumVal + userVals[i];
            }
            aveVal = sumVal / numVals;
            break;
        case 'R':
            for(i = 0; i < numVals; ++i){
                if (userVals[i] > max){
                    max = userVals[i];
                }
                if (userVals[i] < min){
                    min = userVals[i];
                }
            }
            range = max - min;
            break;
        default:
            returnVal = -1;
    }

    if (strcmp(&operationVal, "S") == 0){
        returnVal = sumVal;
    } else if (strcmp(&operationVal, "A") == 0){
        returnVal = aveVal;
    } else {
        returnVal = range;
    }

    return returnVal;
}

int perfectAI(char playerMove[]){
    int returnMove;

    if (strcmp(playerMove, "scissor") == 0){
        returnMove = 0;
    } else if(strcmp(playerMove, "rock") == 0){
        returnMove = 1;
    } else {
        returnMove = 2;
    }

    return returnMove;
}

int checkPerfect(int userNum){
    int perfectVal;
    int perfectNum = 0;
    int i;

    for (i = 1; i <= userNum; ++ i){
        if (userNum % i == 0){
            perfectNum = perfectNum + i;
        }
    }

    if(perfectNum == userNum){
        perfectVal = 1;
    } else {
        perfectVal = 0;
    }

    return perfectVal;
}

int perfectNumbers(){

    return;
}

void fill2D(int array[SIZE][SIZE]){
    int i;

    for(i = 0; i < SIZE; ++i){
        array[i][SIZE] = (rand() % 1000) + 1;
    }
    for(i = 0; i < SIZE; ++i){
        array[SIZE][i] = (rand() % 1000) + 1;
    }

}

int count2D(int array[SIZE][SIZE]){
    int i;
    int j;
    int x;
    int y;
    int totNum = 0;

    for(i = 0; i < SIZE; ++i){
        for(j = 0; j < SIZE; ++ j){
            x = (array[i][j]) % 3;
            y = (array[i][j]) % 5;
            if(x == 0 && y == 0){
                totNum = totNum + 1;
            }
        }
    }

    return totNum;
}