#include<stdio.h>

int main()
{
	void action1(int,int),action2(int,int);//����2�������� ������������ʹ�ã������ȶ����ʹ��
	
	char ch;
	int a = 15,b = 23;
	ch = getchar();//��ȡһ���ַ�
	switch(ch)
	{
		case 'a':	
		case 'A':action1(a,b);break;
		case 'B':
		case 'b':action2(a,b);break;
		
		default:putchar('\a');
	}
	return 0;
}

void action1(int x,int y)
{
	printf("x+y=%d\n",x+y);
}

void action2(int x,int y)
{
	printf("x*y=%d\n",x*y);
}