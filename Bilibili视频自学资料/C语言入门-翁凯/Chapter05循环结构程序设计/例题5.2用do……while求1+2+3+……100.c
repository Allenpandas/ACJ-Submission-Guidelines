#include <stdio.h>

/*
 * do while ��ִ��ѭ���壬���ж�
 **/
int main()
{
	int i = 1,sum = 0;	//i����ѭ����; sumΪ��
	do
	{
		sum = sum + i;
		i++;
	}
	while(i <= 100);
	printf("sum = %d\n",sum);
	return 0;
}