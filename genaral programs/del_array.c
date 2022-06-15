#include<stdio.h>
#define max 50
int main()
{
    int arr[max],delpos,size;
    printf("Enter array size:");
    scanf("%d",&size);
    for (int i=0; i<size; i++){
        printf("Element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter element position you want to delete :");
    scanf("%d",&delpos);
    if (delpos<size && delpos>=0)
    for (int j=delpos; j<=size; j++){
        arr[j-1]=arr[j];
        }
    else 
    printf("Invalid position!");
    size--;
    for (int k=0; k<size; k++)
    printf("element %d:%d\n",k+1,arr[k]);
    return 0;
}