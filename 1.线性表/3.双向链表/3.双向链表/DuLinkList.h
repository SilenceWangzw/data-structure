#pragma once
#include<stdio.h>
#include<stdlib.h>


typedef int ElemType;
typedef struct DuLNode
{
	struct DuLNode* next;//���ָ��
	struct DuLNode* prev;//ǰ��ָ��
	ElemType data;//������
}DuLNode, DuLinkList;


//��ʼ��
void ListInit(DuLinkList** phead);

//����
void ListDestory(DuLinkList* phead);

//������
struct DuLNode* BuyNode(ElemType x);

//β��
void ListPushBack(DuLinkList* phead, ElemType x);