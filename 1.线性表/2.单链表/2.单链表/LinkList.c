#define _CRT_SECURE_NO_WARNINGS 1
#include"LinkList.h"


//������
LNode* BuyNode(ElemType x)
{
	LNode* newnode = (LNode*)malloc(sizeof(ElemType));
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}


//��ӡ����
void SlistPrint(LinkList* phead)
{
	LNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}


//β��
void SlistPushBack(LinkList** phead, ElemType x)
{
	//������
	LNode* newnode = BuyNode(x);

	//��Ϊ��
	if (*phead == NULL)
	{
		*phead = newnode;
	}
	else
	{
		LNode* tail = *phead;
		//��β���
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		//��Ԫ�ز���β��
		tail->next = newnode;
	}
}


//ͷ��
void SlistPushFront(LinkList** phead, ElemType x)
{
	//������
	LNode* newnode = BuyNode(x);

	newnode->next = *phead;
	*phead = newnode;
}


//ͷɾ
void SlistPopFront(LinkList** phead)
{
	LNode* next = (*phead)->next;//������һ�����ĵ�ַ
	free(*phead);//�ͷŵ�һ�����
	*phead = next;
}


//βɾ
void SlistPopBack(LinkList** phead)
{
	//1.�������Ϊ��
	if (*phead == NULL)
	{
		return;
	}
	//2.ֻ��һ�����
	else if ((*phead)->next == NULL)
	{
		free(*phead);
		*phead = NULL;
	}
	//3.������
	else
	{
		LNode* tail = *phead;
		LNode* prev = *phead;
		while (tail->next != NULL)
		{
			prev = tail;//����β����ǰһ������ַ
			tail = tail->next;
		}
		free(tail);
		prev->next = NULL;//��ǰһ������ָ������Ϊ��
	}
}


//����
LNode* SlistFind(LinkList* phead, ElemType x)
{
	LNode* cur = phead;
	while (cur != NULL)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}


//��pos���ǰ�����
void SlistInsert(LinkList** phead, LNode* pos, ElemType x)
{
	if (pos == *phead)
	{
		SlistPushFront(phead, x);
	}
	else
	{
		LNode* prev = *phead;
		//�ҵ�����λ�õ�ǰһ�����
		while (prev->next != pos)
		{
			prev = prev->next;
		}

		LNode* newnode = BuyNode(x);
		prev->next = newnode;
		newnode->next = pos;
	}
}


//��posλ��ɾ��
void SlistErase(LinkList** phead, LNode* pos)
{
	if (pos == *phead)
	{
		SlistPopFront(phead);
	}
	else
	{
		LNode* prev = *phead;
		while (prev->next != pos)
		{
			prev = prev->next;
		}

		prev->next = pos->next;
		free(pos);
	}
}
