/**
 *	����7.4��������ʵ�������
 **/

#include <stdio.h>
int main()
{
	float a,b,sum;
	float add(float a, float b); //����
	//ע������е���������д����ǰ�档

	printf("���������ʵ�����ö��Ÿ���\n");
	scanf("%f,%f",&a,&b);

	sum = add(a,b);
	printf("sum is : %3.2f\n", sum);
	return 0;

}

//���庯��
float add(float a,float b)
{
	float sum;
	sum = a + b;
	return sum;
}