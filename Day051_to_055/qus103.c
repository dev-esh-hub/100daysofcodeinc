// Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. 
// The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. 
// If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. 
// If no such index exists, print -1.

// Using O(n) time complexity.

#include<stdio.h>

int Pivot_index(int n, int arr[]){
    int totalsum=0, leftsum=0;
    // To calculate total sum of array:
    for(int i=0; i<n; i+=1){
        totalsum += arr[i];
    }
    // Traversing array to check for pivot index:
    for(int i=0; i<n; i+=1){
        int rightsum = totalsum - leftsum - arr[i];
        if(leftsum == rightsum){
            return i;
        }
        leftsum += arr[i];
    }
    return -1;
}
int main(){
    int n;
    printf("Enter number of elements you want to enter in array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: \n", n);
    for(int i=0; i<n; i+=1){
        scanf("%d", &arr[i]);
    }
    int pvt = Pivot_index(n,arr);
    printf("Pivot index: %d\n", pvt);
    return 0;
}