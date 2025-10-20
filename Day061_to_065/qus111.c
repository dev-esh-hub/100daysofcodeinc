// Q111: Write a program to take an integer array arr and an integer k as inputs. 
// The task is to find the first negative integer in each subarray of size k moving from left to right. 
// If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

#include<stdio.h>

void find_negative(int n, int k, int arr[]){
    printf("The first negative integer list of each substring is: \n");
    for(int i=0; i<=n-k; i+=1){
        int firstneg = 0;
        for(int j=i; j<i+k; j+=1){
            if(arr[j]<0){
                firstneg = arr[j];
                break;
            }
        }
        printf("%d ", firstneg);
    }
}

int main(){
    int n;
    printf("Enter number of elements you want to enter: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: \n", n);
    for(int i=0; i<n; i+=1){
        scanf("%d", &arr[i]);
    }
    int k;
    printf("Enter size of subarray: \n");
    scanf("%d", &k);
    find_negative(n, k, arr);
    return 0;
}