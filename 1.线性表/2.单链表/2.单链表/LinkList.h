#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int ListDataType;
typedef struct LNode
{
	ListDataType data;//数据域
	struct LNode* next;//指针域
}LNode, LinkList;


//打印链表
void ListPrint(LinkList* phead);

//申请结点
LNode* BuyListNode(ListDataType x);

//尾插
void ListPushBack(LinkList** pphead, ListDataType x);

//尾删
void ListPopBack(LinkList** pphead);

//头插
void ListPushFront(LinkList** pphead, ListDataType x);

//头删
void ListPopFront(LinkList** pphead);

//查找元素
LNode* ListFind(LinkList* pphead, ListDataType x);