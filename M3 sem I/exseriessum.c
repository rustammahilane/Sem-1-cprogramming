// program to evaluate 1+ x/1! + x2/2! + x3/3!.....+ xn/n!
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double x,sum=1;
    printf("Enter value of x : ");
    scanf("%lf",&x);
    printf("Enter no terms in 1+ x/1! + x2/2! + x3/3!.....+ xn/n! : ");
    scanf("%d",&n);
  
    for (int i=1;i<n;i++){
        //getting value of denominator i.e factorial
        int factorial=1;
        for (int j=1; j<=i; j++){
            factorial*=j;
        }
        // summing up expression of term (i+1)th position
        sum+=pow(x,i)/factorial;
    }
    printf("Sum of series : %lf",sum);
}