

#include<stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int* parr[] = { &a,&b,&c };
	int i = 0;
	for (i = 0; i <= 5; i++)
	{
		
		printf("%d ", parr[i]);
	}
	return 0;
}