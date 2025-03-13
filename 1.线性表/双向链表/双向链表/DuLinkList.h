#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//带头双向循环链表 -- 最优链表结构
//任意位置插入删除数据都是O(1)

typedef int DLTDataType;
//结点
typedef struct DLNode
{
	DLTDataType data;//数据域
	struct DLNode* next;//指向下一个结点
	struct DLNode* prev;//指向前一个结点
}DLNode, DLinkList;

//初始化
DLNode* ListInit();

//销毁
void ListDestory(DLinkList* phead);

//申请结点
DLNode* BuyListNode(DLTDataType x);

//打印
void ListPrint(DLinkList* phead);

//尾插
void ListPushBack(DLinkList* phead, DLTDataType x);

//尾删
void ListPopBack(DLinkList* phead);

//头插
void ListPushFront(DLinkList* phead, DLTDataType x);

//头删
void ListPopFront(DLinkList* phead);

//查找
DLNode* ListFind(DLinkList* phead, DLTDataType x);

//在pos位置之前插入
void ListInsert(DLNode* pos, DLTDataType x);

//删除pos位置的值
void ListErase(DLNode* pos);
