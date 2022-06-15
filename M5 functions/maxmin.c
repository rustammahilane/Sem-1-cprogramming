// Program to find out maximum and minimum of some values 
// using function
#include<stdio.h>
int max(int a[],int size);
int min(int a[],int size);
int main()
{
    int n;
    printf("Input no of values:");
    scanf("%d",&n);
    int nums[n];
    printf("Enter values:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&nums[i]);
    }
    printf("max: %d\n",max(nums,n));
    printf("Min: %d\n",min(nums,n));
}

int max(int a[],int size){
    int max = a[0];
    for (int i = 0; i < size; i++){
        if(max < a[i])
        max = a[i];
    }
    return max;
}

int min(int a[],int size){
    int min = a[0];
    for (int i = 0; i < size; i++){
        if(min > a[i])
        min = a[i];
    }
    return min;
}