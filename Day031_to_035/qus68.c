// Q68: Delete an element from an array.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements you want to enter in the array: \n");
    scanf("%d", &n);
    int a[n];
    if(n>0){
        printf("Enter %d elements: \n", n);
        for(int i=0; i<n; i+=1){
            scanf("%d", &a[i]);
        }
        // To delete elements by asking index:
        int index;
        printf("Enter the index you want to delete: \n");
        scanf("%d", &index);
        if (index<0 || index >=n){
            printf("Invalid index provided!");
            return 1;
        }
        int i=index;
        while(i<n-1){
            a[i] = a[i+1];
            i+=1;
        }
        // To print required arrray:
        printf("Updated array is: \n");
        for(int j=0; j<n-1; j+=1){
            printf("%d ", a[j]);
        }
    }else
        printf("Number of elements can't be negative or zero!");
    return 0;
}


/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/