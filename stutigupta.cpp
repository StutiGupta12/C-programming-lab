#include<stdio.h>
#include<math.h>
void main()
{
int a,b;
printf("Enter a Number");
scanf_s("%d", &a);
b = a % 2;
if (b == 0)
{
	printf("%d is even", a);
}
else
{
	printf("%d is odd", a);
}
}
