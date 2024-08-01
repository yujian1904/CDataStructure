// 带头节点的单链表
#ifndef LINKLIST_H_
#define LINKLIST_H_
enum State
{
    INFEASIBLE = -1,
    OVERFLOW = -2,
    ERROR = 0,
    False = 0,
    OK = 1,
    True = 1
};
typedef int Status;

typedef int ElemType;

typedef struct Lnode
{
    ElemType data;
    struct Lnode *next;
} Lnode, *LinkList; // Lnode表示节点，LinkList表示链表亦头结点

Status InitList_L(LinkList L);

int ListEmpty(const LinkList L);

Status DestroyList_L(LinkList L);

#endif