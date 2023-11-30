#include <stdio.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
void main()
{
    int n,ans;
    printf("Enter a number");
    scanf("%d",&n);
    ans=fact(n);
    printf("Factorial is %d",ans);
}