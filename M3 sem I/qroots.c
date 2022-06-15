// find the roots of a quadratic equation
#include<stdio.h>
#include<math.h>
int main()
{
     int A, B, C;
     float D,root1,root2;
     printf("As you know quadratic equaton as\nAx^2 + Bx +C= 0");
     printf("\nEnter the values of A,B,C : \n");
     scanf("%d%d%d",&A,&B,&C);
     // checking whether root exist or not [discriminant>=0]
     D= B*B - 4.0*A*C;
     if (D>=0){
          // calculation of roots
          root1= (-B +pow(D,0.5))/(2*A);
          root2= (-B -pow(D,0.5))/(2*A);
          printf("Roots of [%d]x^2+[%d]x+[%d] = 0 are %f and %f",A,B,C,root1,root2);
     }
     else 
     printf("Roots do not exist!");
     return 0;
}    