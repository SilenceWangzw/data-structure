#define _CRT_SECURE_NO_WARNINGS 1
#include"DuLinkList.h"

//������
struct DuLNode* BuyNode(ElemType x)
{
	DuLNode* newnode = (DuLNode*)malloc(sizeof(ElemType));
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}


//��ʼ��
void ListInit(DuLinkList** phead)
{
	*phead = BuyNode(0);//����ͷ���
	(*phead)->next = *phead;
	(*phead)->prev = *phead;
}