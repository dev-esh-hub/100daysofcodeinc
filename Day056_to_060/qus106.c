// Q105: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. 
// Next greater element of an element in the array is the nearest element on the right which is greater than the current element. 
// If there does not exist next greater of current element, then next greater element for current element is -1.
/*
N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.
*/

#include<stdio.h>
void next_greater_element(int n, int arr[]){
    for(int i=0; i<n-1; i+=1){
        int flag=0;
        for(int j=i+1; j<n; j+=1){
            if(arr[j]>arr[i]){
                flag = 1;
                printf("%d, ", arr[j]);
                break;
            }
        }
        if (flag==0)
            printf("-1, ");
    }
    printf("-1");
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
    next_greater_element(n, arr);
    return 0;
}