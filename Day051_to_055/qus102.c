// Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. 
// This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

// Using O(log n) time complexity. We would use binary seach for the same and also using function.

#include<stdio.h>

int ceil_fxn(int n, int arr[], int target){
    int low=0, high=n-1;
    int result=-1;
    while(low<=high){
        int mid=(low+high) / 2;
        if(arr[mid]>=target){
            result=mid;
            high=mid-1;
        }
        else
            low=mid+1;
    }
    return result;
}

int main(){
    int n;
    printf("Enter the numbers of elements you want to enter in the array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements (sorted ascending):\n", n);
    for(int i=0; i<n; i+=1){
        scanf("%d", &arr[i]);
    }
    int target;
    printf("Enter the target to perform ceil operation: \n");
    scanf("%d", &target);
    int index=ceil_fxn(n, arr, target);
    if (index == -1)
        printf(" (-1): No ceil exists for %d in the array.\n", target);
    else
        printf("The ceil of %d is %d at index %d.\n", target, arr[index], index);
    return 0;
}