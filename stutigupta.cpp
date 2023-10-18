#include<stdio.h>
#include<math.h>
void main()
{
    int num, sum = 0, r, l=0, num1;
    printf("Enter a number");
    scanf_s("%d", &num);
    num1 = num;
    while (num > 0)
    {
        l++;
        num = num / 10;
    }
    num = num1;
    while (num > 0)
    {
        r = num % 10;
        sum = sum + pow(r, l);
        num = num / 10;
    }
    if (num1 == sum)
    {
        printf("Number is an armstrong number");
    }
    else
    {
        printf("Number is not an armstrong number");
    }
}