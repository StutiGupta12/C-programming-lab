#include<stdio.h>
void main()
{
    int i, n, f = 1;
    printf("Enter a positive integer");
    scanf_s("%d", &n);
    if (n >= 0)
    {
        for (i = n; i > 0; i--)
        {
            f = i * f;
        }
        printf("Factorial is %d", f);
    }
    else {
        printf("Factorial of negative number is not eligible");
    }
    
}