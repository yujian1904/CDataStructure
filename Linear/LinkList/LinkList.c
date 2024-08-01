#include "LinkList.h"
#include <stdlib.h>

Status InitList_L(LinkList L)
{
    L = (LinkList)malloc(sizeof(Lnode));
    L->next = NULL;
    return OK;
}
int ListEmpty(const LinkList L)
{ // 空表返回1否则返回0
    if (L->next)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
Status DestroyList_L(LinkList L)
{
    Lnode *p;
    while (L)
    {
        p = L;
        L = L->next;
        free(p);
    }
    return OK;
}