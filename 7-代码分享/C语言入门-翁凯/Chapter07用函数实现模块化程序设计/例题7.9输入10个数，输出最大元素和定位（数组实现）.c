/**
 *	P193 ����7.9 ����10�������������ֵ����Ԫ�غ͸����ǵڼ�������
 *	(��������ʵ��)
 *	notes����Ҫ��ϵ ����Ԫ����Ϊ������ʵ��
 *	�������ȶ����ʹ��
 *	�����������������塢��ʹ��
 **/
#include <stdio.h>
int main()
{
	int i;//����i������ѭ��
	int a[10];	//����һ����������
	int max(int x,int y);	//����һ��max����
	
	int m;	//��Ĭ�����ֵΪ�����е�һ��Ԫ��
	int local;	//��Ƕ�λ�ı���

	printf("please enter 10 number:\n");	
	for(i=0;i<10;i++)
	{
		scanf("%d", &a[i]);		//����10���� ��a0-a9,Ĭ�ϻس�����scanf����
	}
	

	//ѭ�����������е�ÿ��Ԫ��
	for(i=1,m = a[0],local = 0;i<10;i++)
	{

		if(max(a[i],m)> m)
		{
			m = max(a[i], m);
			local = i;
		}
	}

	printf("the largest number is %d\nthe number's location is %d\n",m,local+1);
	return 0;

}

int max(int x,int y)
{
	int m;
	if(x > y)
		m = x;
	else
		m = y;
	return m;
}