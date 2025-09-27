// Q75: Add two matrices.

#include<stdio.h>

int main(){
    int r1, c1, r2, c2;
    printf("Enter number of rows and columns of first matrix: \n");
    scanf("%d %d", &r1, &c1);
    printf("Enter number of rows and columns of second matrix: \n");
    scanf("%d %d", &r2, &c2);
    printf("\n");
    if(r1>0 && c1>0 && r2>0 && c2>0){
        if(r1==r2 && c1==c2){ // Condition for adding two matrices!
            // To accept first and scond matrix:
            int A[r1][c1], B[r2][c2];
            printf("For First matrix:\n");
            for(int i=0; i<r1; i+=1){
                for(int j=0; j<c1; j+=1){
                    printf("Enter (%d,%d) element: ", i,j);
                    scanf("%d", &A[i][j]);
                }
            }
            printf("\n");
            printf("For second matrix:\n");
            for(int i=0; i<r2; i+=1){
                for(int j=0; j<c2; j+=1){
                    printf("Enter (%d,%d) element: ", i,j);
                    scanf("%d", &B[i][j]);
                }
            }
            printf("\n");
            // To print the two matrices:
            printf("First matrix is: \n");
            for(int i=0; i<r1; i+=1){
                for(int j=0; j<c1; j+=1){
                    printf("%d\t", A[i][j]);
                }
                printf("\n");
                printf("\v");
            }
            printf("\n");
            printf("Second matrix is: \n");
            for(int i=0; i<r2; i+=1){
                for(int j=0; j<c2; j+=1){
                    printf("%d\t", B[i][j]);
                }
                printf("\n");
                printf("\v");
            }
            printf("\n");
            // To add two matrices and store in third matrix:
            int C[r1][c1];
            for(int i=0; i<r1; i+=1){
                for(int j=0; j<c1; j+=1){
                    C[i][j] = A[i][j] + B[i][j];
                }
            }
            // To print resultant matrix:
            printf("The resultant matrix after sumation is: \n");
            for(int i=0; i<r1; i+=1){
                for(int j=0; j<c1; j+=1){
                    printf("%d\t", C[i][j]);
                }
                printf("\n");
                printf("\v");
            }
        }
        else 
            printf("Your first and second matrix are not of same order. \nAddition of matrices can be done only of same order matrices!\n");
    }
    else 
        printf("Number of rows and columns can't be negative or zero!\n");
    return 0;
}