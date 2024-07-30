#include "Linear/sqlist/sqlist.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
    Sqlist L;

    InitList_Sq(&L);
    ListInsert_Sq(&L, 1, 32);
    printf("%d", L.elem[0]);
    DestroyList(&L);
    return 0;
}