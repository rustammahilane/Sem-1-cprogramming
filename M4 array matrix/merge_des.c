// Write a program in C to merge two arrays of same size sorted in 
//descending order.
#include<stdio.h>
#define maxsize 100
int main()
{   
    //  variable declarations
    int arr1[maxsize],size1,arr2[maxsize],size2;
    int merged[2*maxsize], max, temp;
    // initialisaton of array1
    printf("Enter first array size:");
    scanf("%d",&size1);
    for ( int i=0; i< size1; i++){
        printf("Element %d:",i+1);
        scanf("%d",&arr1[i]);
    }
    // inintialisation of array2
    printf("Enter second array size:");
    scanf("%d",&size2);
    for ( int j=0; j< size2; j++){
        printf("Element %d:",j+1);
        scanf("%d",&arr2[j]);
    }
    // array size test
    if( size1 != size2 ){
        printf(" Array sizes are not equall NO MERGING!");
    }
    else
    {   
        // assigning values in merged
        for (int k = 0; k < size1; k++)
        merged[k] = arr1[k];
        for (int l = size1; l < size1 + size2; l++)
        merged[l] = arr2[l - size1];
        // selection sort
        for (int i = 0; i < size1 + size2 - 1; i++)
        {
            max=i;
            for ( int j=i+1; j < size1 + size2; j++)
            {
                if( merged[j] > merged[max])
                max = j;
            }
            // swapping
            temp = merged[i];
            merged[i] = merged[max];
            merged[max] = temp;
        }
        printf("Merged array in descending order:");
        for (int k = 0; k < size1+size2; k++)
        printf("%d ",merged[k]);
    }
    return 0;
}