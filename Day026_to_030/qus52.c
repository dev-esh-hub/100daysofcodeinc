/*
Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

*/

#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 5; i++) {
        int count;

        if (i == 1 || i == 5)
            count = 1;
        else if (i == 2 || i == 4)
            count = 3;
        else
            count = 5;

        for (j = 1; j <= count; j++) {
            printf("*\n");
        }

        if (i != 5)
            printf("\n");
    }

    return 0;
}
