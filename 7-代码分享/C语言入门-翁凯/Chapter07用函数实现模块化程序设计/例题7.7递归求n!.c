/**
 *	����7.7�ݹ���n!
 *	
 *	n = 1	total = 1
 *	n = 2	total = n*total;
 *	n = 3	total = n*total;
 *
 **/

#include <stdio.h>
int main()
{
	int fac(int n); //������׳˵ĺ���
	int n;	//�����n
	int total;	//total �׳˵�ֵ

	printf("input an integer number:\n");
	scanf("%d", &n);
	total = fac(n);
	printf("%d! = %d\n",n,total);
	return 0;
}

int fac(int n)
{
	int f;
	if(n<0)
		printf("n<0, date error!");
	else if(n == 0 || n == 1)
		f = 1;
	else
		f = fac(n-1)*n;
	return f;
}