#include <stdio.h>
#define SUM 100000
/*
 * ����5.4����ȫϵ1000ѧ���У���������ļ�裬�������ﵽ10WԪʱ�ͽ�����ͳ�ƴ�ʱ����������Լ�ƽ��ÿ�˾�����Ŀ��
 **/

int main()
{
	float amount,aver,total;	//totalΪ�������	amountΪÿ�ξ�������	averΪ�˾������
	int i;
	for(i = 1, total=0;i<=1000;i++)
	{
		printf("please enter amount:");
		scanf("%f", &amount);
		total = total + amount;
		if(total >= SUM)break;
	}
	aver = total/i;
	printf("number = %d\naver = %10.2f\n", i, aver);
	return 0;
}