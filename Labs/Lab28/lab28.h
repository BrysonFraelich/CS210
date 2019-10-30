/** lab28.h
* ===========================================================
* Name: BRYSON, FRAELICH 24 OCT 19
* Section: T1A
* Project: Programming Assessment 3 Practice
* Documentation: DOC STATEMENT
* ===========================================================
 **/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <errno.h>

#ifndef MYEXE_LAB28_H
#define MYEXE_LAB28_H

typedef struct EmployeeBD_struct {
    char firstName[15];
    char lastName[15];
    char birthMonth[15];
    char birthDate[3];
} EmployeeBD;

int numVowels(char *my_array);

char *sortString(char *char_array);

int readFile(char *filename, EmployeeBD *ptr, int numRecords);

int IDEmpBDMonth(EmployeeBD *ptr, int numRecords, int month);

#endif //MYEXE_LAB28_H
