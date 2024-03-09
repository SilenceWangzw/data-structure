#define _CRT_SECURE_NO_WARNINGS
#include"Slist.h"

//��ӡ
void SlistPrint(SlistNode* phead)
{
	//����Ҫassert����Ϊ�п����ǿ�����
	SlistNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

//������
SlistNode* BuySlistNode(SListDataType x)
{
	SlistNode* newNode = (SlistNode*)malloc(sizeof(SListDataType) * 1);
	if (newNode == NULL)
	{
		printf("������ʧ��\n");
		exit(-1);
	}
	newNode->data = x;
	newNode->next = NULL;
	return newNode;
}

//β��
void SlistPushBack(SlistNode** pphead, SListDataType x)
{
	SlistNode* newNode = BuySlistNode(x);

	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		SlistNode* tail = *pphead;
		while (tail->next != NULL)//��β��
		{
			tail = tail->next;
		}
		tail->next = newNode;
	}
	newNode->data = x;
	newNode->next = NULL;
	

}

//βɾ
void SlistPopBack(SlistNode** pphead)
{
	//1.��
	//2.һ�����
	//3.һ�����Ͻ��
	if (*pphead == NULL)
	{
		return;
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SlistNode* prev = NULL; //����tail��ǰһ�����
		SlistNode* tail = *pphead;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		prev->next = NULL;
	}
	

	
}