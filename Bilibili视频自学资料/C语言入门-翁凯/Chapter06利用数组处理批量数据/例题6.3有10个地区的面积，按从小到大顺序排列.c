/*
 * ����6.3 P147 ��С�����������ݷ���
 **/

#include <stdio.h>
int main()
{
	int a[10];
	int i,j,t;
	printf("intput 10 number: \n");

	for(i=0;i<10;i++)
	{
		//ѭ�����ƶ�����ÿ��Ԫ�صĸ�ֵ
		scanf("%d", &a[i]);
	}
	printf("\n");

	
	for(j=0;j<9;j++){			//��ѭ������n-1,������9��ѭ����ʵ��9�˱Ƚ�
		for(i=0;i<9-j;j++)		//��ѭ����ÿ�ν��б����Աȣ�����������������
		{
			if(a[i]>a[i+1])
			{
				t		=	a[i];
				a[i]	=	a[i+1];
				a[i+1]	=	t;	
				//�Ƚϡ������м����t����λ��
			}
		}	
	}
	printf("the sorted numbers : \n");
	for(i=0;i<10;i++)			//ѭ�����
	{
		printf("%d", a[i]);
	}
	printf("\n");
	return 0;

}
