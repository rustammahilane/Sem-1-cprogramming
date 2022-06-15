//To find the sum of series 1 + 1/3! + 1/5! +... + 1/N! using recursion
#include <stdio.h>
// functionto calculate factorial
int fact(int a){
    if(a == 0)
    return 1;
    else
    return (fact(a-1)*a);
}
// function to calculate sum of series
double func(int n){
    if(n == 1)
    return 1;
    else
    return (func(n-2) + (double)1/fact(n));
}
int main()
{
    int N;
    printf("Equation: 1 + 1/3! + 1/5! +... + 1/N!\n");
    printf("Enter value of N: ");
    scanf("%d",&N);
    if(N%2 == 0 || N<0)     // N should be an odd number
    printf("Invalid N!! N should be an odd natural number.");
    else
    printf("Sum of series: %lf",func(N));
}