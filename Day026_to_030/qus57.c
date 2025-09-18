// Q57: Find the sum of array elements.
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements you want to enter in the array: \n");
    scanf("%d", &n);
    int a[n], i, j, sum = 0;
    if (n>0){
        printf("Enter %d elements, you want to enter in array in single line (separated by space):\n", n);
        // To take input of array:
        for(i=0; i<=n-1; i+=1){
            scanf("%d", &a[i]);
        }
        // To find sum :
        for (j=0; j<=n-1; j+=1){
            sum += a[j];
        }
        printf("Sum of elements of array are %d", sum);
    }else 
        printf("Number of elements can't be negative or zero!");
    return 0;
}
