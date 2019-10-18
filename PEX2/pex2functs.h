/** pex2funts.h
 * ===============================================================
 * Name: Bryson Fraelich
 * Section: T1
 * Project: PEX 2 - Genome Sequencing
 * Purpose:
 * Documentation Statement:
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Struct_DNA{
    char *humanDNA;
    char *mouseDNA;
    char *catDNA;
} DNA;

#ifndef PEX2_PEX2FUNCTS_H
#define PEX2_PEX2FUNCTS_H

void readFile(char filename[], DNA* sequence);

#endif //PEX2_PEX2FUNCTS_H
