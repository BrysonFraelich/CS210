/** pex2functs.c
 * ===============================================================
 * Name: Bryson Fraelich
 * Section: T1
 * Project: PEX 2 - Genome Sequencing
 */

#include "pex2functs.h"

void readFile(char filename[], DNA *sequence) {
    // Opens the file
    FILE *in = fopen(filename, "r");

    // Identifies if the specified file was not there or is empty
    if (in == NULL) {
        printf("Error opening %s in \"readFile\"", filename);
    }

    // Imports the values for each genome of the file into the DNA_Struct members
    fscanf(in, "%s", sequence->humanDNA);
    fscanf(in, "%s", sequence->mouseDNA);
    fscanf(in, "%s", sequence->catDNA);

    fclose(in);
}

int hammingDistance(char *str1, char *str2) {
    int distance = 0;
    double len1 = strlen(str1);
    double len2 = strlen(str2);

    // Checks that the sequences are the same size
    if (len1 != len2) {
        return -1;
    }

    // Finds the number of characters that are the same between both sequences
    int i;
    for (i = 0; i < len1; ++i) {
        if (str1[i] != str2[i]) {
            ++distance;
        }
    }

    return distance;
}

float similarityScore(char *seq1, char *seq2) {
    float score = 0;
    int distance = 0;
    float len1 = strlen(seq1);
    float len2 = strlen(seq2);

    // Determines if both strings are the same length
    if (len1 != len2) {
        return -1;
    }

    // Finds the number of characters that are the same between both sequences
    int i;
    for (i = 0; i < len1; ++i) {
        if (seq1[i] != seq2[i]) {
            ++distance;
        }
    }

    // Calculates the similarity score between both sequences
    score = (len1 - distance) / len1;

    return score;
}

int countMatches(char *genome, char *seq, float minScore) {
    int matches = 0;
    int i;
    int j;

    for (i = 0; i < strlen(genome) - (strlen(seq) - 1); ++i) {
        float temp = 0;     // counter for number of characters in a genome set that match the given sequence

        // Loop through each position in the genome
        for (j = 0; j < strlen(seq); ++j) {
            if (genome[i + j] == seq[j]) {
                temp = temp + 1;
            }
        }
        if ((temp / strlen(seq)) > minScore) {      // Checks if the number of characters in the genome
            matches = matches + 1;                  // are above the minimum threshold to be considered
        }                                           // a match.
    }

    return matches;
}

float findBestMatch(char *genome, char *seq) {
    float best = -999;
    int i;
    int j;

    // Like countMatches, but checks and sets the highest match value to best
    for (i = 0; i < strlen(genome) - (strlen(seq) - 1); ++i) {
        float temp = 0;

        for (j = 0; j < strlen(seq); ++j) {
            if (genome[i + j] == seq[j]) {
                temp = temp + 1;
            }
        }
        if ((temp / strlen(seq)) > best) {
            best = temp / strlen(seq);
        }
    }

    return best;
}

int findBestGenome(char *genome1, char *genome2, char *genome3, char *unknownSeq) {
    float best1 = 0;
    float best2 = 0;
    float best3 = 0;

    // Finds the highest percent match of the given sequence in each genome
    best1 = findBestMatch(genome1, unknownSeq);
    best2 = findBestMatch(genome2, unknownSeq);
    best3 = findBestMatch(genome3, unknownSeq);

    // Comparision between the best matches to determine which sequence the genome belongs to
    if(best1 == best2 && best1 > best3){
        return 0;
    } else if(best1 == best3 && best1 > best2){
        return 0;
    } else if(best2 == best3 && best2 > best1){
        return 0;
    } else if(best1 > best2 && best1 > best3){
        return 1;
    } else if(best2 > best1 && best2 > best3){
        return 2;
    } else {
        return 3;
    }
}