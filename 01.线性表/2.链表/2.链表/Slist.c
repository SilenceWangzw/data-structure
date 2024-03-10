#define _CRT_SECURE_NO_WARNINGS
#include"Slist.h"

//打印链表
void SListPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;//指针往后移一个结点
	}
	printf("NULL\n");
}


//尾插
void SlistPushBack(SLTNode** phead, SLTDataType x)
{
	SLTNode* newNode = (SLTNode*)malloc(sizeof(SLTNode));//申请新结点
	newNode->data = x;
	newNode->next = NULL;
	if (*phead == NULL)//如果链表为空
	{
		*phead = newNode;
	}
	else 
	{
		SLTNode* tail = *phead;
		while (tail->next != NULL)//找到尾结点，尾结点的标志是next为空
		{
			tail = tail->next;
		}
		tail->next = newNode;
	}
}
