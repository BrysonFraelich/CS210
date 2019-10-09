/** lab09main.c
* ===========================================================
* Name: Bryson Fraelilch, 03 Sep 2019
* Section: T1A
* Project: Lab09
* Purpose:
* ===========================================================
*/

#include <stdio.h>
#include <math.h>
#include "lab09functs.h"

int main (void){
    double radius;
    double height;
    double bWidth;
    double bHeight;
    double bDepth;
    int degrees;

    printf("Enter cylinder radius followed by height\n");
    scanf("%lf %lf", &radius, &height);
    printf("The volume is %lf\n", volumeCylinder(radius, height));

    printf("Enter box width followed by height followed by depth\n");
    scanf("%lf %lf %lf", &bWidth, &bHeight, &bDepth);
    printf("The volume is %lf\n", volumeBox(bWidth,bHeight, bDepth));

    printf("Enter degrees\n");
    scanf("%d", &degrees);
    printf("%d degrees is %lf radians", degrees, degToRad(degrees));

    return 0;
}