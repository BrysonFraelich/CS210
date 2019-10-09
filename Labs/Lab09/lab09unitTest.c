/** lab09unitTest.c
* ===========================================================
* Name: Bryson Fraelilch, 03 Sep 2019
* Section: T1A
* Project: Lab09
* Purpose:
* ===========================================================
*/

#include <stdio.h>
#include <math.h>
#include <assert.h>
#include "lab09functs.h"

int main (void){

    printf("Testing started\n");

    assert(volumeCylinder(0, 0) == 0);
    assert(volumeCylinder(1, 0) == 0);
    assert(volumeCylinder(0,1 ) == 0);

    assert(volumeBox(0,0, 0) == 0);
    assert(volumeBox(1,0, 0) == 0);
    assert(volumeBox(0,1, 0) == 0);

    assert(degToRad(0) == 0);
    assert(degToRad(90) == M_PI / 2);
    assert(degToRad(180) == M_PI);

    printf("Testing complete");
    return 0;
}