#include <stdio.h>

int getDays(int month, int day)
{
	int i, sum=0;
	for(i=1;i<month;i++)
	{
		if(i==2)
		{
			sum+=28;
		}
		else if(i%2==0)
		{
			sum+=30;
		}
		else
		{
			sum+=31;
		}
	}
	return sum+day;
}
	
int main(void)
{
	printf("지금이 몇월 몇일 입니까?");
	int month, day;
	scanf("%d %d",&month, &day);
	printf("1월1일부터 지금까지의 일수는 %d일입니다",getDays(month,day));
	return 0;
}

