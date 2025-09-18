// Q58: Find the maximum and minimum element in an array.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of eelements you want to enter in array: \n");
    scanf("%d", &n);
    int a[n], i, j;
    if(n>0){
        printf("Enter %d elements in single line separated by space: \n", n);
        for(i=0; i<=n-1; i+=1){
            scanf("%d", &a[i]);
        }
        int max = a[0], min = a[0];
        for (j = 0; j<=n-1; j+=1){
            if(a[j]>max)
                max = a[j];
            if(a[j]<min)
                min = a[j];
        }
        printf("Mamimum element is %d and minimum element is %d", max, min);
    }else 
        printf("Number of elements can't be negative or zero!");
    return 0;
}
