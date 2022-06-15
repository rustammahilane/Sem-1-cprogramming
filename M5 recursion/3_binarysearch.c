// To search for number using binary search using recursion
#include<stdio.h>
int bsearch(int search_num, int a[], int first, int last){
    int mid =  (first +last)/2;
    if(first > last)
    return -1;
    if(search_num == a[mid])
    return mid;
    else if(search_num > a[mid])
    bsearch(search_num, a, mid+1, last);
    else if(search_num < a[mid])
    bsearch(search_num, a, first, mid-1);
}
int main()
{
    int arr[100], size, search;
    printf("Enter size of array:");
    scanf("%d",&size);
    printf("Enter elements in ascending order\n");
    // array initialization
    for(int i = 0; i < size; i++){
        printf("Element %d:", i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter search element:");
    scanf("%d",&search);
    int found_index = bsearch(search, arr, 0, size-1);
    if(found_index == -1)
    printf("Element not found.");
    else
    printf("Element found at index %d.",found_index);
    return 0;
} 