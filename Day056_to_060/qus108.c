// Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. 
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// Optimizing  problem to O(n) using prefix and suffix product.

#include<stdio.h>

void product(int n, int num[], int answer[]){

    int prefix[n], suffix[n];
    prefix[0] = 1;
    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i - 1] * num[i - 1];
    }
    suffix[n - 1] = 1;
    for(int i = n - 2; i >= 0; i--){
        suffix[i] = suffix[i + 1] * num[i + 1];
    }
    for(int i = 0; i < n; i++){
        answer[i] = prefix[i] * suffix[i];
    }
}

int main(){
    int n;
    printf("Enter the number of elements you want to put in array:\n");
    scanf("%d", &n);
    int num[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &num[i]);
    }
    int answer[n];

    product(n, num, answer);

    printf("The new array is:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", answer[i]);
    }
    printf("\n");
    return 0;
}