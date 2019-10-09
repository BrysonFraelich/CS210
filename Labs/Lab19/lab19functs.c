//
// Created by C22Bryson.Fraelich on 9/27/2019.
//

#include "lab19functs.h"

void replStr(char str[], char aChar, char bChar){
    int i;

    for(i = 0; i < strlen(str); ++i){
        if(str[i] == aChar){
            str[i] = bChar;
        }
    }
}

void replMultiChar(char str[], char searchChars[], char rChar){
    int i;
    int j;

    for(i = 0; i < strlen(str); ++i){
        for(j = 0; j < strlen(searchChars); ++j){
            if(str[i] == searchChars[j]){
                str[i] = rChar;
            }
        }
    }
}

int findLocations(char str[], int locations[], char searchChar){
    int i;
    int count= 0;

    for(i = 0; i < MAX_STR_LEN; ++i){
        if(str[i] == searchChar){
            locations[i] = i;
            ++count;
        }
    }

    return count;
}

int countSeqStr(char str[], char searchStr[]){
    int occurs = 0;
    char *ptr = strstr(str, searchStr);

    while(ptr != NULL){
        ++occurs;
        ptr = strstr(ptr + 1, searchStr);
    }

    return occurs;
}