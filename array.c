#include <stdio.h>
int add(int x,int y)
{
    int z=x+y;
    return z;
}
int sub(int a,int b)
{
    int c=a-b;
    return c;
}
int mult(int d,int e)
{
    int f=d*e;
    return f;
}
int div(int g,int h)
{
    if(h!=0)
    {
    int i=g/h;
    return i;
    }
    else
    {
        printf("Error denominator cannot be zero");
        return 0;
    }
}
void main()
{
    int a,b,ch,x,y,z,f;
    printf("Menu:\n1.Add\n2.Subtract\n3.Multiplication\n4.Division\n");
    printf("Enter your choice from 1 to 4");
    scanf("%d",&ch);
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case 1:
        x=add(a,b);
        printf("Sum is %d",x);
        break;
        case 2:
        y=sub(a,b);
        printf("Subtraction is %d",y);
        break;
        case 3:
        z=mult(a,b);
        printf("Product is %d",z);
        break;
        case 4:
        f=div(a,b);
        printf("Quotient is %d",f);
        break;
        default:
        printf("Error!Try agan by entering choice from 1 to 4");
    }
}