/**
 *	����3.4 ���������ε����߳��������������
 *	
 *	
 * */
#include <stdio.h>
#include <math.h>	//������ѧ�⺯��(�����õ���sqrt��ƽ����)

int main()
{
	double a,b,c,s,area;
	a = 3.67;
	b = 5.43;
	c = 6.21;
	s = (a + b + c)/2;	//sΪ���ܳ�

	area = sqrt( s *(s - a) * (s - b) * (s - c));
	printf("a = %f\tb=%f\tc=%f\n",a,b,c);			// \t �����ƶ�һ��tab��λ�ã�һ��tab��8�У�
	printf("area = %f\n", area);
	return 0;


}