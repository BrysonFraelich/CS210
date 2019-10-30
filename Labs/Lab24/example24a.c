/** example24a.c
* ===========================================================
* Name: CS210
* Section: n/a
* Project: Lsn24 - Dynamic Memory Allocation in C
* ===========================================================
*/

#define NUMROWS 10
#define NUMCOLS 10

#include <stdlib.h>
#include <stdio.h>

void printDyn1_2(int** ptrPtr);
void printDyn3(int* ptr);

int main() {

    // Technique #1
    // Allocate using pointer to a pointer
    int** dyn2dPtr = malloc(NUMROWS * sizeof(int*));
    for (int r = 0;r < NUMROWS; r++) {
        dyn2dPtr[r] = malloc(NUMCOLS * sizeof(int));
    }

    // Assign with values using pointer to pointer,
    // also print values
    for (int r = 0;r < NUMROWS;r++) {
        for (int c = 0; c < NUMCOLS; c++) {
            dyn2dPtr[r][c] = (r + 1) * (c + 1);
            // this line below the same as the line above
            // using pointer math (ouch!)
            // *(*(dyn2dPtr+r)+c) = (r + 1) * (c + 1);
            printf("%3d ",dyn2dPtr[r][c]);
        }
        printf("\n");
    }
    printf("\n");

    // Print using a function call
    printDyn1_2(dyn2dPtr);

    // Deallocate the memory working from the last allocated/malloc'd
    // back to the first (why this order?)
    for (int r=0;r<NUMROWS;r++) {
        free(dyn2dPtr[r]);
    }
    free(dyn2dPtr);

    // Technique #2 - Use an array of pointers (very similar to #1)
    // I would argue that this isn't truely dynamic as the array of
    // pointers is allocated on the stack vs the heap.
    int* intPtrs[NUMROWS];
    for (int r = 0;r < NUMROWS; r++) {
        intPtrs[r] = malloc(NUMCOLS * sizeof(int));
    }
    // Assign with values using a array of pointers
    // also print values
    for (int r = 0;r < NUMROWS;r++) {
        for (int c = 0; c < NUMCOLS; c++) {
            intPtrs[r][c] = (r + 1) * (c + 1);
            printf("%3d ",intPtrs[r][c]);
        }
        printf("\n");
    }
    printf("\n");

    // Print using a function call
    printDyn1_2(intPtrs);

    // Deallocate the memory working from the last allocated/malloc'd
    // back to the first (why didn't we free intPtrs?)
    for (int r=0;r<NUMROWS;r++) {
        free(intPtrs[r]);
    }

    // Technique #3
    // Allocate using a single pointer
    int* dyn2dPtr2 = malloc(NUMROWS * NUMCOLS * sizeof(int));

    // Assign with values using a single pointer and pointer math,
    // also print values
    for (int r = 0;r < NUMROWS;r++) {
        for (int c = 0; c < NUMCOLS; c++) {
            *(dyn2dPtr2 + r * NUMCOLS + c) = (r + 1) * (c + 1);
            printf("%3d ",*(dyn2dPtr2 + r * NUMCOLS + c));
        }
        printf("\n");
    }

    // Print using a function call
    printDyn3(dyn2dPtr2);
    printDyn3(dyn2dPtr2);

    // Deallocate the memory (why no loop like previous?)
    free(dyn2dPtr2);


}

// Notice we can use the same function for techniques 1 and 2
void printDyn1_2(int** ptrPtr) {
    printf("Function Output Dyn1_2->\n");
    for (int r = 0;r < NUMROWS;r++) {
        for (int c = 0; c < NUMCOLS; c++) {
            printf("%3d ",ptrPtr[r][c]);
            ptrPtr[r][c] = -7;
        }
        printf("\n");
    }
    printf("\n");
}

// Memory structure is different in this case so need a
// different function
void printDyn3(int* ptr) {
    printf("Function Output Dyn3->\n");
    for (int r = 0;r < NUMROWS;r++) {
        for (int c = 0; c < NUMCOLS; c++) {
            printf("%3d ",*(ptr + r * NUMCOLS + c));
        }
        printf("\n");
    }
    printf("\n");
}