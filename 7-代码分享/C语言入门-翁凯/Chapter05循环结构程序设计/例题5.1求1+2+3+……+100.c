#include <stdio.h>

int main()
{
	int i = 1,sum = 0;	//i����ѭ����; sumΪ��
	while(i <= 100)
	{
		sum = sum + i;	//
		i++;
	}
	printf("sum = %d\n",sum);
	return 0;
}