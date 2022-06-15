// if a 5 digit number is input throug the keyboard,
// write a programt to calculate the sum of digits
#include<stdio.h>
int main()
{
	int num,a,b,c,d,e;
	printf("Enter a five digit number : ");
	scanf("%d", &num);
	if(num<=100000 && num>=9999)
   {// getting digits of each place
	e=num%10;
	d=(num/10)%10;
	c=(num/100)%10;
	b=(num/1000)%10;
	a=(num/10000);
	int total=a+b+c+d+e;
	printf("%d is the sum of the digits of the number %d.", total, num);
}
 else 
 printf("\nInvalid num!");
 return 0;
}