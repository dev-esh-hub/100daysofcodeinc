// Q28: Write a program to print the product of even numbers from 1 to n.

#include<stdio.h>

int main(){
    int n, prod, i, z;
    printf("Enter the number of even numbers upto which you want product: \n");
    scanf("%d", &n);

    prod = 1;
    i = 2;
    for (i; i<=n; i+=1){
        if (i%2==0){
            z = i;
            printf("%d\t", z);
            prod = prod * z;
        }
    }
    printf("\nProduct = %d", prod);
    return 0;
}
