// Q21: Write a program to display the month name and number of days using switch-case for a given month number.

#include<stdio.h>

int main(){
    int mth;
    printf(" 1 --- January\n 2 --- February\n 3 --- March\n 4 --- April\n 5 --- May\n 6 --- June\n 7 --- July\n 8 --- August\n 9 --- September\n 10 --- October\n 11 --- November\n 12 --- December\n");
    printf("Enter the number to see how many days in that month: \n");
    scanf("%d", &mth);

    switch(mth){
        case 1:
            printf("January, 31");
            break;
        case 2:
            printf("February, 28");
            break;
        case 3:
            printf("March, 31");
            break;
        case 4:
            printf("April, 30");
            break;
        case 5:
            printf("May, 31");
            break;
        case 6:
            printf("June, 30");
            break;
        case 7:
            printf("July, 31");
            break;
        case 8:
            printf("August, 31");
            break;
        case 9:
            printf("September, 30");
            break;
        case 10:
            printf("October, 31");
            break;
        case 11:
            printf("November, 30");
            break;
        case 12:
            printf("December, 31");
            break;
        default:
            printf("Wrong input!");
    }
    return 0;
}