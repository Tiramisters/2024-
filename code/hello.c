/*
 * 第二次培训 已知等级求分数区间
 */
#include <stdio.h>

int main()
{	
	char LEVEL;
	
	printf("input LEVEL:");
	scanf("%c", &LEVEL);
	
	if(LEVEL == 'A' || LEVEL == 'a')
	{
		printf("90~100");
	}
	else if(LEVEL == 'B' || LEVEL == 'b')
	{
		printf("80~89");
	}
	else if(LEVEL == 'C' || LEVEL == 'c')
	{
		printf("70~79");
	}
	else if(LEVEL == 'D' || LEVEL == 'd')
	{
		printf("60~69");
	}
	else if(LEVEL == 'E' || LEVEL == 'e')
	{
		printf("50~59");
	}
	else
	{
		printf("err");
	}
	
	
	return 0;
}



