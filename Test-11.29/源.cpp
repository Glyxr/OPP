#pragma warning(disable:4996)
/** ֪��ѧ�Ų�ɼ�
 *���Ѵ����õ��ļ�score1.txt�����������ݣ�ѧ�ţ��ɼ�����
 *�ֽ����ݴ��ļ��������뵽��������num[]��score[]�С�ͨ��
 * ѧ��ȥ����������ҳɼ�
 */

#include <stdio.h>
 /*�ж��Ƿ�������*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    //����һ��5λ��
    int a = 0;
    printf("������һ��5λ��Ȼ�����������м���:");
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
    //����
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