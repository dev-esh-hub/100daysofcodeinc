// Q74: Find the transpose of a matrix.

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
        // To transpose the matrix:
        int ALTMAT[b][a];
        for(int i=0; i<a; i+=1){
            for(int j=0; j<b; j+=1){
                ALTMAT[j][i] = MAT[i][j];
            }
        }
        // To print the transposed matrix:
        printf("The resultant transposed matrix is: \n\n");
        for(int i=0; i<b; i+=1){
            for(int j=0; j<a; j+=1){
                printf("%d\t", ALTMAT[i][j]);
            }
            printf("\n");
            printf("\v");
        }
    }
    return 0;
}
