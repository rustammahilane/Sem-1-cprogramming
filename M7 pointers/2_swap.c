// Program to swap two numbers.
#include<stdio.h>
int main()
{
    int a,b;
    int *p = &a;
    int  *q = &b;
    printf("Enter a and b:\n");
    scanf("%d%d",&a,&b);
    printf("------------\n");
    printf("a :%d\n",a);
    printf("b :%d\n",b);
    printf("address(a) :%p\n",&a);
    printf("address(b) :%p\n",&b);
    int t = *p;
    *p = *q;
    *q = t;
    printf("a :%d\n",a);
    printf("b :%d\n",b);
    printf("address(a) :%p\n",&a);
    printf("address(b) :%p\n",&b);
    return 0;
}