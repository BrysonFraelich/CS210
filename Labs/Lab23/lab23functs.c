/** lab23functs.c
* ===========================================================
* Name: CS210
* Section: n/a
* Project: Lab 23
* Purpose: Implementation file for lab23
* ===========================================================
*/
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include "lab23functs.h"

/** ----------------------------------------------------------
 * Reads the number of records from the data file
 * @param dataFile is a string that indicates the path to and filename of the datafile
 * @return number of records in the file or -1 on error
 * ----------------------------------------------------------
 */
int getNumRecs(char dataFile[]) {
    // Open an input file for reading
    FILE *in = fopen(dataFile, "r");
    if (in == NULL) {
        printf("Error opening data file: %s.\n", strerror(errno));
        exit(1);
    }

    int retVal = 0;
    fscanf(in,"%d",&retVal);
    return retVal;
}
/** ----------------------------------------------------------
 * Reads CadetInfoStructType  records from a text file
 * @param cadetRecords is the array of cadet records
 * @param numRecs is the number of records in the file
 * @param dataFile is a string that indicates the path to and filename of the datafile
 * ----------------------------------------------------------
 */
void getDataText(CadetInfoStructType cadetRecords[], int numRecs, char dataFile[]) {

    // Open an input file for reading
    FILE *in = fopen(dataFile, "r");
    if (in == NULL) {
        printf("Error opening data file: %s.\n", strerror(errno));
        exit(1);
    }

    char firstName[30];
    char lastName[45];
    int numRead = 0;

    fgets(lastName,80,in); // skip over the first line
    while (numRead < numRecs && !feof(in)) {
        fscanf(in, "%s %s %d %d %d", lastName, firstName, &cadetRecords[numRead].age,
               &cadetRecords[numRead].squad, &cadetRecords[numRead].year);
        strcat(firstName, " ");
        strcpy(cadetRecords[numRead].name, strcat(firstName, lastName));
        numRead++;
    }
    fclose(in);
}

/** ----------------------------------------------------------
 * Prints a CadetInfoStructType variable to the console
 * @param cadetRecord is the cadet info struct to be printed
 */
void printCadetInfo(CadetInfoStructType cadetRecord) {
    printf("Cadet name = %s\n", cadetRecord.name);
    printf("Cadet age = %d\n", cadetRecord.age);
    printf("Cadet squad = %d\n", cadetRecord.squad);
    printf("Cadet year = %d\n", cadetRecord.year);
}