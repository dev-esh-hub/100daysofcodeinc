// Q79: Perform diagonal traversal of a matrix.

#include<stdio.h>

int main(){
    int a,b;
    printf("Enter number of rows and columns of matrix: \n");
    scanf("%d %d", &a, &b);
    if(a>0 && b>0){
        if (a==b){ // Diagonal element can be accessed only of square matrix
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
            // To traverse diagonal of matrix:
            printf("The result after diagonal traversal is: \n");
            for(int column=0; column<b; column+=1){
                int i=0, j=column;
                while(i<a && j>=0){
                    printf("%d ", MAT[i][j]);
                    i+=1; j-=1;
                }
            }
            for(int row=1; row<a; row+=1){
                int i=row, j=b-1;
                while(i<a && j>=0){
                    printf("%d ", MAT[i][j]);
                    i+=1; j-=1;
                }
            }
        }
        else 
            printf("Diagonals can be accessed only of square matrix. Please enter square matrix!");
    }
    else 
        printf("Number of rows and columns can't be negative or zero!");
    return 0;
}