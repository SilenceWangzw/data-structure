#pragma once
#include<stdio.h>
#include<stdlib.h>


typedef int SLTDataType;
typedef struct SlistNode
{
	SLTDataType data;//������
	struct SlistNode* next;//ָ���� --> ָ����һ�����

}SlistNode;

//��ӡ
void SlistPrint(SlistNode** phead);

//β��
void SlistPushBack(SlistNode** phead, SLTDataType x);