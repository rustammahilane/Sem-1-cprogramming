// program to interchange principal and secondary matrix
#include<stdio.h>
#define maxsize 50
int main()
{
    int arr[maxsize][maxsize], row, col;
    printf("Enter no of rows:");
    scanf("%d",&row);
    printf("Enter no of column:");
    scanf("%d",&col);
    // initialisation of matrix
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("Element [%d,%d]:",i ,j);
            scanf("%d",&arr[i][j]);
        }
    }
    //printing entered matrix
    printf("Original matrix\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    // swapping of diagonal elements
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(i == j){
                int temp;
                temp = arr[i][j];
                arr[i][j] = arr[i][col-1-j];
                arr[i][col-1-j] = temp;
            }
        }
    }
    // printing the interchanged matrix
    printf("Diagonal interchanged matrix\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}