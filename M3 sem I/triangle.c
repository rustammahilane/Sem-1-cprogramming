// given 3 sides, write a program to check whether triangle can be formed.
#include<stdio.h>
int main()
{    int a,b,c;
     printf("HELLO THERE!");
     printf("\nEnter 3 sides of triangle:\n");
     scanf("%d%d%d",&a,&b,&c);
     if(a>=b+c || b>=a+c || c>=a+b)
     {
     printf("No triangle can be formed!");
     
     }
     else{
     printf("Triangle can be formed!\n");
     printf("\nWITH RESPECT TO ANGLE\n");
     if((a*a== b*b+c*c) || (b*b==a*a+c*c) || (c*c==a*a+b*b))
     printf("Right triangle can be formed!\n");
     else if((a*a>b*b+c*c) || (b*b>a*a+c*c) || (c*c>a*a+b*b))
     printf("Obtuse triangle can be formed\n!");
     else if((a*a< b*b+c*c) || (b*b<a*a+c*c) || (c*c<a*a+b*b))
     printf("Acute triangle can be formed!\n");
     printf("\nWITH RESPECT TO SIDES\n");
     if(a==b && b==c && c==a)
     printf("Equilateral triangle can be formed!\n");
     else if ((a==b && b!=c) || (b==c && c!=a) || (a==c && c!=b))
     printf("Isosceles triangle can be formed!\n");
     else
     printf("Scalene triangle can be formed!\n");
     }
     return 0;
}    