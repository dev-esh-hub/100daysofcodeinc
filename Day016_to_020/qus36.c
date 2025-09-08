// Q36: Write a program to find the HCF (GCD) of two numbers.
#include<stdio.h>

int main(){
    int n1, n2;
    printf("Enter two numbers to find Greatest Common Divisor: \n");
    scanf("%d,%d", &n1, &n2);
    int altn1 = n1; 
    int altn2 = n2;
    int rem;
    if (n1>0 && n2>0 && n1!=n2){
        while (altn2>0){
            rem = altn1%altn2;   
            altn1=altn2;
            altn2=rem;
        }
        printf("GCD of %d and %d = %d", n1, n2, altn1);
    }else 
        printf("Wrong input!");
    return 0;
}
