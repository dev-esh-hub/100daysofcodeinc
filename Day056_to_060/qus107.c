// Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. 
// Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. 
// If there does not exist next greater of current element, then previous greater element for current element is -1.
/*
N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.
*/

#include<stdio.h>

void previous_greater_element(int n, int arr[]){
    for(int i = 0; i < n; i+=1){
        int biggest = -1;
        for(int j = i - 1; j >= 0; j-=1){
            if(arr[j] > arr[i]){
                biggest = arr[j];
                break;
            }
        }
        // Comma only if it's not the last element
        if(i != n - 1)
            printf("%d, ", biggest);
        else
            printf("%d", biggest);
    }
}
int main(){
    int n;
    printf("Enter the number of elements you want to enter in array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: \n", n);
    for(int i=0; i<n; i+=1){
        scanf("%d", &arr[i]);
    }
    previous_greater_element(n, arr);
    return 0;
}