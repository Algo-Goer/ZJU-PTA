/*
7-24 ��������Ϸ (15 ��)
��������Ϸ������Ϸ���������һ��100���ڵ����������û�����һ����������в²⣬
��Ҫ���д�����Զ���������������ı��������бȽϣ�����ʾ���ˣ���Too big����������С�ˣ���Too small��������ȱ�ʾ�µ��ˡ�
����µ������������

����Ҫ��ͳ�ƲµĴ��������1�β³���������ʾ��Bingo!����
���3�����ڲµ�����������ʾ��Lucky You!����
�������3�ε�����N��>3�������ڣ�������N�Σ��µ�����������ʾ��Good Guess!����
�������N�ζ�û�вµ�������ʾ��Game Over��������������
����ڵ���N��֮ǰ���û�������һ��������Ҳ�����Game Over��������������

�����ʽ:
�����һ���и�������������100�����������ֱ�����Ϸ����������������Լ��²��������N��
���ÿ�и���һ���û������룬ֱ�����ָ���Ϊֹ��

�����ʽ:
��һ�������ÿ�β²���Ӧ�Ľ����ֱ������¶ԵĽ����Game Over���������

��������:
58 4
70
50
56
58
60
-2
��β�޿���

�������:
Too big
Too small
Too small
Good Guess!
��β�޿���
*/
#include <stdio.h>

int main(void)
{
    int rightNum, maxTimes, guess;
    scanf("%d %d", &rightNum, &maxTimes);
    for (int i = 1; i <= maxTimes; i++)
    {
        scanf("%d", &guess);
        if (guess > rightNum)
        {
            printf("Too big\n");
        }
        else if (guess < rightNum)
        {
            if (guess < 0)
            {
                break; // ��ֹforѭ��
            }
            else
            {
                printf("Too small\n");
            }
        }
        else if (guess == rightNum)
        {
            if (i == 1)
            {
                printf("Bingo!");
                break; // ��ֹforѭ��
            }
            else if (i <= 3)
            {
                printf("Lucky You!");
                break; // ��ֹforѭ��
            }
            else if (i <= maxTimes)
            {
                printf("Good Guess!");
                break; // ��ֹforѭ��
            }
        }
    }
    if (guess != rightNum)
        printf("Game Over");
    
    return 0;
}