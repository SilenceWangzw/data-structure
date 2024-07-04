#pragma once
#include<stdio.h>
#include<stdlib.h>


typedef int SLTDataType;
typedef struct SlistNode
{
	SLTDataType data;//数据域
	struct SlistNode* next;//指针域 --> 指向下一个结点

}SlistNode;

//打印
void SlistPrint(SlistNode** phead);

//尾插
void SlistPushBack(SlistNode** phead, SLTDataType x);