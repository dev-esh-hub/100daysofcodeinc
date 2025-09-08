// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>

int main(){
    int givensec, sec, min, hour;

    printf("Enter time in seconds: \n");
    scanf("%d", &givensec);

    hour = givensec / 3600;
    min = (givensec % 3600) / 60;
    sec = givensec % 60;


    printf("Time is %02d:%02d:%02d", hour, min, sec);

    return 0;
}