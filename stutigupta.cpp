#include<stdio.h>
#include<math.h>
void main()
{
    int i, num, r, sum = 0;
    printf("Enter a number");
    scanf_s("%d", &num);
    while (num > 0)
    {
        r = num % 10;
        sum = sum + r;
        num = num / 10;
    }
    printf("Sum of digits is %d", sum);
}
