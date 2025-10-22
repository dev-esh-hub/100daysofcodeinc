// Q113: Write a program to take an integer array arr and an integer k as inputs. 
// The task is to find the kth smallest element in the array. Print the kth smallest element as output.

#include<stdio.h>

int kthsmallest(int n, int arr[], int k){
    // First lets do sorting:
    for(int i=0; i<n-1; i+=1){
        for(int j=i+1; j<n; j+=1){
            if(arr[j] < arr[i]){
                int alt = arr[i];
                arr[i] = arr[j];
                arr[j] = alt;
            }
        }
    }
    // Now kth smallest elements would be at the k-1 index:
    return arr[k-1];
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
    int k;
    printf("Enter the value of k for finding kth smallest element: \n");
    scanf("%d", &k);
    if (k<1 || k>n) {
        printf("Invalid value of k. It should be between 1 and %d.\n", n);
        return 1;
    }
    int result = kthsmallest(n, arr, k);
    printf("The number %d smallest element in array is %d", k, result);
    return 0;
}