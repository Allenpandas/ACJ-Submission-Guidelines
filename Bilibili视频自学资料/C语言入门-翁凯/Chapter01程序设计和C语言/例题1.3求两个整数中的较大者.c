/**
 * P8 ����1.3 �����������нϴ���
 * */

#include <stdio.h>
// ������
int main()
{
	int a, b, c;				// ����a,b,c��������:����a,bΪ���������cΪ�������ֵ
	int max(int x, int y);		// ����max����
	scanf("%d,%d", &a, &b);		// ����a,b��������(scanf�����ж��Ż��ǿո񣬱��������뱣��һ��)
	c = max(a, b);				// ����max����
	printf("a��b�е����ֵΪ%d\n", c);

}

// ����max����
int max(int x, int y)			// �Զ����max��������Ҫ����2����ʽ����int x �� int y
{
	int max;					// �������max��Ϊ����ֵ
	if(x > y)
		 max = x;
	else max = y;
	return max;
}