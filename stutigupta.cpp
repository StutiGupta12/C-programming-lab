#include<stdio.h>
#include<math.h>
void main()
{
	float x1, x2, y1, y2, d;
	printf("Enter x and y co-ordinate of first point");
	scanf_s("%f%f", &x1, &y1);
	printf("Enter x and y co-ordinate of second point");
	scanf_s("%f%f", &x2, &y2);
	d = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	printf("Distance between the points is %.2f", d);
}
