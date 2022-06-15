// program to insert an element in a array
#include<stdio.h>
#define max 100
int main()
{
    int arr[max];
    int insert,pos,size;
    printf("Enter size of array:");
    scanf("%d",&size);
    for (int  i = 0; i < size; i++)
    {
        printf("element %d:",i+1);
        scanf("%d",&arr[i]);
    } 
    printf("Enter position at which you want to insert an element:");
    scanf("%d",&pos);
    if (pos<0 || pos>size+1)
    printf("Invalid Input%%%%");
    else
    {
        //increasing size of array
        size++;
        printf("Enter element to insert:");
        scanf("%d",&insert);
        //shifting array to right till pos 
        for (int i = size; i >= pos; i--)
        {
            arr[i] = arr[i-1];
        }
        // inserting
        arr[pos-1] = insert;
        printf("Array after insetion");
        for ( int i = 0; i < size; i++)
        printf("\nElement %d: %d", i + 1, arr[i]);
    }
    return 0;   
}