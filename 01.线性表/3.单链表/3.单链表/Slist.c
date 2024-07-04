#define _CRT_SECURE_NO_WARNINGS 1
#include"Slist.h"


//打印
void SlistPrint(SlistNode** phead)
{
	SlistNode* cur = *phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL");
}


//尾插
void SlistPushBack(SlistNode** phead, SLTDataType x)
{
	//申请新结点
	SlistNode* newnode = (SlistNode*)malloc(sizeof(SLTDataType));
	newnode->data = x;
	newnode->next = NULL;

	if (*phead == NULL)
	{
		*phead = newnode;
	}
	else{
		//找到尾结点
		SlistNode* tail = *phead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		//插入结点
		tail->next = newnode;
	}

}