#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num = 0;
	scanf("%d", &num);
	if(num==0) printf("zero");
	else if (num > 0)
	{
		if (num % 2 == 0) printf("Positive Even");
		else printf("Positive Odd");
	}
	else if (num < 0)
	{
		num = -num;
		if(num % 2 == 0) printf("Negative Even");
		else printf("Negative Odd");
	}
	return 0;
}