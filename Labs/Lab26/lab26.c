#include "lab26.h"
#include "vector.h"
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
   // With the functions provided in the Vector ADT,
   //   create a correctly sized vector to read-in all
   //   data from the lab26Data.csv file
   vector my_vector;
   unsigned int numLines;

   // numLines = (unsigned int) getNumLines("C:\\Users\\C22Bryson.Fraelich\\CLionProjects\\CS210\\Labs\\Lab26\\lab26Data.csv");
   numLines = (unsigned int) getNumLines("lab26Data.csv");
   vector_create(&my_vector, numLines);
   
   // Utilize your readFile() function from Lab 25
   //   to populate the vector -- you will need to make changes
   //   for this function to perform correctly

   // readFile("C:\\Users\\C22Bryson.Fraelich\\CLionProjects\\CS210\\Labs\\Lab26\\lab26Data.csv", &my_vector, numLines);
   readFile("lab26Data.csv", &my_vector, numLines);
  
   // With the functions provided in the Vector ADT,
   //   print the number of vector elements
   printf("%d\n", vector_size(&my_vector));
    
   // With the functions provided in the Vector ADT,
   //   insert a 12 at index 139
   vector_insert(&my_vector, 139, 12);

   // With the functions provided in the Vector ADT,
   //   print the number of vector elements
   printf("%d\n", vector_size(&my_vector));
    
    
   // With the functions provided in the Vector ADT,
   //   print the element at index 999
   printData(&my_vector, 999);
    
   // With the functions provided in the Vector ADT,
   //   erase the element at index 999
   vector_erase(&my_vector, 999);

   // With the functions provided in the Vector ADT,
   //   print the element at index 999
   printData(&my_vector, 999);

   // With the functions provided in the Vector ADT,
   //   print the number of vector elements
    

    // Using the Vector ADT provided function
    //   vector_push_back to insert the integer 222
   

   // With the functions provided in the Vector ADT,
   //   print the number of vector elementss
    

   // With the functions provided in the Vector ADT,
   //   destroy the vector
  
}

int getNumLines(char filename[]) {
    char c;
    int count = 0;

    // Open the file
    FILE *fp = fopen(filename, "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Could not open file %s in: getNumLines\n", filename);
        return -1;
    }

    // Extract characters from file and store in character c
    for (c = getc(fp); c != EOF; c = getc(fp)) {
        if (c == '\n') { // Increment count if this character is newline
            count = count + 1;
        }
        fflush(stdin);
    }

    // Close the file
    fclose(fp);

    return count;
}

void readFile(char filename[], vector* vectorPtr, int records) {
    // Open an input file for reading
    FILE *in = fopen(filename, "r");
    if (in == NULL) {
        printf("Error opening data file: %s.\n", strerror(errno));
        exit(1);
    }
    int numRead = 0;

//    char trash[2000];
//    fgets(trash, 2000, in);
    while (numRead < records && !feof(in)) {
        fscanf(in, "%d%*c%*c", &vectorPtr->elements[numRead]);
        numRead++;
    }
    fclose(in);
}

void printData(vector* theData, int numElem){
    printf("%d\n", theData->elements[numElem]);

}