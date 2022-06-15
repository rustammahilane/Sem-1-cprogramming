//Program to find GCD and LCM of two given numbers.
#include<stdio.h>
int main()
{
    int a,b,gcd,lcm;
    int lower,upper;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    lower= (a>=b)? b:a;
    upper= (a>=b)? a:b;
    // calculation of lcm
    for (int k=upper; k<=upper*lower; k++)
    {
        if (k%upper==0 && k%lower==0)
        {
            lcm=k;
            break;
        }
    }
    // calculation of gcd
    for (int i=lower; i>=1; i--)
    {
        if(upper%i==0 && lower%i==0)
        {
           gcd=i;
           break; 
        }
    }
   printf("LCM : %d\nGCD : %d\n",lcm,gcd);
   return 0;
}    