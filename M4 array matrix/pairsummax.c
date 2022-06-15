// Find the pair of numbrers in an unsorted array such that 
// their sum is the largest 
#include<stdio.h>
#define maxsize 50
int main()
{
    int arr[maxsize],size;
    int sum=0;
    printf("Enter size of array:");
    scanf("%d",&size);
    // initialization of array
    for(int i = 0; i < size; i++){
        printf("Element %d: ", i+1);
        scanf("%d",&arr[i]);
    }
    // buble sort code snippet USED FOR TWO TIMES
    for( int i=0 ; i < 2; i++){
        for(int j=0; j<size-1-i; j++){
          if(arr[j]>arr[j+1]){
              int temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
            }
        }
    }
    // largest two numbers are sorted at the end of array
    sum = arr[size-1] + arr[size-2];
    printf("Sum of largest pair: %d", sum);
    return 0;
}