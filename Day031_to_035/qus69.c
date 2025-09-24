// Q69: Find the second largest element in an array.

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements you want to enter in the array: \n");
    scanf("%d", &n);
    int a[n];
    if(n>0){
        printf("Enter %d elements: \n", n);
        for(int i=0; i<n; i+=1){
            scanf("%d", &a[i]);
        }
        // To copy one array elements to another:
        int b[n];
        for(int i=0; i<n; i+=1){
            b[i] = a[i];
        }
        // Sorting elements in ascending:
        for(int i=0; i<n-1; i+=1){
            for(int j=i+1; j<n; j+=1){
                if(b[j] < b[i]){
                    int alt = b[i];
                    b[i] = b[j];
                    b[j] = alt;
                }
            }
        }
        // Finding second largest integer:
        printf("Second largest inteeger is %d", b[n-2]);
    }
    return 0;
}
