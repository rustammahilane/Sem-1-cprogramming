// To search for a key in an array using LINEAR SEARCH
#include<stdio.h>
#define max 50
int main()
{
    int arr[max], size, search;
    printf("Enter array size:");
    scanf("%d",&size);
    // array initialization
    for(int i = 0; i < size; i++){
        printf("Element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter search element:");
    scanf("%d",&search);
    int i;
    // loop for comaparing array elements with search
    for(i = 0; i < size; i++){
        if(search  == arr[i])
        break;
    }
    if(i == size)
    printf("Element not found");
    else
    printf("Element found at %d position",i+1);
    return 0;
}