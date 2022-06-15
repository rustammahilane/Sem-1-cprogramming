// Program to find factorial of a number using recursion
#include<stdio.h>
int fact(int a){
    if(a == 0)
    return 1;
    else
    return (fact(a-1)*a);
}
int main()
{
    int n;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    int f = fact(n);
    printf("Factorial : %d",f);
    return 0;
}