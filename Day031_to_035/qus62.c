// Q62: Reverse an array without taking extra space.
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements you want to enter: \n");
    scanf("%d", &n);
    int a[n], altk;
    if (n>0){
        printf("Enter %d elements: \n", n);
        for(int i=0; i<n; i+=1){
            scanf("%d", &a[i]);
        }
        // To show current situation of arrray:
        printf("\nOriginal array is: \n");
        for(int j=0; j<n; j+=1){
            printf("%d ", a[j]);
        }
        printf("\n");
        // To reverse the array (by swapping the elements):
        for(int k=0; k<n/2; k+=1){ // we take n/2 here because if only n is taken so after n/2 elements the array will again get reversed and will end up unchanged.
            altk = a[k];
            a[k] = a[n-1-k];
            a[n-1-k] = altk;
        }
        // To print the reversed array:
        printf("The reversed array is: \n");
        for(int l=0; l<n; l+=1){
            printf("%d ", a[l]);
        }
    }
    else{
        printf("Number of elements can't be negative or zero!");
    }
    return 0;
}
