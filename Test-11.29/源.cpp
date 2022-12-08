#pragma warning(disable:4996)
/** 知道学号查成绩
 *在已创建好的文件score1.txt中有两列数据（学号，成绩），
 *现将数据从文件读出放入到两个数组num[]和score[]中。通过
 * 学号去操作数组查找成绩
 */

#include <stdio.h>
 /*判断是否是素数*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    //加密一个5位数
    int a = 0;
    printf("请输入一个5位自然数，对他进行加密:");
    scanf("%d", &a);
    int tmp[5] = { 0 };
    for (int i = 0; i <= 4; i++)
    {
        tmp[i] = a % 10;
        a = a / 10;
        //printf("%d", tmp[i]);
        tmp[i] = (tmp[i] + 5) % 10;//step-1
        //printf("%d", tmp[i]);
    }
    a = tmp[0];
    tmp[0] = tmp[4];
    tmp[4] = a;//step-2
    a = tmp[3];
    tmp[3] = tmp[2];
    tmp[2] = a;//step-3
    int s = 1;
    a = 0;
    for (int i = 0; i <= 4; i++)
    {
        a = a + tmp[i] * s;
        s = s * 10;
    }
    //解密
    int h = 86309;
    for (int i = 0; i <= 4; i++)
    {
        tmp[i] = a % 10;
        a = a / 10;
        //printf("%d", tmp[i]);
        tmp[i] = (tmp[i] -5) % 10;//step-1
        if (tmp[i] < 0)
            tmp[i] = tmp[i] + 10;
        //printf("%d", tmp[i]);
    }
    a = tmp[0];
    tmp[0] = tmp[4];
    tmp[4] = a;//step-2
    a = tmp[3];
    tmp[3] = tmp[2];
    tmp[2] = a;//step-3
    printf("%d", a);
    return 0;
}