/** lab23main.c
* ===========================================================
* Name: CS210
* Section: n/a
* Project: Lab 23
* Purpose: Main file for lab 23
* ===========================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include "lab23functs.h"

int main() {

    printf("Reading number of records in the data file.\n");
    //  int numRecs = getNumRecs("../Labs/Lab23/lab23Data.txt");
    int numRecs = getNumRecs("lab23Data.txt");
    printf("%d records in the data file.\n",numRecs);

    CadetInfoStructType* cadetRecPtr = malloc(numRecs * sizeof(CadetInfoStructType));
//    //  getDataText(cadetRecPtr,numRecs,"../Labs/Lab23/lab23Data.txt");
    getDataText(cadetRecPtr,numRecs,"lab23Data.txt");
// //    for(int i=0; i<numRecs;i++)
// //    {
// //        printf("Cadet %d: \n", i+1);
// //        printCadetInfo(cadetRecPtr[i]);
// //}
    printf("The first cadet is:\n");
    printCadetInfo(cadetRecPtr[0]);
    printf("The last cadet is:\n");
    printCadetInfo(cadetRecPtr[numRecs-1]);

    free(cadetRecPtr);
    return 0;
}
