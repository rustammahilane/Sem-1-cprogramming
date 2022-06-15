//Write a program to display the greates of N numbers use malloc()
#include<stdio.h>
#include<stdlib.h>
int max(int p[],int n){
    int maximum = p[0];
    for(int i = 1; i < n; i++){
        if(maximum < p[i])
        maximum = p[i];
    }
    return maximum;
}
int main()
{
    int N;
    int *ptr;
    printf("Enter no of numbers : ");
    scanf("%d",&N);
    ptr  = (int*)malloc(N * sizeof(int));
    if(ptr == NULL){
        printf("Fail to allocate memory.\n");
    }
    else{
        printf("Enter N numbers : ");
        for(int i = 0; i < N; i++)
        scanf("%d",&ptr[i]);
        printf("Greatest number in the array is : %d\n", max(ptr, N));
        free(ptr);
        printf("ptr memory freed.\n");
    }
    return 0;
}
