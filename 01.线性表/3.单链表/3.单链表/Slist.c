#define _CRT_SECURE_NO_WARNINGS 1
#include"Slist.h"


//��ӡ
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


//β��
void SlistPushBack(SlistNode** phead, SLTDataType x)
{
	//�����½��
	SlistNode* newnode = (SlistNode*)malloc(sizeof(SLTDataType));
	newnode->data = x;
	newnode->next = NULL;

	if (*phead == NULL)
	{
		*phead = newnode;
	}
	else{
		//�ҵ�β���
		SlistNode* tail = *phead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		//������
		tail->next = newnode;
	}

}