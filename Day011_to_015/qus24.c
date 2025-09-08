// Q24: Write a program to calculate an electricity bill based on units consumed.

#include<stdio.h>

int main(){
    int units;
    printf ("Enter the units to find bill: \n");
    scanf("%d", &units);

    switch (units){
        case 1 ... 100:
            printf("Bill: ₹%d", units*5);
            break;
        case 101 ... 200:
            printf("Bill: ₹%d", (100*5)+((units-100)*9));
            break;
        default:
            printf("Bill: ₹%d", (100*5)+(100*8)+((units-200)*18));
            break;
    }
    return 0;
}


