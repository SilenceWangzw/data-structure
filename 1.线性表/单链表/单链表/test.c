#define _CRT_SECURE_NO_WARNINGS
#include"LinkList.h"

int main()
{
	LinkList* plist = NULL;//����ͷָ��

	//β��
	//SListPushBack(&plist, 1);
	//SListPushBack(&plist, 2);
	//SListPushBack(&plist, 3);
	//SListPushBack(&plist, 4);
	//SListPrint(plist);

	//βɾ
	//SListPopBack(&plist);
	//SListPopBack(&plist);
	//SListPopBack(&plist);
	//SListPopBack(&plist);
	//SListPrint(plist);

	//ͷ��
	//SListPushFront(&plist, 4);
	//SListPushFront(&plist, 3);
	//SListPushFront(&plist, 2);
	//SListPushFront(&plist, 1);
	//SListPrint(plist);

	//ͷɾ
	//SListPopFront(&plist);
	//SListPopFront(&plist);
	//SListPopFront(&plist);
	//SListPopFront(&plist);
	//SListPopFront(&plist);
	//SListPrint(plist);


	//���ҡ��޸�
	//SListPushBack(&plist, 4);
	//SListPushBack(&plist, 3);
	//SListPushBack(&plist, 2);
	//SListPushBack(&plist, 1);
	//SListNode* pos = SListFind(plist, 3);
	//if (pos != NULL)
	//{
	//	pos->data = 30;
	//}
	//SListPrint(plist);


	//ĳ��λ�ò���
	//SListPushBack(&plist, 1);
	//SListPushBack(&plist, 2);
	//SListPushBack(&plist, 3);
	//SListPushBack(&plist, 4);
	////��3��ǰ�����һ��30 
	//SListNode* pos = SListFind(plist, 1);
	//if (pos != NULL)
	//{
	//	SListInsert(&plist, pos, 10);
	//}
	//SListPrint(plist);


	//ĳ��λ��ɾ��
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	//ɾ��3
	SListNode* pos = SListFind(plist, 1);
	if (pos != NULL)
	{
		SListErase(&plist, pos);
	}
	SListPrint(plist);

	return 0;
}