// Q23: Write a program to calculate a library fine based on late days.

#include<stdio.h>

int main(){
    int lateday;
    printf("Enter the number of days you are late: \n");
    scanf("%d", &lateday);

    if (lateday>0)
        switch(lateday){
            case 1 ... 7:
                printf("Fine = ₹%d", lateday * 2);
                break;
            case 8 ... 14:
                printf("Fine = ₹%d", lateday * 4);
                break;
            case 15 ... 21:
                printf("Fine = ₹%d", lateday * 6);
                break;
            case 22 ... 28:
                printf("Fine = ₹%d", lateday * 8);
                break;
            default:
                printf("Membership Cancelled!");

        }
    return 0;
}


