/**
 *	����7.6�ݹ��������
 **/

#include <stdio.h>
int main()
{
	int age;
	int ageFunction(int n);	//ע��function�����ͱ���������ͬһ������
	age = ageFunction(5);
	printf("NO.5 age:%d\n",age);
	return 0;
}


//����
int ageFunction(int n)
{
	int age;
	if(n == 1)
		age = 10;
	else
		age = ageFunction(n-1) + 2;
	return age;
}