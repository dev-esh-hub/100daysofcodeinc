// Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. 
// The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. 
// Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. 
// If no solution exists, print "-1 -1".

#include<stdio.h>

struct Pair {
    int i;
    int j;
};
struct Pair sumequalstarget(int n, int nums[], int target){
    struct Pair p;
    for(p.i=0; p.i<n; p.i+=1){
        for(p.j=0; p.j<n; p.j+=1){
            if(p.i == p.j) continue;
            else {
                if(nums[p.i] + nums[p.j] == target){
                    return p;
                } 
            }
        }
    }
    // If no result found:
    p.i = -1;
    p.j = -1;
    return p;
}

int main(){
    int n;
    printf("Enter number of elements you want to enter in array: \n");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d positive values: \n", n);
    for(int i=0; i<n; i+=1){
        scanf("%d", &nums[i]);
    }
    int target;
    printf("Enter the target value: \n");
    scanf("%d", &target);
    struct Pair result = sumequalstarget(n, nums, target);
    printf("%d %d\n", result.i, result.j);
    return 0;
}