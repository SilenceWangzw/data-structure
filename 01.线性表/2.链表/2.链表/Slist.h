#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef int SLTDataType;
typedef struct SlistNode
{
	SLTDataType data;//������
	struct SlistNode* next;//ָ����
}SLTNode;


//��ӡ����
void SListPrint(SLTNode* phead);

//β��
void SlistPushBack(SLTNode* phead, SLTDataType x);