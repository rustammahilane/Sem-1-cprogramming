// Program to evaluate the equation y = x^1 + x^2 + ... + x^n
#include<stdio.h>
#include<math.h>
int func(int t, int v);
int main()
{
    int n,x;    // n = no of terms, x = value of x
    printf("Equation: y = x^1 + x^2 + ... + x^n\n");
    printf("Enter n and x respectiveley: ");
    scanf("%d%d",&n,&x);
    printf("y = %d",func(n,x));
    return 0;
}
int func(int t, int v){     // t = terms,   v = value
    int sum = 0;
    for (int  i = 1; i <= t; i++){
        sum += pow(v,i);
    }
    return sum;
}