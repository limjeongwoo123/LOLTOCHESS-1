#include <stdio.h>

void leapyear(int a)
{
	if(a%4==0&&a%100!=0||a%400==0)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	
}

int main(void)
{
	int a;
	scanf("%d",&a);
	leapyear(a);
	
	
	return 0;
}
