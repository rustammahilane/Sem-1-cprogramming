/*Write a C program to read a matrix and print it's diagonals and find the sum 
of diagonal elements */
#include<stdio.h>
#define maxsize 100
int main()
{
    int arr[maxsize][maxsize];
    int row,col, dsum = 0;
    // initialization of matrix
    printf("Enter no of rows :");
    scanf("%d",&row);
    printf("Enter no of column:");
    scanf("%d",&col);
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
        printf("Element [%d,%d] :", i+1, j+1);
        scanf("%d",&arr[i][j]);
        }
    }   
    for(int k = 0; k < row; k++){
        for(int l = 0; l < col; l++){
            // diagonals have equal indexes in rows and columns
            if(k == l){
                printf("%d",arr[k][l]);
                // addition of diagonal element to dsum
                dsum += arr[k][l];
            }
            else
            printf("  ");
        }
        printf("\n");
    }
    printf("The sum of diagonal elements: %d", dsum);
    return 0;
}