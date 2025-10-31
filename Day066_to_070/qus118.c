// Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include<stdio.h>

int find_the_missing_no(int n, int arr[]){
    int total = n * (n + 1) / 2; // total sum upto n 
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i]; // sum of only elements in array
    }
    return total - sum; // when total - sum is done so ony the element missing is lef over
}

int main(){
    int n;
    printf("Enter the number of elements you want to enter in array: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements (from 0 to %d including both) except one: \n", n, n);
    for(int i=0; i<n; i+=1){
        scanf("%d", &arr[i]);
    }
    int missing = find_the_missing_no(n, arr);
    printf("The missing number is: %d\n", missing);
    return 0;
}