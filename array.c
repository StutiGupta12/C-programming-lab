#include<stdio.h>
void psbyval(int a,int b)
{
   int c=a;
   a=b;
   b=c;
   printf("Swapping by pass by value\na=%d\nb=%d",a,b);
}
void psbyref(int a,int b)
{
   int *c,*d=&b,*f=&a;
   c=f;
   f=d;
   d=c;
   printf("\nSwapping by pass by reference\na=%d\nb=%d",*f,*d);

}
void main()
{
   int a,b;
   printf("Enter two numbers");
   scanf("%d%d",&a,&b);
   psbyval(a,b);
   psbyref(a,b);
}