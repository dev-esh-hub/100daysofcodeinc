// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include<stdio.h>

int main(){
    char operation;
    int fir, sec;
    printf("Enter first number: \n");
    scanf("%d", &fir);
    printf("Enter second number: \n");
    scanf("%d", &sec);

    printf("Enter the operation you want to perform.\n");
    scanf(" %c", &operation);

    switch(operation){
        case '+':
            printf("Sum of %d and %d = %d", fir, sec, fir+sec);
            break;
        case '-':
            printf("Difference of %d and %d = %d", fir, sec, fir-sec);
            break;
        case '*':
            printf("Product of %d and %d = %d", fir, sec, fir*sec);
            break;
        case '/':
            if (sec !=0)
                printf("Quotnent of %d and %d when dividded is = %d", fir, sec, fir/sec);
            else
                printf("Denominator should not be zero!\n");
            break;
        case '%':
            if (sec !=0)
                printf("Remainder of %d and %d when divided = %d", fir, sec, fir%sec);
            else
                printf("Denominator should not be zero!\n");
            break;
        default:
            printf("Invalid Input!");
        }
    return 0;
}

