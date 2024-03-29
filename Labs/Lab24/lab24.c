/** lab24.c
* ================================================================
* Name: Bryson Fraelich
* Section: T1A
* Project: Lab24 - Dynamic Memory Allocation II
* =================================================================
*
* Instructions:  In this lab you will practice allocating memory
* dynamically, using the c library functions malloc() and
* realloc().  Specifically you will allocate an array using malloc()
* and then dynamically grow this array using realloc() as it is filled
* with random integers.
*
* Complete the tasks below.
*/


#define INIT_SIZE 100

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "lab24.h"

//local function prototypes
void seedGenerator();
int fillArray(int *array, int arraySize, int dataSetSize);

int main() {

    /** TASK 0 - read/understand the seedGenerator() function.
     * This function seeds the random number
     * generator (see lab 5's guess game function).  This function
     * will only allow srand() to be called once (it is bad
     * to seed the random number generator more than once). Call the
     * function below.  Try calling it second time. Why is the
     * random number generator not seeded a second time?
     */
    seedGenerator();


    /** TASK 1 - Allocate an array of INIT_SIZE integers
     * using the malloc() function call.
     */
    int *array = (int*) malloc(sizeof(int) * INIT_SIZE);

    /** TASK 2 - declare and initialize an int variable to
     * hold the size of a data set of random integers.
     * The size should vary between 1 and 1000.
     */
    int dataSetSize = (rand() % 1000) + 1;

    /** TASK 3 - complete the fillArray() function implementation
     * and call it.
     * part 1 - implement fillArray() using realloc() (header below)
     *    Note: double the array in size when it is reallocated
     * part 2 - call the function below and print out a message
     * that includes the initial size of the array, the
     * randomly generated data set size (from task 2), and the number
     * of times doubled (returned by the function).
     */
     int arraySize = sizeof(array);
     int count = fillArray(array, arraySize, dataSetSize);
     printf("Array Size: %d, DataSetSize: %d, Number of times doubled: %d", arraySize, dataSetSize, count);

    /** TASK 4 -  IMPORTANT - When you submit this lab to zyBooks be
     *     sure that you comment out the line in main() that calls
     *     the seedGenerator() function.  Also double check your the range
     *     on your random number generation in task 2.  It should be between
     *     1 and 1000 inclusive.
     */

    return 0;
}

/** ----------------------------------------------------------
 * fillArray() - fills array with random ints its size is
 * specfied by dataSetSize
 * @param array is a ptr to an array of integers
 * @param arraySize is the size of the array of integers
 * @param dataSetSize is the final size of the array of integers
 * which can be smaller, equal to, or larger than the array's initial
 * size
 * @return the number of times the initial array was doubled in size
 * to support the larger data set
 * ----------------------------------------------------------
 */
int fillArray(int *array, int arraySize, int dataSetSize) {
    int i;
    int count = 0;

    for(i = 0; i < dataSetSize; ++i){
        if(i == arraySize - 1){
            arraySize = 2 * arraySize;
            count = count + 1;
            array = (int*)realloc(array, sizeof(int) * arraySize);
        } else {
            array[i] = rand();
        }
    }

    return count;
}

/** ----------------------------------------------------------
 * seedGenerator() - seeds the random number generator only once.
 * ----------------------------------------------------------
 */
void seedGenerator() {
    //set up and then seed random number generator
    static int seedDone = 0; // static variables retain their value between calls
    // and are only initialized once

    // modified so the seed is only done once
    if (!seedDone) {

        struct timespec time;
        clock_gettime(CLOCK_REALTIME, &time);
        srandom((unsigned) (time.tv_nsec ^ time.tv_sec));
        seedDone = 1;
        printf("Random number generator seeded...\n");
    }
}