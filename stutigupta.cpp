#include<stdio.h>
void main()
{
    int i, n, n1=0, n2=1 , s=0;
    printf("Enter the limit");
    scanf_s("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%d\n", s);
        s = n1 + n2;
       
        n1 = i;
        n2 = s;
    }
}