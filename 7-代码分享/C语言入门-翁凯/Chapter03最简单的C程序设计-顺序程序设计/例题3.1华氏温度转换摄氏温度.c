/**
 *	c = 5/9(f - 32)
 *	cΪ�����¶�
 *	fΪ�����¶�
 * */

#include <stdio.h>
int main()
{
	float f,c;	//����f��cΪ�����ȸ����ͱ���
	f = 64.0;
	c = (5.0/9)*(f-32);	//���ù�ʽ
	printf("f=%f,n=%f\n", f,c);
}