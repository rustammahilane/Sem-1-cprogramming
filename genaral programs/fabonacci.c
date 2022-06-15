// to generate fibonacci series up to given number
#include<stdio.h>
int fabonacci(int t){
        if (t==0)
        return 0;
        if (t==1)
        return 1;
        return fabonacci(t-1)+fabonacci(t-2);
    }
int main()
{
    int n;
    printf("Enter no of terms in fibonacci series:");
    scanf("%d",&n);
    for (int i=0; i<n; i++)
    printf("%d\n",fabonacci(i));
    return 0;
}