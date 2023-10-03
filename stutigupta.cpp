#include<stdio.h>
void main()
{
	int a, b,ad,s,m,d;
	printf("Enter two no.s");
	scanf_s("%d%d", &a, &b);
	ad = a + b;
	s = a - b;
	d = a / b;
	m = a * b;
	printf("Sum is %d", ad);
	printf("\nAnswer of Subtraction is %d", s);
	printf("\nProduct is %d", m);
	printf("\nQuotient is %d", d);
}
