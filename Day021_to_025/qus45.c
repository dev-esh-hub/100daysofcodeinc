// Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include<stdio.h>

float sum(int n){
    int num = 2, den = 3;
    int i = 1; 
    float total = 0;
    for (i; i<=n; i+=1){
        float div = (float)num/den;
        total += div;
        num += 2, den += 4;
    }
    return total;
}

int main(){
    int n;
    printf("Enter the term upto which you want to print: \n");
    scanf("%d", &n);
    float summation = sum(n);
    printf("Sum of series upto %d term is %.2f", n, summation);
    return 0;
}
