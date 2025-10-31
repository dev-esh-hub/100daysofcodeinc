// Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include<stdio.h>

int repeated_element(int n, int arr[]) {  // Values range from 0 to n
    int freq[n + 1];
        for (int i = 0; i <= n; i+=1) {
        freq[i] = 0;
    }

    for (int i = 0; i < n; i+=1) {
        if (freq[arr[i]] == 1) {
            return arr[i];  // Found repeated element
        }
        freq[arr[i]] = 1;
    }
    return -1;  // Should not reach here
}

int main(){
    int n;
    printf("Enter number of elements you want to enter in array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements such that one element is repeated: \n", n);
    for(int i=0; i<n; i+=1){
        scanf("%d", &arr[i]);
    }
    int repeated = repeated_element(n, arr);
    printf("Repeated element is: %d\n", repeated);
    return 0;
}