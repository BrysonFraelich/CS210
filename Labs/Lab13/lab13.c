/** lab14.c
* ===========================================================
* Name: Bryson Fraelich, 17 Sep 19
* Section: T1/2A
* Project: Labs
* Purpose:
* ===========================================================
*/

#include "lab13.h"

int main(void){
    int classYear;
    int favNum;
    int x;
    int y;
    int z;
    long factorial;

    // Exercise 1
    printf("Please enter your class year:\n");
    printf("Please enter your favorite integer:\n");
    scanf(" %d %d", &classYear, &favNum);
    swapPassByValue(classYear, favNum);
    printf("aNum = %d, bNum = %d\n", classYear, favNum);

    // Exercise 2
    swapPassByReference(&classYear, &favNum);
    printf("aNum = %d, bNum = %d\n",classYear, favNum);

    // Exercise 3
    printf("Enter two integers separated by a space:\n");
    scanf(" %d %d", &x, &y);
    int sumValue = pointerSum(&x, &y);
    printf("The sum of %d and %d = %d\n", x, y, sumValue);

    // Exercise 4
    printf("Enter an integer:\n");
    scanf("%d", &z);
    findFactorial(z, &factorial);
    printf("The factorial of %d integer is %ld\n", z, factorial);

    return 0;
}

void swapPassByValue(int year, int num){
    int temp = year;

    year = num;
    num = temp;

}

void swapPassByReference(int* year, int* favNum){
    int ptr = *year;
    *year = *favNum;
    *favNum = ptr;

}

int pointerSum(int* num1, int* num2){
    int sumValue;
    sumValue = *num1 + *num2;

    return sumValue;
}

void findFactorial(int z, long *factorial){
    long finalVal = 1;
    int i;

    for (i = 1; i <= z; ++i) {
        finalVal = finalVal * i;
    }
    *factorial = finalVal;
 }