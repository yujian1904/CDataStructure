#ifndef SQLIST_H_
#define SQLIST_H_

// #define OK 1
// #define ERROR 0
// #define True 1
// #define False 0

enum State
{
    ERROR = 0,
    False = 0,
    OK = 1,
    True = 1
};

#define LIST_INIT_SIZE 100
// 定义
typedef struct
{
    int e;
} ElemType;
typedef struct
{
    // ElemType elem[LIST_INIT_SIZE];
    ElemType *elem;
    int length;
} Sqlist;

#endif