//
// Created by C22Bryson.Fraelich on 10/11/2019.
//

#include "lab23functs.h"

int getNumRecs(char fileName[]){
    FILE* in = fopen("C:\\Users\\C22Bryson.Fraelich\\CLionProjects\\CS210\\Labs\\Lab23\\lab23Data.txt", "r");
    // FILE* in = fopen(fileName, "r");
    if(in == NULL){
        printf("Error Opening File in getNumRecs");
    }
    int numRecs;
    fscanf(in, " %d", &numRecs);
    fclose(in);

    return numRecs;
}

void getDataText(CadetInfoStructType cadetRecords[], int numRecs, char filename[]){
    FILE* in = fopen("C:\\Users\\C22Bryson.Fraelich\\CLionProjects\\CS210\\Labs\\Lab23\\lab23Data.txt", "r");
    // FILE* in = fopen(filename, "r");
    if(in == NULL){
        printf("Error Opening File in getDatatext");
    }
    int i = 0;
    char firstName[30];
    char lastName[45];

    fseek(in, sizeof(int) + 1, SEEK_SET);

    while (i < numRecs && !feof(in)) {
        fscanf(in, " %s %s %d %d %d", lastName, firstName, &cadetRecords[i].age,
               &cadetRecords[i].squad, &cadetRecords[i].year);
        strcat(firstName, " ");
        strcpy(cadetRecords[i].name, strcat(firstName, lastName));
        i++;
    }
    fclose(in);
}

void printCadetInfo(CadetInfoStructType cadetRecord) {
    printf("Cadet name = %s\n", cadetRecord.name);
    printf("Cadet age = %d\n", cadetRecord.age);
    printf("Cadet squad = %d\n", cadetRecord.squad);
    printf("Cadet year = %d\n", cadetRecord.year);
}