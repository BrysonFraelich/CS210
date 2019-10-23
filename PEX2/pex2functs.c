/** pex2functs.c
 * ===============================================================
 * Name: Bryson Fraelich
 * Section: T1
 * Project: PEX 2 - Genome Sequencing
 * Purpose: Functions
 * Documentation Statement:
 */

#include "pex2functs.h"

void readFile(char filename[], DNA *sequence) {
    FILE *in = fopen(filename, "r");
    if (in == NULL) {
        printf("Error opening %s in \"readFile\"", filename);
    }

    fscanf(in, "%s", sequence->humanDNA);
    fscanf(in, "%s", sequence->mouseDNA);
    fscanf(in, "%s", sequence->catDNA);

    fclose(in);
}

int hammingDistance(char *str1, char *str2) {
    int distance = 0;
    double len1 = strlen(str1);
    double len2 = strlen(str2);

    if (len1 != len2) {
        return -1;
    }

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

    if (len1 != len2) {
        return -1;
    }

    int i;
    for (i = 0; i < len1; ++i) {
        if (seq1[i] != seq2[i]) {
            ++distance;
        }
    }

    score = (len1 - distance) / len1;

    return score;
}

int countMatches(char *genome, char *seq, float minScore) {
    int matches = 0;
    int i;
    int j;

    for (i = 0; i < strlen(genome) - (strlen(seq) - 1); ++i) {
        float temp = 0;

        for (j = 0; j < strlen(seq); ++j) {
            if (genome[i + j] == seq[j]) {
                temp = temp + 1;
            }
        }
        if ((temp / strlen(seq)) > minScore) {
            matches = matches + 1;
        }
    }

    return matches;
}

float findBestMatch(char *genome, char *seq) {
    float best = -999;
    int i;
    int j;

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

    best1 = findBestMatch(genome1, unknownSeq);
    best2 = findBestMatch(genome2, unknownSeq);
    best3 = findBestMatch(genome3, unknownSeq);

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