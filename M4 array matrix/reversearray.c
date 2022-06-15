///program to read an array of n elements and reverse it
#include<stdio.h>
int main()
{
    int size,a[50],temp=0;
    printf("Enter number of elements in the array: ");
    scanf("%d",&size);
    for ( int i=0; i<size; i++){
        printf("Element %d: ",i+1);
        scanf("%d",&a[i]);
    }
    // reversing the array elements
    for (int j=0; j<size/2; j++){
        temp=a[j];
        a[j]=a[size-j-1];
        a[size-j-1]=temp;
    }
    printf("\nAfter reversing the array");
    for (int k=0; k<size; k++)
    printf("\nElement %d: %d",k+1,a[k]);
    return 0;
}