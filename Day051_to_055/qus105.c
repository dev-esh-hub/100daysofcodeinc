// Q105: Write a program to take an integer array nums of size n, and print the majority element. 
// The majority element is the element that appears strictly more than ⌊n / 2⌋ times. 
// Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

// Using O(n) time complexity:

#include<stdio.h>

int majority_element(int n, int arr[]){
    int max_val = arr[0];
    int min_val = arr[0];
    // To find min and max to find range/size of frequency array:
    for(int i = 1; i < n; i+=1) {
        if(arr[i] > max_val) 
            max_val = arr[i];
        if(arr[i] < min_val) 
            min_val = arr[i];
    }
    int range = max_val - min_val + 1;
    int freq[range];
    for(int i = 0; i < range; i+=1) 
        freq[i] = 0;
    // To count frequency:
    for(int i = 0; i < n; i+=1) {
        freq[arr[i] - min_val]+=1;
    }
    // To check for majority:
    for(int i = 0; i < range; i+=1) {
        if(freq[i] > n / 2) {
            return i + min_val;
        }
    }
    return -1;
}

int main(){
    int n;
    printf("Enter number of elements: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: \n", n);
    for(int i=0; i<n; i+=1){
        scanf("%d", &arr[i]);
    }
    int maj = majority_element(n, arr);
    if (maj!=-1)
        printf("The majority element is %d\n", maj);
    else 
        printf("(-1): No majority element!\n");
    return 0;
}