// Q67: Insert an element in an array at a given position.
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements you want to enter in the array: \n");
    scanf("%d", &n);
    int a[n];
    if(n>0){
        printf("Enter %d elements:\n", n);
        for(int i=0; i<n; i+=1){
            scanf("%d", &a[i]);
        }
        // To make an array of 1 elements more:
        int b[n+1];
        for(int i=0; i<n; i+=1){
            b[i] = a[i];
        }
        // To insert an element at given index;
        int index, key;
        printf("Enter the index and element you want to enter: \n");
        scanf("%d %d", &index, &key);
        if (index<0 || index >n){
            printf("Invalid index provided!");
            return 1;
        }
        int i=n;
        while(i>index){
            b[i] = b[i-1];
            i-=1;
        }
        b[index] = key;
        // To print required array:
        printf("Updated array is: \n");
        for(int j=0; j<n+1; j+=1){
            printf("%d ", b[j]);
        }
    }
    else
        printf("Number of elements can't be negative or zero!");
    return 0;
}
