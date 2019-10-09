//
// Created by C22Bryson.Fraelich on 10/1/2019.
//

#include <stdio.h>
#include "lab20functs.h"

int main() {
    double minF, maxF, stepF;

    do {

        minF = getInput("Minimum Farenheit temperature: ", -459.67, 10706.0);
        maxF = getInput("Maximum Farenheit temperature: ", minF, 10706.0);
        stepF = getInput("What step size: ", 0, (maxF - minF)/2);
        printTable(minF, maxF, stepF);

    } while (again() == true);
    return 0;
}