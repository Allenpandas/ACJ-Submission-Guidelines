/*
 * ����4.3 ����3����a,b,c Ҫ���մ�С�����˳�����
 **/
#include <stdio.h>
int main()
{
	float a,b,c,t;//t�����м�ı���
	scanf("%f,%f,%f", &a, &b, &c);

	if(a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	// ��һ����֤�� a < b

	if(a > c)
	{
		t = a;
		a = c;
		c = t;
	}
	// �ڶ�����֤�� a < c	
	
	if(b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	// ��������֤�� b < c
	
	// ���� a < b < c
	printf("%5.2f, %5.2f, %5.2f\n", a, b, c);
}