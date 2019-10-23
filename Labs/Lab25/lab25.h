//
// Created by C22Bryson.Fraelich on 10/21/2019.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct point_struct {
    int x;
    int y;
} Point;

typedef struct USAFBaseData_struct {
    char baseName[50];
    int bldgsOwned;
    int structsOwned;
    char city[50];
    char state[30];
} USAFBaseData;

#ifndef PEX2_LAB25_H
#define PEX2_LAB25_H

void getPoints(Point *one, Point *two);

double getDistance(Point one, Point two);

int getNumLines(char filename[]);

void readFile(char filename[], USAFBaseData **base, int numBases);

void printData(USAFBaseData **bases, int numLines);
#endif //PEX2_LAB25_H
