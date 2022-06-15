// Write a program to arrange N names in alphabetical order
// using dynamic memory allocation.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int N;
    char **p;
    printf("Enter no of names: ");
    scanf("%d",&N);
    p = (char**)malloc(N*sizeof(char));
    for(int i = 0; i < N; i++){
        *(p + i) = (char*)malloc(20*sizeof(char));
    }
    for (int i = 0; i < N; i++){
        printf("Enter name %d:", i+1);
        scanf("%s",*(p+i));
    }
    for(int i =0; i < N-1; i++){
        for(int j = 0; j < N-i-1; j++){
            if(strcmp(*(p+j), *(p+j+1)) == 1){
                char *temp = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = temp;
            }
        }
    }
    printf("Names after sorting are\n");
    for (int i = 0; i < N; i++)
    puts(*(p+i));
    return 0;
}