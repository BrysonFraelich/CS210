//
// Created by C22Bryson.Fraelich on 9/27/2019.
//

#include "lab19functs.h"

int main(void){
    char str[MAX_STR_LEN];
    char str2[MAX_STR_LEN];
    int locations[MAX_STR_LEN];
    char sChar;
    char rChar;

    // Exercise 1
    printf("Enter a string (<= 80 chars):\n");
    scanf(" %s", str);
    printf("Enter a search character followed by replace character:\n");
    scanf(" %c %c", &sChar, &rChar);
    replStr(str, sChar,rChar);
    printf("New string (between arrows): -->%s<--\n", str);
    char ch = '\0';while ((ch = getchar()) != '\n' && ch != EOF);
    fflush(stdin);

    // Exercise 2
    printf("Enter a string (<= 80 chars):\n");
    scanf(" %s", str);
    ch = '\0';while ((ch = getchar()) != '\n' && ch != EOF);
    fflush(stdin);
    printf("Enter a search string (<= 80 chars):\n");
    scanf(" %s", str2);
    ch = '\0';while ((ch = getchar()) != '\n' && ch != EOF);
    fflush(stdin);
    printf("Enter a replace character:\n");
    scanf(" %c", &rChar);
    replMultiChar(str, str2, rChar);
    printf("New string (between arrows): -->%s<--\n", str);
    ch = '\0';while ((ch = getchar()) != '\n' && ch != EOF);
    fflush(stdin);

    // Exercise 3
    printf("Enter a string (<= 80 chars):\n");
    scanf(" %s", str);
    ch = '\0';while ((ch = getchar()) != '\n' && ch != EOF);
    fflush(stdin);
    printf("Enter a character whose locations you wish to find:\n");
    scanf(" %s", &sChar);
    ch = '\0';while ((ch = getchar()) != '\n' && ch != EOF);
    fflush(stdin);
    int occurrences = findLocations(str, locations, sChar);
    printf("There are %d occurrences of %c", occurrences, sChar);

    // Exercise - Challenge
    printf("Enter a string (<= 80 chars):\n");
    scanf(" %s", str);
    ch = '\0';while ((ch = getchar()) != '\n' && ch != EOF);
    fflush(stdin);
    printf("Enter a search string (<= 80 chars):\n");
    scanf(" %s", str2);
    ch = '\0';while ((ch = getchar()) != '\n' && ch != EOF);
    fflush(stdin);
    occurrences = countSeqStr(str, str2);
    printf("There are %d occurrences of xxx.\n", occurrences);

    return 0;
}