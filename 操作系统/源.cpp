#include"stdio.h"
#include"stdlib.h"
#include"conio.h"
#define N 25
#define num 4  /*进程分配物理块数目*/
int A[N] = { 7,0,1,2,0,3,0,4,2,3,0,3,2,1,2,0,1,7,0,1,3,2,1,0,7 };  /*页表映像*/

typedef struct page
{
    int address;           /*页面地址*/
    struct page* next;
}page;

struct page* head, * run, * rear;

void initial()   /*创建分配物理块*/
{
    int i = 1;
    page* p, * q;
    head = (page*)malloc(sizeof(page)); p = head;
    for (i = 1; i <= num; i++)
    {
        q = (page*)malloc(sizeof(page));
        p->next = q;
        q->address = -1;
        q->next = NULL;
        p = q;
    }
    rear = p;
}

int search(int n)
{
    page* p;
    int i = 0;
    p = head;
    while (p->next)
    {
        if (p->next->address == n)
        {
            printf("Get page %d\n", n);
            run = p;
            return 1;
        }
        p = p->next;
        i++;
    }
    return 0;
}

void changeOPT(int n, int position)
{
    int i;
    int total = 0;
    int flag = 1;
    int distance[num];
    int MAX;
    int order = 0;
    int oldpage;
    page* p, * q;
    p = head->next;
    q = head->next;
    for (i = 0; i < num; i++)
        distance[i] = 100;
    i = 0;
    while (p)
    {
        if (p->address == -1)
        {
            flag = 0;
            break;
        }
        p = p->next;
        i++;
    }
    if (!flag)
    {
        p->address = n;
        printf("insert page %d\n", n);
    }
    else
    {
        while (q)
        {
            for (i = position; i < N; i++)
            {
                if (q->address == A[i])
                {
                    distance[total] = i - position;
                    break;
                }

            }
            total++;
            q = q->next;
        }
        MAX = distance[0];
        for (i = 0; i < num; i++)
        {
            if (distance[i] > MAX)
            {
                MAX = distance[i];
                order = i;
            }
        }

        i = 0;
        p = head->next;
        while (p)
        {
            if (i == order)
            {
                oldpage = p->address;
                p->address = n;
            }
            i++;
            p = p->next;
        }
        printf("Change the page %d with page %d\n", oldpage, n);
    }
}


void changeLRU(int n)
{
    int i = 0;
    int flag = 1;
    page* p, * delect;
    p = head->next;

    while (p)
    {
        if (p->address == -1)
        {
            flag = 0;
            p->address = n;
            printf("Insert page %d\n", n);
            break;
        }
        p = p->next;
        i++;
    }

    if (flag)
    {
        delect = head->next;
        head->next = delect->next;
        printf("Change the page %d with page %d\n", delect->address, n);
        delect->address = n;
        rear->next = delect;
        rear = delect;
        rear->next = NULL;
    }
}

float OPT()
{
    int i;
    int lose = 0;
    float losef;
    float percent;
    for (i = 0; i < N; i++)
    {
        if (search(A[i]) == 0)
        {
            lose++;
            changeOPT(A[i], i);
        }
    }
    losef = lose;
    percent = 1 - (losef / N);
    return percent;
}


float LRU()
{
    int i;
    int lose = 0;
    float losef;
    float percent;
    page* p;
    for (i = 0; i < N; i++)
    {
        if (search(A[i]) == 0)
        {
            lose++;
            changeLRU(A[i]);
        }
        else
        {
            p = run->next;
            run->next = p->next;
            rear->next = p;
            rear = p;
            rear->next = NULL;
        }
    }
    losef = lose;
    percent = 1 - (losef / N);
    return percent;
}


int main()  /*主函数部分*/
{
    float percent;
    int choice;
    printf("Select the arithmetic:\n(1)OPT\n(2)LRU\nyour choice is:");
    scanf_s("%d", &choice);/*选择页面置换算法*/
    initial();               /*创建分配物理块*/
    if (choice == 1)           /*采用OPT算法置换*/
    {
        percent = OPT();        /*计算OPT时的命中率*/
        printf("The percent of OPT is %f", percent);
    }
    else
        if (choice == 2)      /*采用LRU算法置换*/
        {
            percent = LRU();       /*计算LRU时的命中率*/
            printf("The percent of LRUs is %f", percent);
        }
        else
            printf("Your choice is invalid.");

    getch();

}