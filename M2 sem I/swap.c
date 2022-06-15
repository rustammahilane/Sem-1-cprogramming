/*Program to swap two numbers using a temporary variable. Also print the original
and exchanged values.
*/

#include<stdio.h>
int main()
{   int a,b,temp;
    printf("Ente value of a:");
    scanf("%d",&a);
    printf("Ente value of b:");
    scanf("%d",&b);
    printf("values of a and b before swap:%d\t%d",a,b);
    //swapping
    temp=a;
    a=b;
    b=temp;
    printf("\nvalues of a and b after swap:%d\t%d",a,b);

    return 0;
}