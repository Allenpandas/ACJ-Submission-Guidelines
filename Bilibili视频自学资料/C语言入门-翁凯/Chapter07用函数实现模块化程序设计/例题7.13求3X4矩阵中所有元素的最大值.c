/**
 *	P195 ����7.13��3X4����������Ԫ�ص����ֵ
 *	notes����Ҫ��ǿ���
 **/
#include <stdio.h>
int main()
{
	int max;//�������ֵ����
	int max_value(int array[][4]);//��������
	int a[3][4] = {1,3,5,7,2,4,6,8,15,17,34,12};
	max = max_value(a);
	printf("max is : %d\n", max);
	return 0;
}



//�������Ԫ�رȽ� û��̫���Ѷ�
//notes:����Ҫָ������!!!(C���Ա����ʱ�򲻼���һά�Ĵ�С,���ڶ�ά�Ĵ�С)
int max_value(int array[][4])
{
	int max; //�����ȡ�����ֵ
	int i,j; //�������i,j����ѭ��,i����;j����
	max = array[0][0];
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(array[i][j] > max)
				max = array[i][j];
		}
	}
	return max;
}