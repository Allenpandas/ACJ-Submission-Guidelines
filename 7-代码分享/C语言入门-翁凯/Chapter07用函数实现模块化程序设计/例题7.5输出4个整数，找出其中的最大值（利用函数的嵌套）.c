/**
 *	����7.5���4���������ҳ����е����ֵ�����ú�����Ƕ�ף�
 **/

#include <stdio.h>
int main()
{
	int a,b,c,d,max;
	int maxFunction(int a,int b,int c,int d);

	printf("������4������\n");
	scanf("%d,%d,%d,%d",&a,&b,&c,&d);
	max = maxFunction(a,b,c,d);

	printf("max is : %d\n", max);
	return 0;
}

//��������
int maxFunction(int a,int b,int c,int d)
{
	int max2(int a, int b);// ����һ������,��2��֮������ֵ
	int max;
	max = max2(a,b);		//��a,b�е������,��ֵ��max
	max = max2(c,max);		//max��c���бȽ�,��ֵ��max
	max = max2(d,max);		//max��d���бȽ�,��ֵ��max
	return max;
}


int max2(int a, int b)
{
	int max;
	if(a >= b)
	{
		max = a;
	}else{
		max = b;
	}
	return max;
}