/*
 *	����6.5 ���3X4����������Ԫ��
 *	(ps:�Լ�д��)
 **/

#include <stdio.h>
int main()
{
	int i,j,local_i, local_j,max;
	int a[3][4] = {{1,2,3,4},{9,8,7,6}, {-10,10,-5,2}};
	max = a[0][0];//Ĭ�ϵ�һ��Ԫ�����
	for(i=0;i<=2;i++) // 3��
	{
		for(j=0;j<=3;j++)// 4��
		{
			if(a[i][j] > max)
			{
				max = a[i][j];
				local_i = i;	//local_i �����
				local_j = j;	//local_j �����
			}
		}
	}
	printf("max is: %d\nrow = %d\ncolumn = %d\n",max,local_i,local_j);
	return 0;

}
