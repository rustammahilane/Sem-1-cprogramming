// To sort array in ascending order using SELECTION SORT
#include<stdio.h>
#define maxsize 50
int main()
{
    int arr[maxsize],size;
    int min,temp;
    printf("Enter size of array:");
    scanf("%d",&size);
    // initialisation of array
    for(int i=0; i<size ; i++)
    {
        printf("Element %d:", i+1);
        scanf("%d",&arr[i]);
    }
    // selection sort code snippet ASCENDING ORDER
    for( int i=0 ; i<size-1; i++){
       min = i;
       for(int j=i+1; j<size; j++)
       if(arr[min]>arr[j]){
           // changing index to as of minimum element
           min = j;
       }
       //swapping
       temp = arr[min];
       arr[min] = arr[i];
       arr[i] = temp;
       
    }

    for(int i=0; i < size; i++)
    printf("%d\n", arr[i]);
    return 0;
}