//
// Created by C22Bryson.Fraelich on 9/25/2019.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>

#define SIZE 100

#ifndef LABS_PA2FUNCTS_H
#define LABS_PA2FUNCTS_H

int guessNum(int userVal);
double generateCalculate(int numVals, double userVals[], char operationVal);
int perfectAI(char playerMove[]);
int checkPerfect(int userNum);
int perfectNumbers();
void fill2D(int array[SIZE][SIZE]);
int count2D(int array[SIZE][SIZE]);

#endif //LABS_PA2FUNCTS_H
