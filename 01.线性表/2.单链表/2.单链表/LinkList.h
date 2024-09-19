#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef int LinkDataType;
typedef struct LNode
{
	LinkDataType data;//������
	struct LNode* next;//ָ����
}LNode;



//��ӡ
void ListPrint(LNode* phead);

//������
LNode* BuyListNode(LinkDataType x);

//β��
void ListPushBack(LNode** pphead, LinkDataType x);

//βɾ
void ListPopBack(LNode** pphead);

//ͷ��
void ListPushFront(LNode** pphead, LinkDataType x);

//ͷɾ
void ListPopFront(LNode** pphead);
