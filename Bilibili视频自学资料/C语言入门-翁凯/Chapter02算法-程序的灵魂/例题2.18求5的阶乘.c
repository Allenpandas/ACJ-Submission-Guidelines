/**
 * ��2.18 ��5�Ľ׳�
 * */
#include <stdio.h>
int main()
{
	int i , sum ;	//i���Ʊ仯 1,2,3,4,5(ע:i��2��ʼ����)
	sum = 1;
	i = 1;
	while(i <= 5){
		sum = sum * i;
		i++;
	}
	printf("%d\n", sum);
	return 0;
}

//
// i = 1, sum =  1 * 1 = 1;	(i��2��ʼ,��������һ��)
// i = 2, sum =  1 * 2 = 2;
// i = 3, sum =  2 * 3 = 6;
// i = 4, sum =  6 * 4 = 24;
// i = 5, sum = 24 * 5 = 120;