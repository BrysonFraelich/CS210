//
// Created by C22Bryson.Fraelich on 10/11/2019.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifndef LABS_LAB23FUNCTS_H
#define LABS_LAB23FUNCTS_H

typedef struct CadetInfoStruct {
    char name[50];
    int age;
    int squad;
    int year;
} CadetInfoStructType;

/** ----------------------------------------------------------
 * Reads the number of records from the data file
 * @param dataFile is a string that indicates the path to and filename of the datafile
 * @return number of records in the file or -1 on error
 * ----------------------------------------------------------
 */
int getNumRecs(char fileName[]);

/** ----------------------------------------------------------
 * Reads CadetInfoStructType  records from a text file
 * @param cadetRecords is the array of cadet records
 * @param numRecs is the number of records in the file
 * @param dataFile is a string that indicates the path to and filename of the datafile
 * ----------------------------------------------------------
 */
 void getDataText(CadetInfoStructType cadetRecords[], int numRecs, char fileName[]);

/** ----------------------------------------------------------
* printCadetInfo() is used to print a MyCadetInfo typed variable
* to the console
* @param cadetRecord is the cadet info struct to be printed
* @return n/a
*/
void printCadetInfo(CadetInfoStructType cadetRecord);

#endif //LABS_LAB23FUNCTS_H
