/**
 *	����7.1�ú�������ʵ������ַ���
 *			******************
 *			  How do you do !
 *			******************
 **/

#include <stdio.h>
int main()
{
	void printf_star();		//�������� ��ӡ����
	void printf_message();	//�������� ��ӡ��ʾ��Ϣ

	//����
	printf_star();
	printf_message();
	printf_star();

	return 0;
}


//���庯��
void printf_star()
{
	printf("*****************\n");
}

// ���庯��
void printf_message()
{
	printf(" How do you do !\n");
}