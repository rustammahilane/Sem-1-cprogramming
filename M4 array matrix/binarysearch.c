// To search a key in an array using BINARY SEARCH
#include<stdio.h>
#include<conio.h>
#define max 50
int main()
{
    int arr[max], size, search;
    int first, last, mid;
    printf("Enter size of array:");
    scanf("%d",&size);
    printf("Enter elements in ascending order\n");
    for(int i = 0; i < size; i++){
        printf("Element %d:", i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter search element:");
    scanf("%d",&search);
    // binary search code snippet
    first = 0;
    last = size-1;
    mid = (first + last) / 2;
    while(first <= last){
        if(arr[mid] < search)
            first = mid+1;
        else if(arr[mid] == search){
            printf("%d found at location %d.\n",search,mid+1);
            break;
        }
        else
            last = mid - 1;
        mid = (first + last) / 2;
    }
    if(first > last)
        printf("Element not found!");
    return 0;
    getch();
}