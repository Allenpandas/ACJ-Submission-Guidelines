#include<stdio.h>
/*
 * ����5.5 Ҫ�����100~200֮��Ĳ��ܱ�3����������
 **/

int main()
{
	int n;
	for(n = 100;n <= 200;n++)
	{
		if(0 == n % 3)		// %Ϊ���������
		{
			continue;		// continue ��Ϊ������������������ѭ�����Ծ�ִ�к����ѭ��
		}
		printf("%d ", n);
	}
	printf("\n");
	return 0;
}