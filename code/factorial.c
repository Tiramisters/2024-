/**
 * 阶乘
 */

#include <stdio.h>

int main()
{
	int target;
	int ret = 1;
	
	printf("input your num:");
	scanf("%d", &target);

	for(int i=target; i>0; i--)
	{
		printf("%d\n", i);
		ret = ret * i;
	}
	
	printf("%d\n", ret);
	return 0;
}
