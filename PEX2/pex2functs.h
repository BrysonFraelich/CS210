/** pex2funts.h
 * ===============================================================
 * Name: Bryson Fraelich
 * Section: T1
 * Project: PEX 2 - Genome Sequencing
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

// Used to read in the DNA sequences from the file
void readFile(char filename[], DNA *sequence);

// Determines the similarity between two strings of the same size
int hammingDistance(char *str1, char *str2);

// Finds a percentage similarity between two sequences
float similarityScore(char *seq1, char *seq2);

// Counts the number of matches that are above a certain threshold
int countMatches(char *genome, char *seq, float minScore);

// Finds the highest percentage match for a sequence in a given genome
float findBestMatch(char* genome, char* seq);

// Used to choose which genome the sequence is most likely a part of
int findBestGenome(char* genome1, char* genome2, char* genome3, char* unknownSeq);

#endif //PEX2_PEX2FUNCTS_H
