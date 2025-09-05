// Q31: Write a program to take a number as input and print its equivalent binary representation.
#include<stdio.h>

int main(){
    int n, altn, placevalue=1, rem;
    long int bin=0;
    printf("Enter the number to find binary representation of it: \n");
    scanf("%d", &n);
    altn = n; // alternative value of n so that actual n value be stored.
    while(altn!=0){
        rem = altn%2; // find remainder
        altn = altn/2; // preparing quotenet for next iterartion
        bin = bin + (rem*placevalue); // to calculate binary number 
        placevalue *= 10; // to increase placevalue by 10 time in each iteration
    }
    printf("Binary representation of %d is %ld", n, bin);
    return 0;
}
