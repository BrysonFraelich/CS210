/** pex2functs.c
 * ===============================================================
 * Name: Bryson Fraelich
 * Section: T1
 * Project: PEX 2 - Genome Sequencing
 * Purpose:
 * Documentation Statement:
 */

#include "pex2functs.h"

void readFile(char filename[], DNA* sequence){
    FILE* in = fopen("../CS210/PEX2/%s", filename);
    if (in == NULL){
        printf("Error opening file in \"readFile\"");
    }

    fscanf(in, );

    fclose(in);
}
