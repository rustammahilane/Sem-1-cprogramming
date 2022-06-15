// write a origram to transpose a matrix
#include<stdio.h>
#define maxsize 100
int main()
{
    int arr[maxsize][maxsize],trans[maxsize][maxsize];
    int row,col;
    // initialisation of matrix
    printf("Enter no of row: ");
    scanf("%d",&row);
    printf("Enter no of column: ");
    scanf("%d",&col);
    for ( int i = 0; i < row; i++){
        for ( int j = 0; j < col; j++){
            printf("Element [%d,%d]:",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    // assigning values to trans[][]
    for( int i = 0; i < col; i++){
        for( int j = 0; j < row; j++){
            trans[i][j]=arr[j][i];
        }
    }
    // printking oringinal matrix
    for( int i = 0; i < row; i++){
        for( int j = 0; j < col; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    // printing trans[][]
    printf("The transpose of the matrix is\n");
    for( int i = 0; i < col; i++){
        for( int j = 0; j < row; j++){
            printf("%d\t",trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}