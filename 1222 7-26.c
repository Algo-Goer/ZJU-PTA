/*
7-26 ���Լ������С������ (15 ��)
����Ҫ���������������������Լ������С��������

�����ʽ:
������һ���и�������������M��N����1000����

�����ʽ:
��һ����˳�����M��N�����Լ������С�������������ּ���1�ո�ָ���

��������:
511 292
��β�޿���

�������:
73 2044
��β�޿���
*/

// ����շת��������Լ�����Ѷ���������˺�������Լ����Ϊ��С������
#include <stdio.h>
int main(void)
{
    int a, b, mod, c, d;
    scanf("%d %d", &a, &b);
    c = a;
    d = b;
    while (d != 0)
    {
        mod = c % d;
        c = d;
        d = mod;
    }
    printf("%d %d\n", c, a * b / c);
    return 0;
}