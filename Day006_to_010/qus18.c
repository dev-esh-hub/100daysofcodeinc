// Q18: Write a program to assign grades based on a percentage input.

#include<stdio.h>

int main(){
    float c, linux, maths, evs, ps, sum, perc;
    printf("Enter marks of C programming (out of 100): \n");
    scanf("%f", &c);
    printf("Enter marks of Linux (out of 100): \n");
    scanf("%f", &linux);
    printf("Enter marks of Maths (out of 100): \n");
    scanf("%f", &maths);
    printf("Enter marks of EVS (out of 100): \n");
    scanf("%f", &evs);
    printf("Enter marks of Problem Solving (out of 100): \n");
    scanf("%f", &ps);

    sum = c+linux+maths+evs+ps;
    perc= (sum/500)*100;

    printf("Your percentage is : %.2f\n", perc);

    if (perc>90 && perc<=100)
        printf("GRADE A!");
    else if (perc>80 && perc<=90)
        printf("GRADE B!");
    else if (perc>70 && perc<=80)
        printf("GRADE C!");
    else if (perc>60 && perc <=70)
        printf("GRADE D!");
    else if (perc>50 && perc<=60)
        printf("GRADE E!");
    else if (perc>=0 && perc<=50)
        printf("GRADE F!");
    else 
        printf("PERCENTAGE CAN'T BE NEGATIVE AND ABOVE 100!");

    return 0;
}




