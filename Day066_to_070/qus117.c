// Q117: Write a program to take two sorted arrays of size m and n as input.
//  Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include<stdio.h>

void mergesortedarray(int arr1[], int arr2[], int n1, int n2, int merged[]){
    int i=0, j=0, k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            merged[k]=arr1[i];
            k+=1;
            i+=1;
        }
        else {
            merged[k]=arr2[j];
            k+=1;
            j+=1;
        }
    }
    while (i<n1){
        merged[k]=arr1[i];
            k+=1;
            i+=1;
    }
    while (j<n2){
        merged[k]=arr2[j];
            k+=1;
            j+=1;
    }
}

int main(){
    int n1, n2;
    printf("Enter the number of elements for first and second array respectively: \n");
    scanf("%d %d", &n1, &n2);
    int arr1[n1], arr2[n2];
    printf("Enter %d elements for first array (SORTED):\n",n1);
    for(int i=0; i<n1; i+=1){
        scanf("%d", &arr1[i]);
    }
    printf("Enter %d elements for second array (SORTED):\n",n2);
    for(int i=0; i<n2; i+=1){
        scanf("%d", &arr2[i]);
    }
    int merged[n1+n2];
    mergesortedarray(arr1, arr2, n1, n2, merged);
    printf("Merged Sorted Arrray: \n");
    for(int i=0; i<n1+n2; i+=1){
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}