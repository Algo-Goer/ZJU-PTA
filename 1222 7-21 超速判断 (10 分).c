/*
7-21 �����ж� (10 ��)
ģ�⽻ͨ������״�����ǡ����������ٶȣ�����ٶȳ���60 mph������ʾ��Speeding����������ʾ��OK����

�����ʽ��
������һ���и���1��������500�ķǸ����������״�⵽�ĳ��١�

�����ʽ��
��һ���������������ʾ�������ʽΪ��Speed: V - S������V�ǳ��٣�S������Speeding��������OK��

��������1��
40
��β�޿���

�������1��
Speed: 40 - OK
��β�޿���

��������2��
75
�������2��
Speed: 75 - Speeding
*/
#include <stdio.h>
int main(void)
{
    int speed = 0;
    scanf("%d", &speed);
    if (speed > 60)
        printf("Speed: %d - Speeding", speed);
    else
        printf("Speed: %d - OK", speed);
    return 0;
}