/**
 * ��2.19 �����ʽ(1 - 1/2 + 1/3 - 1/4 + ���� +1/99 -1/100)
 * */
#include <stdio.h>
int main()
{
	int sign = 1;
	double deno = 2.0, sum = 1.0, term;//����demo, sum, termΪ˫���ȸ�����
	while(deno <=100)
	{
		sign = -sign;		//�����б�ɫ�����������
		term = sign/deno;	//term �����������1/n
		sum = sum + term;
		deno = deno + 1;	//deno �������1,2,3,4,5,6,7����100
	}
	printf("%f\n", sum);
	// ��ȷ����:0.688172

}