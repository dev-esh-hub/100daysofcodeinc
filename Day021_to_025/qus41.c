// Q41: Write a program to swap the first and last digit of a number.
#include<stdio.h>
#include<math.h>
int main(){
    int n, swaped;

    printf("Enter the number you want to swap last and first number: \n");
    scanf("%d", &n);
    
    int altn = n, first;
    int last = altn%10;
    int count = 0;
    int altaltn = n;

    while(altn!=0){
        first=altn%10;
        altn/=10;
        count+=1; // To count number of digits in n.
    }
    swaped = (last * (int)pow(10,count-1))+ (altaltn % (int)pow(10,count-1)-altaltn%10)+first;

    // Here what I did: 
    // I multiplied 10^(count-1) to last and then placed middle numbers as it is(substracting the last digit) and at the end added the first.

    printf("The swapped new number of %d is %d", n, swaped);
    return 0;
}
