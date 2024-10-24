/*
 * 第二次培训 已知分数求等级 （逻辑与）
 */
#include <stdio.h>

int main()
{	
	int score;
	
	printf("input score:");
	scanf("%d", &score);
	
	if(score >= 90 && score <= 100)
	{
		printf("A");
	}
	else if(score >= 80 && score < 90)
	{
		printf("B");
	}
	else if(score >= 70 && score < 80)
	{
		printf("C");
	}
	else if(score >= 60 && score < 70)
	{
		printf("D");
	}
	else if(score >= 50 && score < 60)
	{
		printf("E");
	}
	else
	{
		printf("err");
	}
	
	return 0;
}



