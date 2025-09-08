// Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

#include<stdio.h>

int main(){
    int day;
    printf("Enter the number from 1 to 7 to get day of week: \n");
    scanf("%d", &day);

    switch(day){
        case 1:
            printf("MONDAY IS THE DAY!");
            break;
        case 2:
            printf("TUESDAY IS THE DAY!");
            break;
        case 3:
            printf("WEDNESDAY IS THE DAY!");
            break;
        case 4:
            printf("THURSDAY IS THE DAY!");
            break;
        case 5:
            printf("FRIDAY IS THE DAY!");
            break;
        case 6:
            printf("SATURDAY IS THE DAY!");
            break;
        case 7:
            printf("SUNDAY IS THE DAY!");
            break;
        default:
            printf("INVALID INPUT!");
    }
        
    return 0;
}
