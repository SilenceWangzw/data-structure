#pragma once
#include<stdio.h>
#include<stdlib.h>


typedef int ElemType;
typedef struct DuLNode
{
	struct DuLNode* next;//后继指针
	struct DuLNode* prev;//前驱指针
	ElemType data;//数据域
}DuLNode, DuLinkList;


//初始化
void ListInit(DuLinkList** phead);

//销毁
void ListDestory(DuLinkList* phead);

//申请结点
struct DuLNode* BuyNode(ElemType x);

//尾插
void ListPushBack(DuLinkList* phead, ElemType x);