/** pex2main.c
 * ===============================================================
 * Name: Bryson Fraelich
 * Section: T1
 * Project: PEX 2 - Genome Sequencing
 * Purpose: To compare and measure the differences between DNA
 * sequences. Specifically, human, cat, and mouse DNA are being
 * compared.
 * Documentation Statement: C3C Jimmy Baggett helped me with
 * reading the information in from the file. He showed me that the
 * that I could use a struct pointer. Baggett and C3C Rotzal
 * assisted me with the countMatches function. Baggett explained
 * to me that I was correct for using a nested for loop in my
 * function, but both Baggett and Rotzal explained that he loops
 * should be checking for characters specifically, and not an
 * entire string at once.
 */

#include "pex2functs.h"

int main() {
    DNA *sequence = NULL;           // Pointer of DNA_Struct type, for the sequences to be read
    sequence = malloc(sizeof(DNA)); // Sets aside memory for the sequence array with the size of DNA_Struct type

    // Reads the information in from the pex2Data.txt file
    readFile("C:\\Users\\C22Bryson.Fraelich\\CLionProjects\\CS210\\PEX2\\pex2Data.txt", sequence);
    // readFile("pex2Data.txt", sequence);

    // DELETE ME
    printf("Human DNA:\n%s\nMouse DNA:\n%s\nCat DNA:\n%s\n",sequence->humanDNA,sequence->mouseDNA,sequence->catDNA);

    // DELETE ME
    printf("hamming = %d\n", hammingDistance("AAA", "CC")); // result= -1
    printf("hamming = %d\n", hammingDistance("ACCT", "ACCG")); //result= 1
    printf("hamming = %d\n", hammingDistance("ACGGT", "CCGTT")); //result= 2

    // DELETE ME
    printf("simularity = %0.3f\n", similarityScore("CCC", "CCC")); // result= 1.0
    printf("simularity = %0.3f\n", similarityScore("ACCT", "ACCG")); // result= 0.75
    printf("simularity = %0.3f\n", similarityScore("ACGGT", "CCGTT")); // result= 0.6
    printf("simularity = %0.3f\n", similarityScore("CCGCCGCCGA", "CCTCCTCCTA")); // result= 0.7

    // DELET ME

    printf("# matches = %d\n", countMatches("CCGCCGCCGA", "TTT", 0.6)); // result= 0
    printf("# matches = %d\n", countMatches("CCGCCGCCGA", "CCG", 0.2)); // result= 8
    printf("# matches = %d\n", countMatches(sequence->mouseDNA, "CGCTT", 0.5)); // result= 36
    printf("# matches = %d\n", countMatches(sequence->humanDNA, "CGC", 0.3)); // result= 215

    // DELETE ME
    printf("best match = %0.3f\n", findBestMatch("CCGCCGCCGA", "TTT")); // result= 0.0
    printf("best match = %0.3f\n", findBestMatch("CTGCCACCAA", "CCGC")); // result= 0.75
    printf("best match = %0.3f\n", findBestMatch(sequence->catDNA, "CGCTT")); // result= 0.8
    printf("best match = %0.3f\n", findBestMatch(sequence->humanDNA, "CGC")); // result= 1.0

    // DELETE ME
    printf("likely genome match = %d.\n", findBestGenome(sequence->catDNA, sequence->humanDNA, sequence->mouseDNA, "CTTTAGGCCGGTT")); //result= 1
    printf("likely genome match = %d.\n", findBestGenome(sequence->catDNA, sequence->humanDNA, sequence->mouseDNA, "CTTTAGGCCGGG")); //result= 2
    printf("likely genome match = %d.\n", findBestGenome(sequence->catDNA, sequence->humanDNA, sequence->mouseDNA, "CTTAATTCTTTT")); //result= 3
    printf("likely genome match = %d.\n", findBestGenome(sequence->catDNA, sequence->humanDNA, sequence->mouseDNA, "CTTTAG")); //result= 0

    return 0;
}
