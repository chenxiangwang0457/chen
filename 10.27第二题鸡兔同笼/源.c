#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int jitu(int a, int b);
int main()
{
	int f, h, c, d;
	scanf("%d %d", &h, &f);
	if (f > 0 && h > 0)
	{
		c = jitu(h, f);
		d = h - c;
	    printf("rabbit:%d hen:%d", d, c);
	
	}
	else
	{
		printf("invalid input!");
	}
}
int jitu(int h,int f)
{
	int ji, tu;
	ji = (4 * h - f) / 2;
	tu = h - ji;
	return ji;
}
