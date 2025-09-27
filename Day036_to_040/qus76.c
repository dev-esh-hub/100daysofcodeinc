// Q76: Check if a matrix is symmetric.

#include<stdio.h>

int main(){
    int a,b;
    printf("Enter number of rows and columns of matrix: \n");
    scanf("%d %d", &a, &b);
    if(a>0 && b>0){
        if (a==b){
            int MAT[a][b];
            for(int i=0; i<a; i+=1){
                for(int j=0; j<b; j+=1){
                    printf("Enter (%d,%d) element: ", i, j);
                    scanf("%d", &MAT[i][j]);
                }
            }
            printf("\n");
            // To print the matrix:
            printf("The required matrix is: \n\n");
            for(int i=0; i<a; i+=1){
                for(int j=0; j<b; j+=1){
                    printf("%d\t", MAT[i][j]);
                }
                printf("\n");
                printf("\v");
            }
            // A symmetric matrix is a matrix whose transpose is equal to the same matrix!
            // To find and store transpose.
            int ALTMAT[a][b];
            for(int i=0; i<a; i+=1){
                for(int j=0; j<b; j+=1){
                    ALTMAT[i][j] = MAT[j][i];
                }
            }
            // To print transpose matrix:
            printf("The resultant transpose matrix is:\n");
            for(int i=0; i<a; i+=1){
                for(int j=0; j<b; j+=1){
                    printf("%d\t", ALTMAT[i][j]);
                }
                printf("\n");
                printf("\v");
            }
            printf("\n");
            // To check wheather symmetric or not:
            int flag = 0;
            for(int i=0; i<a; i+=1){
                for(int j=0; j<b; j+=1){
                    if(MAT[i][j]!=ALTMAT[i][j]){
                        flag = 1;
                        break;
                    }
                }
            }
            if (flag==0){
                printf("Matrix is symmetric!");
            }
            else 
                printf("Matrix is not symmetric!");
        }
        else 
            printf("Only square matrix can be tested for symmetricity. \nPlease enter a square matrix!");
    }
    else 
        printf("Number of rows and column can't be negative or zero!");
    return 0;
}