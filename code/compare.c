/**
 * 猜数plus
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int target;
	int usr_num;
	target = rand() % 100;
	printf("%d\n", target);
	
	printf("input your num:");
	scanf("%d", &usr_num);
	while(target != usr_num)
	{
		if(usr_num > target)
		{
			printf("这个数大了!\n");
		}
		else
		{
			printf("这个数小了!\n");
		}
		printf("input your num:");
		scanf("%d", &usr_num);
	}
	printf("true!\n");
	return 0;
}



