// Q72: Find the sum of all elements in a matrix.

#include<stdio.h>

int main(){
    int a,b, sum=0;
    printf("Enter the number of rows and columns to make matrix: \n");
    scanf("%d %d", &a, &b);
    int MAT[a][b];
    if(a>0 && b>0){
        for(int i=0; i<a; i+=1){
            for(int j=0; j<b; j+=1){
                printf("Enter (%d,%d) element:  ", i,j);
                scanf("%d", &MAT[i][j]);
            }
        }
        // To find sum of all elements of matrix:
        for(int i=0; i<a; i+=1){
            for(int j=0; j<b; j+=1){
                sum += MAT[i][j];
            }
        }
        printf("Sum of all elements of matrix is %d", sum);
    }
    else 
        printf("Order of matrix can't be negative or zero!");
    return 0;
}
