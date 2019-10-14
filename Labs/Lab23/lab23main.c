//
// Created by C22Bryson.Fraelich on 10/11/2019.
//

#include "lab23functs.h"

int main(){

    // Exercise 1
    printf("Reading number of records in the data file.\n");
    int numRecs = getNumRecs("lab23Data.txt");
    printf("%d records in the data file.\n", numRecs);

    // Exercise 2
    CadetInfoStructType *cadetRecords;
    cadetRecords = (CadetInfoStructType*) malloc(sizeof(CadetInfoStructType));
    getDataText(cadetRecords, numRecs, "lab23Data.txt");

    printf("The first cadet is:\n");
    printCadetInfo(cadetRecords[0]);
    printf("The last cadet is:\n");
    printCadetInfo(cadetRecords[numRecs - 1]);
    free(cadetRecords);

    return 0;
}