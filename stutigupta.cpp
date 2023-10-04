#include<stdio.h>
#include<math.h>
void main()
{
	char a;
	printf("Enter an alphabet from a-z");
	scanf_s("%c", &a);
	if ((a == 'A') || (a == 'a') || (a == 'e') || (a == 'E') || (a == 'I') || (a == 'i') || (a == 'o') || (a == 'O') || (a == 'U') || (a == 'u'))
	{
		printf("%c is vowel", a);
	}
	else
	{
		printf("%c is consonant", a);
	}
}
