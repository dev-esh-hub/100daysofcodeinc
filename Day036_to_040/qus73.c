// Q73: Find the sum of each row of a matrix and store it in an array.

#include<stdio.h>

int main(){
    int a,b;
    printf("Enter number of rows and columns of matrix: \n");
    scanf("%d %d", &a, &b);
    if(a>0 && b>0){
        int MAT[a][b];
        for(int i=0; i<a; i+=1){
            for(int j=0; j<b; j+=1){
                printf("Enter (%d,%d) element: ", i, j);
                scanf("%d", &MAT[i][j]);
            }
        }
        // To print the matrix:
        printf("The required matrix is: \n");
        for(int i=0; i<a; i+=1){
            for(int j=0; j<b; j+=1){
                printf("%d\t", MAT[i][j]);
            }
            printf("\n");
            printf("\v");
        }
        // To find sum of each row of matrix and storing in array:
        int arr[a];
        for(int i=0; i<a; i+=1){
            int sum = 0;
            for(int j=0; j<b; j+=1){
                sum = sum + MAT[i][j];
            }
            arr[i] = sum;
        }
        // Printing the array:
        printf("The array containing sum of each row is: \n");
        for(int i=0; i<a; i+=1){
            printf("%d\t", arr[i]);
        }
    }
    else 
        printf("Number of rows and columns can't be negative or zero!");
    return 0;
}
