// Q110: Write a program to take an integer array arr and an integer k as inputs. 
// The task is to find the maximum element in each subarray of size k moving from left to right. 
// Print the maximum elements for each window separated by spaces as output.

#include<stdio.h>

void max_element(int n, int arr[], int k){
    printf("The maximum elements list in each subarray of size %d is: \n", k);
    for(int i=0; i<=n-k; i+=1){
        int max = arr[i];
        for(int j=i; j<i+k; j+=1){
            if (arr[j]>max)
                max = arr[j];
        }
        printf("%d ", max);
    }
}

int main(){
    int n;
    printf("Enter the number of elements you want to enter in the arrray: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: \n", n);
    for(int i=0; i<n; i+=1){
        scanf("%d", &arr[i]);
    }
    int k;
    printf("Enter the size of subarray: \n");
    scanf("%d", &k);
    max_element(n, arr, k);
    return 0;
}