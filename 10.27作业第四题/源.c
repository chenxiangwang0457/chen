#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void main()
{
	char a, t;
	t = scanf("%s", &a);
	if (a == 'b')
	{
		printf("balance=3000");
	}
	else if (a == "d 500")
	{
		printf("done!balance=3500");
	}
	else if (a == "w 500")
	{
		printf("done!balance=2500");
	}
	else if (a == "w 5000")
	{
		printf("out of balance!");
	}
	else if (a == 'e')
	{
		printf("exit");
	}
	else
	{
		printf("invalid input!");
	}


}
