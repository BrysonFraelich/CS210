/** lab28.c
* ===========================================================
* Name: BRYSON, FRAELICH 24 OCT 19
* Section: T1A
* Project: Progamming Assessment 3 Practice
* Documentation: DOC STATEMENT
* ===========================================================  */
#include "lab28.h"

int getNumLines(char *);

int main(void) {
//    PROBLEM 1 - STRING MANIPULATION
//          a.) Define a function called numVowels that takes in a character array and outputs
//          an integer.  The function itself finds the number of vowels within the provided character
//          array. The character array may contain spaces and punctuation.

    //      b.) Define a function called sortString that expects an array of characters array and
    //      and returns a pointer to an array of characters.  The function sorts the characters
    //      in the string in alphabetic order, stores them in this order, and returns a pointer to
    //      this sorted array of characters.
    //      The character array may contain spaces and punctuation. When sorting, spaces and punctuation
    //      should be ignored and all alphabetic characters should be changed to lowercase for
    //      sorting and output.
    //      NOTE: In order to return a pointer to an array of characters that has scope outside a
    //          function call, the memory used to store the sorted array must by dynamically
    //          allocated.


    // PROBLEM 2 - Manipulate Employee Data
    //      You are tasked to create a program that will pull employee records from a simple
    //      text file that contains name and birthdate.  The ultimate goal is to allow a user
    //      to input a month that will result in output to the screen displaying all of the
    //      employees with birthdays for the specified month.  This will assist the squadron
    //      commander with ensuring that all employee birthdays are recognized at the
    //      monthly staff meeting.

    //      a.) Define a structure type, named EmployeeBD, with appropriate members
    //      to store data from the Employee_Recs.txt file. Use the fields names:
    //      FirstName, lastName, birthMonth, and birthDate.

    //      b.) Use the getNumLines function provided to capture the number of records to be read from
    //      from the Employee_Recs.txt file, then dynamically allocate memory to store the employee data
    //      from the text file.
    int numLines = getNumLines("Employee_Recs.txt");
    ++numLines;
    EmployeeBD *employee_data = (EmployeeBD*)malloc(sizeof(EmployeeBD) * numLines);

    //      c.) Create a user-defined function called readFile, which requires the filename,
    //      memory passed by reference, and the number of records to be passed as parameters
    //      (in that order).  This function returns the integer value corresponding to the number
    //      of records successfully read.
    int numRead = readFile("Employee_Recs.txt", employee_data, numLines);

    //      d.) Create a user-defined function called IDEmpBDMonth to print the employee records
    //      for all employees born in a specified month.  This function accepts three parameters
    //      being the stored records passed by reference, the number of records, and the specified
    //      month for record printing (in that order).  It returns the number of records with the
    //      specified month.
    //      NOTE:  In main, ask the user to provide an integer from 1 - 12 that corresponds with the
    //          birth month they would like to query.
    //      Format the output to the screen as follows:
    //          Example if the user enters 10:
    //              Requested Birthdays are:
    //              Lastname	Firstname	Birthday
    //              *********************************************
    //              Smith		Brian		October 13
    int birthMonth;
    printf("Enter an integer 1 - 12:\n");
    scanf(" %d", &birthMonth);
    int usersInMonth = IDEmpBDMonth(employee_data, numRead, birthMonth);

    return 0;
}

int getNumLines(char filename[]) {
    char c;
    int count = 0;
    // Open the file
    FILE *fp = fopen(filename, "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Could not open file %s", filename);
        return 0;
    }

    // Extract characters from file and store in character c
    for (c = getc(fp); c != EOF; c = getc(fp))
        if (c == '\n') // Increment count if this character is newline
            count = count + 1;

    // Close the file
    fclose(fp);
    //printf("The file %s has %d lines\n ", filename, count);

    return count;
}

int numVowels(char *my_arry){
    double len = strlen(my_arry);
    int count = 0;
    int i = 0;

    while(i < len){
        char check_char = my_arry[i];
        switch (check_char){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                ++count;
                break;

            default:
                break;
        }
        ++i;
    }

    return count;
}

char *sortString(char *char_array){
    char *ptr = NULL;
    int len = strlen(char_array);
    ptr = (char*)malloc(sizeof(char) * len);
    int i;
    int j;
    int index = 0;
    char alpha[] = "abcdefghijklmnopqrstuvwxyz";

    for(i = 0; i < 26; ++i){
        for(j = 0; j < len; ++j){
            if(tolower(char_array[j]) == alpha[i]){
                ptr[index] = tolower(char_array[j]);
                index++;
            }
        }
    }

    return ptr;
}

int readFile(char *filename, EmployeeBD *ptr, int numRecords){
    FILE *in = fopen(filename, "r");
    if (in == NULL) {
        printf("Error opening data file: %s.\n", strerror(errno));
        exit(1);
    }

    int i;
    for(i = 0; i < numRecords; ++i){
        fscanf(in, "%s %s %s %s\n", ptr[i].firstName, ptr[i].lastName, ptr[i].birthMonth, ptr[i].birthDate);
    }

    fclose(in);
    return i;
}

int IDEmpBDMonth(EmployeeBD *ptr, int numRecords, int month){
    int numRead = 0;
    int i;
    char compare[15];

    printf("Lastname\tFirstname\tBirthday\n");
    printf("*********************************************\n");

    switch(month){
        case 1:
            strcpy(compare, "January");
            break;
        case 2:
            strcpy(compare, "February");
            break;
        case 3:
            strcpy(compare, "March");
            break;
        case 4:
            strcpy(compare, "April");
            break;
        case 5:
            strcpy(compare, "May");
            break;
        case 6:
            strcpy(compare, "June");
            break;
        case 7:
            strcpy(compare, "July");
            break;
        case 8:
            strcpy(compare, "August");
            break;
        case 9:
            strcpy(compare, "September");
            break;
        case 10:
            strcpy(compare, "October");
            break;
        case 11:
            strcpy(compare, "November");
            break;
        case 12:
            strcpy(compare, "December");
            break;
        default:
            break;

    }

    for(i = 0; i < numRecords; ++i){
        if(strcmp(ptr[i].birthMonth, compare) == 0){
            printf("%s\t\t%s\t\t%s %s\n", ptr[i].firstName, ptr[i].lastName, ptr[i].birthMonth, ptr[i].birthDate);
            ++numRead;
        }
    }

    return numRead;
}
