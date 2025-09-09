// Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Using Numericals but in this starting 0 is not seen!
#include<stdio.h>

int main(){
    long int bin;
    long int combin=0;
    int rem, placevalue = 1;
    printf("Enter the binary number to see complement: \n");
    scanf("%d", &bin);
    long int altbin = bin;
    while (altbin!=0){
        rem = altbin%10;
        if (rem==0)
            rem = 1;
        else if(rem==1)
            rem = 0;
        combin = combin + (rem * placevalue);
        placevalue *= 10;
        altbin = altbin / 10;
        char combin[10];
    }printf("The complement of %4ld binary number is %s", bin, combin);
    return 0;
}
*/

/*
//Using loop of character! (took help of gpt).
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a binary number to find complement of it! (press Enter to finish):\n");

    while ((ch = getchar()) != '\n') {
        if (ch == '0')
            putchar('1');
        else if (ch == '1')
            putchar('0');
        else
            printf("\nInvalid character: %c\n", ch);
    }

    return 0;
}
*/
