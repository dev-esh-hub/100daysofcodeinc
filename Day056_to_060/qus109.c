// Q109: Write a program to take an integer array arr and an integer k as inputs. 
// Print the maximum sum of all the subarrays of size k.

#include<stdio.h>

int max_sum(int n, int arr[], int k){
    int maxsum = 0;
    for(int i=0; i<=n-k; i+=1){
        int sum = 0;
        for(int j=i; j<i+k; j+=1){
            sum = sum+arr[j];
        }
        if(sum>maxsum) 
            maxsum = sum;
    }
    return maxsum;
}

int main(){
    int n;
    printf("Enter number of elements you want to enter in the array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: \n", n);
    for(int i=0; i<n; i+=1){
        scanf("%d", &arr[i]);
    }
    int k;
    printf("Enter the size of which substring you want: \n");
    scanf("%d", &k);
    int result = max_sum(n, arr, k);
    printf("Maximum sum of subarray of size %d is: %d\n", k, result);
    return 0;
}