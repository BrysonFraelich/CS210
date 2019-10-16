#ifndef MYEXE_LAB23FUNCTS_H
#define MYEXE_LAB23FUNCTS_H

typedef struct CadetInfoStruct {
    char name[50];
    int age;
    int squad;
    int year;
} CadetInfoStructType;


int getNumRecs(char dataFile[]);

void getDataText(CadetInfoStructType cadetRecords[], int numRecs, char dataFile[]);

void printCadetInfo(CadetInfoStructType cadetRecord);

#endif //MYEXE_LAB23FUNCTS_H
