// Q80: Multiply two matrices.

#include<stdio.h>

int main(){
    int r1,r2,c1,c2;
    printf("Enter the number of rows and columns for first matrix: \n");
    scanf("%d %d", &r1, &c1);
    printf("Enter the number of rows and columns for second matrix: \n");
    scanf("%d %d", &r2, &c2);
    printf("\n");
    if (r1>0 && r2>0 && c1>0 && c2>0){
        if (c1 == r2){
            // To input matrices:
            int A[r1][c1], B[r2][c2], C[r1][c2];
            printf("Input for matrix A:\n");
            for(int i=0; i<r1; i+=1){
                for(int j=0; j<c1; j+=1){
                    printf("Enter (%d,%d) element: ", i, j);
                    scanf("%d", &A[i][j]);
                }
            }
            printf("\n");
            printf("Input for matrix B:\n");
            for(int i=0; i<r2; i+=1){
                for(int j=0; j<c2; j+=1){
                    printf("Enter (%d,%d) element: ", i, j);
                    scanf("%d", &B[i][j]);
                }
            }
            printf("\n");
            // To print the two matrices:
            printf("Matrix A is: \n");
            for(int i=0; i<r1; i+=1){
                for(int j=0; j<c1; j+=1){
                    printf("%d\t", A[i][j]);
                }
                printf("\n\v");
            }
            printf("\n");
            printf("Matrix B is: \n");
            for(int i=0; i<r2; i+=1){
                for(int j=0; j<c2; j+=1){
                    printf("%d\t", B[i][j]);
                }
                printf("\n\v");
            }
            printf("\n");
            // To multiply two matrices and store in third matrix:
            for(int i=0; i<r1; i+=1){
                int sum = 0;
                for(int j=0; j<c2; j+=1){
                    int sum = 0; 
                    for(int k=0; k<c1; k+=1){
                        sum += A[i][k] * B[k][j];
                    }
                    C[i][j] = sum;
                }
            }
            // To print the resultant matrix:
            printf("The resultant matrix C is: \n");
            for(int i=0; i<r1; i+=1){
                for(int j=0; j<c2; j+=1){
                    printf("%d\t", C[i][j]);
                }
                printf("\n\v");
            }
        }else 
            printf("Matrix can't be multiplied as the number of column of first matrix and number of rows of second matrix are not equal!");
    }
    else 
        printf("Number of rows and columns can't be negative or zero!");
    return 0;
}