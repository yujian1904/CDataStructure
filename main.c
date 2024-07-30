#include "Linear/sqlist/sqlist.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
    Sqlist s;
    s.elem = (ElemType *)malloc(sizeof(ElemType) * 10);
    s.elem[0].e = 11;
    s.elem[1].e = 22;
    printf("%d\t", s.elem->e);
    printf("%d", (s.elem + 1)->e);
    free(s.elem);
    return 0;
}