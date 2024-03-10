#define _CRT_SECURE_NO_WARNINGS
#include"Slist.h"

//��ӡ����
void SListPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;//ָ��������һ�����
	}
	printf("NULL\n");
}


//β��
void SlistPushBack(SLTNode** phead, SLTDataType x)
{
	SLTNode* newNode = (SLTNode*)malloc(sizeof(SLTNode));//�����½��
	newNode->data = x;
	newNode->next = NULL;
	if (*phead == NULL)//�������Ϊ��
	{
		*phead = newNode;
	}
	else 
	{
		SLTNode* tail = *phead;
		while (tail->next != NULL)//�ҵ�β��㣬β���ı�־��nextΪ��
		{
			tail = tail->next;
		}
		tail->next = newNode;
	}
}
