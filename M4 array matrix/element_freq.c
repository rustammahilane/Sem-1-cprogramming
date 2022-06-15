//Write a program in C to count the frequency of each element of an array.
#include<stdio.h>
#define maxsize 100
int main()
{
    int arr[maxsize], size, freq[maxsize];
    printf("Enter array size :");
    scanf("%d",&size);
    // array initialization
    for (int i=0; i < size; i++)
    scanf("%d",&arr[i]);
    // loop to compare arrays
    for(int j=0; j < size; j++)
    {
        freq[j] = 1;
        // loop to compare array elements with arr[j]
        for(int l = j+1; l < size; l++)
        if( arr[l] == arr[j]){
            freq[j]++;  // incrementing frequency
            //assigning value as -1 to avoid multiple printing :refer line 25
            arr[l] = -1;  
        }
    }
    for(int k = 0; k < size; k++){
        if(arr[k] != -1)
        printf("%d occurs %d times.\n",arr[k],freq[k]);
    }
    return 0;
}