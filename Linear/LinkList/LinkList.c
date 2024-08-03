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

Status ClearList(LinkList L)
{
    Lnode *p;
    while (L->next)
    {
        p = L->next;
        L->next = p->next;
        free(p);
    }
    return OK;
}

int GetListLength(const LinkList L)
{
    Lnode *p;
    int count_elem = 0;
    p = L->next;
    while (p)
    {
        count_elem++;
        p = p->next;
    }
    return count_elem;
}

Status GetElem_L(LinkList L, int i, ElemType e)
{
    Lnode *p;
    int index = 1;
    p = L->next;
    while (p && index < i)
    {
        p = p->next;
        index++;
    }
    if (!p || i < index)
    {
        return ERROR;
    }
    e = p->data;
    return OK;
}
Lnode *LocateElem_Le(LinkList L, ElemType e)
{
    Lnode *p;
    p = L->next;
    while (p && p->data != e)
    {
        p = p->next;
    }
    return p;
}

int LocateElem_Li(LinkList L, ElemType e)
{ // 返回位置序号
    Lnode *p;
    int index = 1;
    p = L->next;
    while (p && p->data != e)
    {
        p = p->next;
        index++;
    }
    if (p)
        return index;
    else
        return 0;
}

Status ListInsert_L(LinkList L, int i, ElemType e)
{
    Lnode *p;
    int index = 1;
    p = L->next;
    while (p && index < i - 1)
    {
        p = p->next;
        index++;
    }
    if (!p || i < index)
    {
        return ERROR;
    }

    Lnode *ins = (Lnode *)malloc(sizeof(Lnode));
    ins->data = e;
    ins->next = p->next;
    p->next = ins;
    return OK;
}