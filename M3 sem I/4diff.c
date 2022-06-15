/*Write a C program that accepts 4 real numbers from the keyboard and prints out the difference
(using 4-decimal places) of the maximum and minimum values of these numbers.
*/
#include<stdio.h>
#include<math.h>
int main()
{    float a,b,c,d;
     float diff1,diff2,diff3,diff4,diff5,diff6;
     printf("Enter 4 numbers :\n");
     scanf("%f%f%f%f",&a,&b,&c,&d);
     diff1= (a>b)? a-b:b-a; 
     diff2= (b>c)? b-c:c-b;
     diff3= (c>d)? c-d:d-c;
     diff4= (d>a)? d-a:a-d;
     diff5= (a>c)? a-c:c-a;
     diff6= (b>d)? b-d:d-b;
     if (diff1>=diff2 && diff1>=diff3 && diff1>=diff4 && diff1>=diff5 && diff1>=diff6)
     printf("Difference : %f",diff1);
     else if (diff2>=diff1 && diff2>=diff3 && diff2>=diff4 && diff2>=diff5 && diff2>=diff6)
     printf("Difference : %f",diff2);
     else if (diff1>=diff2 && diff1>=diff3 && diff1>=diff4 && diff1>=diff5 && diff1>=diff6)
     printf("Difference : %f",diff2);
     else if (diff3>=diff2 && diff3>=diff1 && diff3>=diff4 && diff3>=diff5 && diff1>=diff6)
     printf("Difference : %f",diff3);
     else if (diff4>=diff2 && diff4>=diff3 && diff4>=diff1 && diff4>=diff5 && diff4>=diff6)
     printf("Difference : %f",diff4);
     else if (diff5>=diff2 && diff5>=diff3 && diff5>=diff4 && diff5>=diff1 && diff5>=diff6)
     printf("Difference : %f",diff5);
     else if (diff6>=diff2 && diff6>=diff3 && diff6>=diff4 && diff6>=diff5 && diff6>=diff1)
     printf("Difference : %f",diff6);
     return 0;
}    