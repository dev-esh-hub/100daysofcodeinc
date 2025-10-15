// Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. 
// Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

// Using O(log n) timr complexity:

#include<stdio.h>

long long sum(int k){
    // To find sum:
    return (long long )k * (k+1)/2; // Since sum of n natural numbers is n*(n+1)/2
}

int Find_pivot(int n){
    int low=1, high=n;
    while(low<=high){
        int mid = (low+high)/2;
        long long leftsum = sum(mid);
        long long rightsum = sum(n) - sum(mid-1); // mid - 1 since mid term is neither left nor right!
        if(leftsum == rightsum){
            return mid;
        }
        else if(leftsum < rightsum){
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n;
    printf("Enter number of elements: \n");
    scanf("%d", &n);
    int pvt = Find_pivot(n);
    printf("Pivot integer: %d\n", pvt);
    return 0;
}