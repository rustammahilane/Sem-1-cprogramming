#include<stdio.h>
#define max 100
void f(int a[],int n){
    int arr[n];
    //copying a to arr
    for (int i = 0; i < n; i++)
    arr[i] =a[i];
    // sorting for 2 times
    for (int i = 0; i < 2; i++){
        for (int j = i+1; j < n; j++){
            if(arr[i] < arr[j])
           {int temp = arr[i];
           arr[i] =arr[j];
           arr[j] = temp;}
        }
    }
    //searching
    int pos;
    for (int i = 0; i < n; i++){
        if(a[i] == arr[0])
        pos = i;
    }
    // shifting to make space for an extra element
    for (int i = n; i > pos; i--)
    a[i] = a[i-1];
    
    a[pos] =arr[1];
    a[pos+1]= arr[0] - arr[1];
    n++;
    for(int i = 0; i < n; i++){
        printf("%d  ",a[i]);
    }
}
int main()
{
    int arr[max],size;
    printf("Enter size of array:");
    scanf("%d",&size);
    for(int i=0; i<size ; i++)
    scanf("%d",&arr[i]);
    f(arr,size);
}