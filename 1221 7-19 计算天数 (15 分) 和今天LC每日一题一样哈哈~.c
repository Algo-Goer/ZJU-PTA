/*
7-19 计算天数 (15 分) 和今天LC每日一题一样哈哈~
本题要求编写程序计算某年某月某日是该年中的第几天。

输入格式:
输入在一行中按照格式“yyyy/mm/dd”（即“年/月/日”）给出日期。
注意：闰年的判别条件是该年年份能被4整除但不能被100整除、或者能被400整除。闰年的2月有29天。

输出格式:
在一行输出日期是该年中的第几天。

输入样例1:
2009/03/02
结尾无空行

输出样例1:
61
结尾无空行

输入样例2:
2000/03/02
输出样例2:
62
*/
#include <stdio.h>
int main(void) {
  int year, month, day;
  int sumDay = 0;
  int ans = 0;
  scanf("%04d/%02d/%02d", &year, &month, &day);
  // 没有04 02 02也可以
  int ar[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  for (int i = 0; i < month; i++) {
    sumDay += ar[i];
  }
  ans += day + sumDay;
  if (year % 400 == 0 && month > 2) {
    ans += 1;
  }
  if (year % 100 != 0 && year % 4 == 0 && month > 2) {
    ans += 1;
  }
  printf("%d", ans);
  return 0;
}