// Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. 
// The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. 
// Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. 
// If no solution exists, print "-1 -1".

#include <stdio.h>

void sumequalstarget(int n, int nums[], int target) {
    for(int i = 0; i < n; i+=1) {
        for(int j = 0; j < n; j+=1) {
            if(i == j) 
                continue;
            if(nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return;
            }
        }
    }
    // If no result found
    printf("-1 -1\n");
}

int main() {
    int n;
    printf("Enter number of elements you want to enter in array:\n");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d positive values:\n", n);
    for(int i = 0; i < n; i+=1) {
        scanf("%d", &nums[i]);
    }
    int target;
    printf("Enter the target value:\n");
    scanf("%d", &target);
    sumequalstarget(n, nums, target);
    return 0;
}