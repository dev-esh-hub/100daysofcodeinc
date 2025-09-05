// Q32: Write a program to check if a number is a palindrome.
#include<stdio.h>

int main(){
    // A number is said to be pallindrome if its reverse is equal to it.
    int rev=0, n, div, altn;
    printf("Enter the number to check pallendromeor not: \n");
    scanf("%d", &n);
    altn = n; //Putting value of n in altn so that value of original n remains safe.
    while (altn!=0){
        div =  altn%10;
        rev = rev*10+div;
        altn = altn/10;
        }
    rev==n?printf("%d is a pallindrome number!", n):printf("%d is not a pallendrome number!", n);
    return 0;
}
