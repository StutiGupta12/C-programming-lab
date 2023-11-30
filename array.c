#include <stdio.h>
#include <string.h>
void main()
{
    char str[20],str1[20];
    int l,i,j,flag=0;
    printf("\nEnter the string :- ");
    gets(str);
    l = strlen(str);
    for(i=0,j=l-1;i<l;i++,j--)
    {
        str1[j]=str[i];
    }
    for(i=0;i<l;i++)
    {
        if(str1[i]==str[i])
        {
            flag=0;
        }
        else
        {
            flag=-1;
            break;
        }
    }
    if(flag==0)
    {
        printf("String is pallindrome");
    }
    else{
        printf("String is not pallindrome");
    }
}