/**
 *	P194 ����7.10 ��һ��һά�����з���10��ѧ���ɼ�����ƽ���ɼ�
 *	(��������ʵ��)
 *	notes����Ҫ��ϰ ��������Ϊ������ʵ��
 *
 **/
#include <stdio.h>
int main()
{

	float score[10];
	int i;
	float average(float array[10]);
	float aver;
	printf("please enter 10 numbers:\n");

	for(i=0;i<10;i++)
	{
		scanf("%f", &score[i]);		//ע���������%f ����%d
	}

	//
	aver = average(score);//������ ��Ϊ�������ݸ�����
	printf("average score is : %5.2f\n",aver);
	return 0;

}

//���庯��
float average(float array[10])
{
	//˼·������͡��ٳ���10
	
	int i;//����i����ѭ��
	float sum = array[0];
	float aver;

	for(i=1;i<10;i++)
	{
		sum = sum + array[i];	
	}
	aver = sum/10;
	return aver;
}