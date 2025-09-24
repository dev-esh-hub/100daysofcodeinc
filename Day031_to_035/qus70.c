// Q70: Rotate an array to the right by k positions.

#include<stdio.h>

int main(){
    int n;
    printf("Enter number of elements you want to enetr in array: \n");
    scanf("%d", &n);
    int a[n];
    if(n>0){
        printf("Enter %d elements: \n", n);
        for(int i=0; i<n; i+=1){
            scanf("%d", &a[i]);
        }
        printf("Original array :\n");
        for(int i=0; i<n; i+=1){
            printf("%d ", a[i]);
        }
        // To shift k positions:
        int k, b[n];
        printf("\nEnter the number of positions upto which you want to rotate the array: \n");
        scanf("%d", &k);
        k= k % n; // If k > n so to normalise it.
        for(int i=0; i<n; i+=1){
            b[(i+k)%n] = a[i];
        }
        // To copy the rotated array in original array (so that rotation can be permanent):
        for(int i=0; i<n; i+=1){
            a[i] = b[i];
        }
        printf("Rotated array is: \n");
        for(int i=0; i<n; i+=1){
            printf("%d ", a[i]);
        }
    }
    else 
        printf("Number of elemnts can't be neagtive or zero!");
    return 0;
}
