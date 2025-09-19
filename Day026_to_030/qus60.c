// Q60: Count positive, negative, and zero elements in an array.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements you want to enter in the array: \n");
    scanf("%d", &n);
    int a[n], pos=0, neg=0, zero=0;
    if (n>0){
        printf("Enter %d elements: \n", n);
        for(int i=0; i<n; i++){
            scanf("%d", &a[i]);
        }
        for(int j=0; j<n; j++){
            if (a[j]>0)
                pos+=1;
            else if (a[j]<0)
                neg+=1;
            else 
                zero+=1;
        }
        printf("Number of:\nPositive elements in array are %d\nNegative ements in array are %d\nZeroes in array are %d", pos, neg, zero);
    }
    else    printf("Number of elements can't be negative or zero!");
    return 0;
}
