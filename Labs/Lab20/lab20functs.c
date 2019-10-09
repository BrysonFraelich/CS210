//
// Created by C22Bryson.Fraelich on 10/1/2019.
//

#include "lab20functs.h"

double fToC(double degF) {
    double degC;

    degC = (degF - 32) * (5.0 / 9);

    return degC;
}

double cToK(double degC) {
    double degK;

    degK = degC + 273.15;

    return degK;
}


void printTable(double degFlow, double degFhigh, double degFstep){
    double degC;
    double degK;

    printf("|-----------------------------|\n");
    printf("|                             |\n");
    printf("|   Temperature Conversions   |\n");
    printf("|                             |\n");
    printf("|-----------------------------|\n");
    printf("|Farenheit| Celsius | Kelvin  |\n");
    printf("|-----------------------------|\n");
    while(degFlow < degFhigh){
        degC = fToC(degFlow);
        degK = cToK(degC);

        printf("|%9.2lf|%9.2lf|%9.2lf|\n", degFlow, degC, degK);
        degFlow = degFlow + degFstep;
    }

    degC = fToC(degFhigh);
    degK = cToK(degC);

    printf("|%9.2lf|%9.2lf|%9.2lf|\n", degFhigh, degC, degK);
    printf("|-----------------------------|\n");

}

double getInput(char title[], double min, double max) {
    double userVal;

    printf("%s", title);
    scanf("%lf", &userVal);
    while(userVal <= min && userVal >= max){
        printf("Your input is outside of the range %lf to %lf.\nPlease re-enter.\n", min, max);
        scanf("%lf", &userVal);
    }

    return userVal;
}

bool again() {
    char userVal;

    printf("Would you like to do this again?\n");
    scanf(" %c", &userVal);
    if (strcmp(&userVal, "n") == 0) {
        return false;
    } else {
        return true;
    }

}
