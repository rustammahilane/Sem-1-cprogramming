// To sort array in ascending order using BUBBLE SORT
#include<stdio.h>
#define maxsize 100

int main()
{
    int arr[maxsize],size;
    int temp;
    printf("Enter size of array:");
    scanf("%d",&size);
    // initialisation of array
    for(int i=0; i<size ; i++)
    {
        printf("Element %d:", i+1);
        scanf("%d",&arr[i]);
    }
    // buble sort code snippet
    for( int i=0 ; i<size-1; i++){
        for(int j=0; j<size-1-i; j++){
          if(arr[j]>arr[j+1]){
              temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
            }
        }
    }

    for(int i=0; i < size; i++)
    printf("%d\n", arr[i]);
    return 0;
}