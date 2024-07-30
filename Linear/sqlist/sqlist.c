#include "sqlist.h"
#include "stdlib.h"
#include "stdio.h"

Status InitList_Sq(Sqlist *L)
{
    L->elem = (ElemType *)malloc(sizeof(ElemType) * MAXSIZE);
    if (!L->elem)
    {
        exit(OVERFLOW);
    }
    L->length = 0;
    return OK;
}
void DestroyList(Sqlist *L)
{
    if (L->elem)
    {
        free(L->elem);
    }
}
void ClearList(Sqlist *L)
{
    L->length = 0;
}
int GetLength(Sqlist L)
{
    return L.length;
}
int IsEmpty(Sqlist L)
{
    if (L.length == 0)
    {
        return -1;
    }
    else
        return 0;
}
Status GetElem(Sqlist L, int Loc, ElemType *e)
{
    if (Loc < 1 || Loc > L.length)
    {
        return ERROR;
    }
    *e = L.elem[Loc - 1];
    return OK;
}
int LocateElem(Sqlist L, ElemType e)
{
    for (int Loc = 1; Loc <= L.length; Loc++)
    {
        if (L.elem[Loc - 1] == e)
        {
            return Loc;
        }
    }
    return 0;
}
Status ListInsert_Sq(Sqlist *L, int Loc, ElemType e)
{
    if (Loc < 1 || Loc > L->length + 1)
    {
        return ERROR;
    }
    if (L->length == MAXSIZE)
    {
        return ERROR;
    }
    for (int index = L->length - 1; index >= Loc - 1; index--)
    {
        L->elem[index + 1] = L->elem[index]; // 前一个元素赋给后一个元素
    }
    L->elem[Loc - 1] = e;
    L->length++;
    return OK;
}
Status ListDelete_Sq(Sqlist *L, int Loc)
{
    if (Loc < 1 || Loc > L->length)
    {
        return ERROR;
    }
    for (int index = Loc - 1; index < L->length; index++)
    {
        L->elem[index] = L->elem[index + 1];
    }
    L->length--;
    return OK;
}