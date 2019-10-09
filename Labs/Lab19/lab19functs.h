//
// Created by C22Bryson.Fraelich on 9/27/2019.
//
#include <stdio.h>
#include <string.h>

#define MAX_STR_LEN 81

#ifndef A2_LAB19FUNCTS_H
#define A2_LAB19FUNCTS_H

void replStr(char str[], char aChar, char bChar);
void replMultiChar(char str[], char searchChars[], char rChar);
int findLocations(char str[], int locations[], char searchChar);
int countSeqStr(char str[], char searchStr[]);

#endif //A2_LAB19FUNCTS_H
