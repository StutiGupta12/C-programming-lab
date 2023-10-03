#include<stdio.h>
void main()
{
	float l, b, s, r, pr, ar, ps, as, pc, ac;
	printf("Enter length and breadth of rectangle");
	scanf_s("%f%f", &l, &b);
	pr = 2 * (l + b);
	ar = l * b;
	printf("Perimeter and area of rectangle is %.2f and %.2f", pr, ar);
	printf("\nEnter side of square");
	scanf_s("%f", &s);
	ps = 4 * s;
	as = s * s;
	printf("Perimeter and area of square is %.2f and %.2f", ps, as);
	printf("\nEnter radius of circle");
	scanf_s("%f", &r);
	pc = 2 * 3.14 * r;
	ac = 3.14 * r * r;
	printf("Perimeter and area of circle is %.2f and %.2f", pc, ac);
}
