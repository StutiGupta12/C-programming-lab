#include<stdio.h>
#include<math.h>
void main()
{
    int i=2, n, c;
    printf("Enter a number");
    scanf_s("%d", &n);
    c = 0;
    while (i < n / 2)
    {
        if (n % i == 0)
        {
            c = 1;
            break;
        }
    }
    if (n == 1)
    {
        printf("%d is neither prime or composite",n);
    }
    if (c == 0)
        printf("%d is prime", n);
    else
        printf("%d is composite", n);
}