//To add numbers using function.
#include<stdio.h>
int add(int x[], int y);
int main()
{
    int n;
    printf("Enter no of numbers to add: ");
    scanf("%d",&n);
    if(n > 0){
        int a[n];   //array to store numbers
        printf("Enter the numbers: ");
        for(int i = 0; i < n; i++)
        scanf("%d",&a[i]);
        printf("Sum of numbers : %d",add(a,n));
    }
    else
    printf("Invalid input!");
}
int add(int x[], int y){
    int sum = 0;
    for(int i = 0; i < y; i++)
    sum += x[i];
    return sum;
}