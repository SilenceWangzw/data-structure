#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef int SLTDataType;
typedef struct SlistNode
{
	SLTDataType data;//数据域
	struct SlistNode* next;//指针域
}SLTNode;


//打印链表
void SListPrint(SLTNode* phead);

//尾插
void SlistPushBack(SLTNode* phead, SLTDataType x);