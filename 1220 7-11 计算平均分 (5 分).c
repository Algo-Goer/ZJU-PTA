/*
7-11 ����ƽ���� (5 ��)
��֪ĳλѧ������ѧ��Ӣ��ͼ�����γ̵ĳɼ��ֱ���87�֡�72�ֺ�93�֣������3�ſγ̵�ƽ���ɼ�������������������

�����ʽ��
����������
��β�޿���

�����ʽ��
�������и�ʽ��������
math = 87, eng = 72, comp = 93, average = �������õ�ƽ���ɼ�
��β�޿���
*/
#include <stdio.h>
int main(void)
{
    int math = 87;
    int eng = 72;
    int comp = 93;
    int average = 0;
    printf("math = 87, eng = 72, comp = 93, average = %d", (math + eng + comp) / 3);
    return 0;
}