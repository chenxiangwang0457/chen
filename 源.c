#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a, b, c, d;
	scanf("%d %d", &a, &b);
	c = a * a + b * b;
	if(c>100)
	{
		d = c / 100;
		printf("%d", d);
	}
	else
	{
		printf("%d", a + b);
	}
}