/*
7-28 
在一行中输出N的位数及其各位数字之和，中间用一个空格隔开。

输入样例：
321
结尾无空行

输出样例：
3 6
结尾无空行
*/

/*
思路：
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
    while (temp)  // 当除数不为0
    {
        sum += temp % 10;
        temp = temp / 10;
        i++;
    }
    printf("%d %d", i, sum);
    return 0;
}