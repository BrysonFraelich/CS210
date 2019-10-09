/** lab09functs.c
* ===========================================================
* Name: Bryson Fraelilch, 03 Sep 2019
* Section: T1A
* Project: Lab09
* Purpose:
* ===========================================================
*/
#include <stdio.h>
#include <math.h>

double volumeCylinder(double userR, double userH){
    double userV;
    userV = M_PI * pow(userR, 2) * userH;

    return userV;
}

double volumeBox(double boxWidth, double boxHeight, double boxDepth) {
    double bVolume;
    bVolume = boxWidth * boxHeight * boxDepth;

    return bVolume;
}

double degToRad(int userDeg) {
    double radians;
    radians = userDeg * (M_PI / 180.0);

    return radians;
}