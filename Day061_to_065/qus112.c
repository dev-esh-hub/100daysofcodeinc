// Q112: Write a program to take an integer array arr as input. 
// The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. 
// Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include<stdio.h>

int max_sum(int n, int arr[]){
    int max_end = arr[0];
    int maximum = arr[0];
    for(int i=1; i<n; i+=1){
        if(max_end + arr[i] > arr[i])
            max_end += arr[i];
        else 
            max_end = arr[i];
        if (max_end > maximum)
            maximum = max_end;
    }
    return maximum;
}

int main(){
    int n;
    printf("Enter number of elements:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elemnts: \n", n);
    for(int i=0; i<n; i+=1){
        scanf("%d", &arr[i]);
    }
    int result = max_sum(n, arr);
    printf("Maximum sum of any contigous subarray is: %d", result);
    return 0;
}