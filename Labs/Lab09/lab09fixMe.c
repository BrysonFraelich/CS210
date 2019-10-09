/** lab09.c
* ===========================================================
* Name: Bryson Fraelich, 03 Sep 19
* Section:
* Project: Lab 9
* Purpose: Debugging
* ===========================================================
* Instructions:
 * Complete the tasks outlined in the lab writeup.
*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

double convertTemperature(double userFahrenheit);
int findLargest(int n1, int n2, int n3);

int main(void) {

    // findLargest()
    int n1, n2, n3;
    int largest;

    printf("Enter three integer numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    largest = findLargest(n1, n2, n3);
    if (largest == n1) {
        printf("%d is the largest number.\n", n1);
    } else if (largest == n2) {
        printf("%d is the largest number.\n", n2);
    } else {
        printf("%d is the largest number.\n", n3);
    }

    // convertTemperature()
    double fahrenheit;
    printf("Please enter a temperature in fahrenheit: \n");
    scanf("%lf", &fahrenheit);

    double celsius = convertTemperature(fahrenheit);
    printf("%lf\n", celsius);

    return 0;
}

    int findLargest(int n1, int n2, int n3) {
        if (n1 >= n2 && n1 >= n3) {
            return n1; //printf("%.2lf is the largest number.", n1);

        } else if (n2 >= n1 && n2 > n3) {
            return n2; //printf("%.2lf is the largest number.", n2);

        } else {
            return n3; //printf("%.2lf is the largest number.", n3);
        }
    }

    double convertTemperature(double userFahrenheit) {
        double celsius = (5.0 / 9.0) * (userFahrenheit - 32.0);

        return celsius;
    }
