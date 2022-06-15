#include<stdio.h>
#define max 50
int main()
{
     int arr[max],size,in,temp;
     printf("Enter size of array:");
     scanf("%d",&size);
     for (int i=0; i<size; i++){
          printf("Element %d:",i+1);
          scanf("%d",&arr[i]);
     }
     // bubble sort
     for (int j=0; j<size-1; j++){
          for (int k=0; k<size-1-j; k++){
               if( arr[k]>arr[k+1]){
                    temp=arr[k];
                    arr[k]=arr[k+1];
                    arr[k+1]=temp;
               }
          }
     }
     /* seletion sort
        for(int k=0; k<size; k++){
        int min=k;
        for(int j=k+1; j<size; j++)
        if(arr[j]<arr[min]){
            min=j;
        }
        temp=arr[k];
        arr[k]=arr[min];
        arr[min]=temp;
     }
     */
     for (int l=0; l<size; l++)
     printf("Element %d: %d\n",l+1,arr[l]);
     return 0;     
}