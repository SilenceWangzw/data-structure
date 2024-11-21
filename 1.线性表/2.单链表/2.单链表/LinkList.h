#pragma once
#include<stdio.h>
#include<stdlib.h>


typedef int ElemType;
typedef struct LNode
{
	ElemType data;//数据域
	struct LNode* next;//指针域
}LNode, LinkList;



//申请结点
LNode* BuyNode(ElemType x);

//打印链表
void SlistPrint(LinkList* phead);

//尾插
void SlistPushBack(LinkList** phead, ElemType x);

//头插
void SlistPushFront(LinkList** phead, ElemType x);

//头删
void SlistPopFront(LinkList** phead);

//尾删
void SlistPopBack(LinkList** phead);

//查找
LNode* SlistFind(LinkList* phead, ElemType x);

//在pos前的位置插入
void SlistInsert(LinkList** phead, LNode* pos, ElemType x);

//在pos位置删除
void SlistErase(LinkList** phead, LNode* pos);
