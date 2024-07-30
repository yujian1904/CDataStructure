#ifndef SQLIST_H_
#define SQLIST_H_

// #define OK 1
// #define ERROR 0
// #define True 1
// #define False 0

enum State
{
    INFEASIBLE = -1,
    OVERFLOW = -2,
    ERROR = 0,
    False = 0,
    OK = 1,
    True = 1
};
#define MAXSIZE 10
typedef int Status;
typedef int ElemType;

// 定义
typedef struct
{
    // ElemType elem[LIST_INIT_SIZE];
    ElemType *elem;
    int length;
} Sqlist;

Status InitList_Sq(Sqlist *L);

// 销毁线性表
void DestroyList(Sqlist *L);

// 清空线性表
void ClearList(Sqlist *L);

// 获得线性表的长度
int GetLength(Sqlist L);

// 判断线性表是否为空
int IsEmpty(Sqlist L);

// 取第Loc个元素，即ai，数组下标index=Loc-1,O(1)
Status GetElem(Sqlist L, int Loc, ElemType *e);

// 顺序表的按值查找,时间复杂度最好为O(1),最坏为O(n),平均为（n+1）/ 2
int LocateElem(Sqlist L, ElemType e);

// 顺序表的插入,时间复杂度最好为O(1),最坏为O(n),平均为n / 2
Status ListInsert_Sq(Sqlist *L, int Loc, ElemType e);

// 顺序表的删除,时间复杂度最好为O(1),最坏为O(n),平均为(n-1) / 2
Status ListDelete_Sq(Sqlist *L, int Loc);
#endif