/**
 *	P195 ����7.12ѡ�񷨶�����Ԫ������
 *	notes����Ҫ��ǿ���
 **/
#include <stdio.h>
int main()
{
	int array[10];//����һ����10��Ԫ�ص�����
	int i;//����i����ѭ��
	void sort(int array[], int n);//
	for(i=0;i<5;i++)
	{
		scanf("%d", &array[i]);
	}
	sort(array,5);
	printf("the soeted array:\n");
	for(i=0;i<5;i++)
	{
		printf("%d,", array[i]);
	}
	printf("\n");
	return 0;

}

//����ѡ��������
void sort(int array[], int n)
{
	int i;		//i��������ı���
	int temp;	//��ʱ��ű���(����Ԫ��ʱʹ��)
	int k;
	int j;		//����ʣ�µ�����Ԫ�ر���
	for(i=0;i<n-1;i++)
	{
		k = i;
		
		//ѭ������i+1 ~ n ÿ��Ԫ�� ѡ������ֵ Ȼ���� a[i]���л�λ
		for(j=i+1;j<n;j++)
		{
			if(array[j] < array[k])	//������j(i+1)~n ÿ����k�Ƚ� ȡ��С���±��k
			{
				k = j;	// k�������С�������±�
			}
			
		}
		temp = array[k];
		array[k] = array[i];
		array[i] = temp;
	}
}









