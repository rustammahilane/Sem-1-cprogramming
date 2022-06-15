// program to sum and multiply two matrices
#include<stdio.h>
#define maxsize 50
int main()
{
    int arr1[maxsize][maxsize],arr2[maxsize][maxsize];
    int r1,r2,c1,c2;
    int sum[maxsize][maxsize],multiply[maxsize][maxsize];
    // initialization matrix 1
    printf("Enter no of row and col of matrix 1: ");
    scanf("%d",&r1);
    scanf("%d",&c1);
    for(int i = 0; i < r1; i++)
    for(int j = 0; j < c1; j++){
        printf("Element [%d,%d] :",i,j);
        scanf("%d",&arr1[i][j]);
    }
    // initialization matrix 2
    printf("Enter no of row and col of matrix 2: ");
    scanf("%d",&r2);
    scanf("%d",&c2);
    for(int i = 0; i < r2; i++)
    for(int j = 0; j < c2; j++){
        printf("Element [%d,%d] :",i,j);
        scanf("%d",&arr2[i][j]);
    }
    // sum of matrices
    if(r1==r2 && c1==c2){
        printf("Sum of the matrices is\n");
        for(int i = 0; i < r1; i++){
            for(int j = 0; j < c1; j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];  
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
        }
    }
    else
    printf("Matrices can't be added!\n"); 
    
    // multiplication of matrices
    if(c1 != r2)
    printf("Matrices can't be multiplied!");
    else{
        printf("Matrices multiplication is\n");
        for(int i = 0; i < r1; i++){
            for(int j = 0; j < c2; j++){
                multiply[i][j] = 0;
                for(int k = 0; k < c1; k++)
                multiply[i][j] += arr1[i][k] * arr2[k][j];
            printf("%d\t",multiply[i][j]);
            }
        printf("\n");
        }
    }
    return 0;
}