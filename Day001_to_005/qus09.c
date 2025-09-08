// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>

int main(){
    float SI, CI, P, R, T, Amount;

    printf("Enter the Principal Amount: \n");
    scanf("%f", &P);
    printf("Enter the Rate of Interest (in percentage): \n");
    scanf("%f", &R);
    printf("Enter the time: \n");
    scanf("%f", &T);

    SI = (P*R*T)/100;
    Amount = P * pow ( ( 1 + R/100  ) ,T );
    CI = Amount - P;

    printf("The simple interest is %.2f\n", SI);
    printf("The Compound Interest is %.2f\n", CI);

    return 0;
}