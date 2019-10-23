//
// Created by C22Bryson.Fraelich on 10/21/2019.
//

#include "lab25.h"

int main() {

// Exercise 1
    Point *one = NULL;
    Point *two = NULL;

    one = (Point *) malloc(sizeof(Point));
    two = (Point *) malloc(sizeof(Point));

    getPoints(one, two);

    double pointDistance = getDistance(*one, *two);
    printf("Distance: %f\n", pointDistance);

// Exercise 2
//  int numLines = getNumLines("C:\\Users\\C22Bryson.Fraelich\\CLionProjects\\CS210\\Labs\\Lab25\\lab25Data.csv");
    int numLines = getNumLines("lab25Data.csv");


    USAFBaseData **bases = malloc(numLines * sizeof(USAFBaseData));
    if (bases == NULL) {
        printf("Error in dynamic allocation for: bases**");
    }

    for (int i = 0; i < numLines; ++i) {
        bases[i] = (USAFBaseData *) malloc(sizeof(USAFBaseData));
    }

//    readFile("C:\\Users\\C22Bryson.Fraelich\\CLionProjects\\CS210\\Labs\\Lab25\\lab25Data.csv", bases, numLines);
    readFile("lab25Data.csv", bases, numLines);

    printData(bases, numLines);

    return 0;
}

void getPoints(Point *one, Point *two) {
    int a, b, c, d;

    printf("Enter coordinates of point a:\n");
    scanf("%d %d", &a, &b);
    one->x = a;
    one->y = b;

    printf("Enter coordinates of point b:\n");
    scanf("%d %d", &c, &d);
    two->x = c;
    two->y = d;
}

double getDistance(Point one, Point two) {
    double distance;
    double x_dist;
    double y_dist;

    x_dist = two.x - one.x;
    y_dist = two.y - one.y;
    x_dist = pow(x_dist, 2);
    y_dist = pow(y_dist, 2);
    distance = sqrt(x_dist + y_dist);

    return distance;
}

int getNumLines(char filename[]) {
    char c;
    int count = 0;

    // Open the file
    FILE *fp = fopen(filename, "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Could not open file %s", filename);
        return 0;
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

void readFile(char filename[], USAFBaseData **base, int numBases) {

    // Open the file
    printf("Opening file...\n");
    FILE *fp = fopen(filename, "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Could not open file %s", filename);
    }

    char trash[100];
    fgets(trash, 100, fp);

    int i = 0;
    while (i < numBases && !feof(fp)) {
        fscanf(fp, "%[^,]%*c%d%*c%d%*c %[^,]  %*c%[^\n]", base[i]->baseName, &base[i]->bldgsOwned,
               &base[i]->structsOwned, base[i]->city, base[i]->state);
        i++;
    }

    // Close the file
    fclose(fp);
}

void printData(USAFBaseData **bases, int numLines) {
    int i;

    for (i = 0; i < numLines; ++i) {
        printf("%s, %d, %d, %s, %s\n", bases[i]->baseName, bases[i]->bldgsOwned,
               bases[i]->structsOwned, bases[i]->city, bases[i]->state);
    }
}
