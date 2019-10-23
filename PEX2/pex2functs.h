/** pex2funts.h
 * ===============================================================
 * Name: Bryson Fraelich
 * Section: T1
 * Project: PEX 2 - Genome Sequencing
 * Purpose: Function Declaration
 * Documentation Statement:
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Struct_DNA {
    char humanDNA[400];
    char mouseDNA[400];
    char catDNA[400];
} DNA;

#ifndef PEX2_PEX2FUNCTS_H
#define PEX2_PEX2FUNCTS_H

void readFile(char filename[], DNA *sequence);

int hammingDistance(char *str1, char *str2);

float similarityScore(char *seq1, char *seq2);

int countMatches(char *genome, char *seq, float minScore);

float findBestMatch(char* genome, char* seq);

int findBestGenome(char* genome1, char* genome2, char* genome3, char* unknownSeq);

#endif //PEX2_PEX2FUNCTS_H
