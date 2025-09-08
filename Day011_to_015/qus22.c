// Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include<stdio.h>

int main(){
    float CP, SP, prof, loss;
    printf("Enter the Cost Price and Selling Price respectively to find profit and loss: \n");
    scanf("%f,%f", &CP, &SP);

    prof = ((SP - CP)/CP)*100;
    loss = ((CP - SP)/CP)*100;

    if (CP>=0 && SP>=0)
        if (CP>SP)
            printf("Loss %.2f%%", loss);
        else if (CP<SP)
            printf("Profit, %.2f%%", prof);
        else 
            printf("No Profit No Loss");
    else 
        printf("Selling And Cost Price can't be negative!");

    return 0;
}
