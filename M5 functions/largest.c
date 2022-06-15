//write a program to get the largest element of an array using function
#include<stdio.h>
#define max 100
int large(int n[]);
int main()
{
    int num[max], size;
    printf("Input no of elements to be stored in array:");
    scanf("%d",&size);
    printf("input array elements:\n");
    //array intitialization
    for(int i = 0; i < size; i++){
        printf("Element %d:",i);
        scanf("%d",&num[i]);
    }
    printf("Largest element in the array is: %d",large(num));
}
int large(int n[]){
    int i = 0;
    while(n[i] != '\0'){
        // considering first element is largest i.e n[0]
        if(n[0] < n[i])
        n[0] = n[i];        //assignment of larger element to n[0]
        i++;
    }
    return n[0];
}