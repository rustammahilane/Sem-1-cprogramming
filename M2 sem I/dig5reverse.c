/* if a 5 digit number is input through the keyboard
 write a program to revrese the number */
#include<stdio.h>
int main()
{
	int num,a,b,c,d,e,rev;
	printf("Enter a five digit number : ");
	scanf("%d", &num);
	if( num>=9999 && num<=100000){
    // getting digits of each place
	e=num%10;
	d=(num/10)%10;
	c=(num/100)%10;
	b=(num/1000)%10;
	a=(num/10000);
    printf("The reverse of the number %d is %d%d%d%d%d",num,e,d,c,b,a);
  }
	else
	printf("\n invalid num!");
    return 0;
}