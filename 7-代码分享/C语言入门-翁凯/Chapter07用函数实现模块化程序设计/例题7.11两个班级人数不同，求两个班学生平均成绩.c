/**
 *	P195 ��2���༶���ֱ���5�˺�10�ˡ�����һ��average�������ֱ������������ѧ����ƽ���ɼ�
 *	(��������ʵ��)
 *	notes����Ҫ��ϰ ��������Ϊ������ʵ��
 *
 **/
#include<stdio.h>
int main()
{
	float score1[5]	 = {1,2,3,4,5};
	float score2[10] = {1,2,3,4,5,6,7,8,9,0};
	float average(float array[], int n); // ����һ����ƽ��ֵ�ĺ��� ע��array[]�ββ�ָ����С
	float aver1,aver2;//�����������ƽ��ֵ

	aver1 = average(score1,5);
	aver2 = average(score2,10);
	printf("1��ƽ���ɼ�Ϊ:%5.2f\n",aver1);
	printf("2��ƽ���ɼ�Ϊ:%5.2f\n",aver2);
	return 0;

}

float average(float array[], int n)	
{
	int i;//����i����ѭ��
	float sum = array[0],aver;//����sum\aver�ֱ���͡���ƽ��ֵ		//ע��float sum ��Ҫ����ʼֵ
	for(i=1;i<10;i++)
	{
		sum = sum + array[i];
	}
	aver = sum/n;
	return aver;
}