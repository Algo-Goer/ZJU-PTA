/*
7-28 
��һ�������N��λ�������λ����֮�ͣ��м���һ���ո������

����������
321
��β�޿���

���������
3 6
��β�޿���
*/

/*
˼·��
321 % 10 = 1
321 / 10 = 32
32 % 10 = 2
32 / 10 = 3
3 % 10 = 3
3 / 10 = 0
*/
#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int temp = n;
    int sum = 0;
    int i = 0;
    while (temp)  // ��������Ϊ0
    {
        sum += temp % 10;
        temp = temp / 10;
        i++;
    }
    printf("%d %d", i, sum);
    return 0;
}