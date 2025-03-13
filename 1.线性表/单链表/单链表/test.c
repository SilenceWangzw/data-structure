#define _CRT_SECURE_NO_WARNINGS
#include"LinkList.h"

int main()
{
	LinkList* plist = NULL;//定义头指针

	//尾插
	//SListPushBack(&plist, 1);
	//SListPushBack(&plist, 2);
	//SListPushBack(&plist, 3);
	//SListPushBack(&plist, 4);
	//SListPrint(plist);

	//尾删
	//SListPopBack(&plist);
	//SListPopBack(&plist);
	//SListPopBack(&plist);
	//SListPopBack(&plist);
	//SListPrint(plist);

	//头插
	//SListPushFront(&plist, 4);
	//SListPushFront(&plist, 3);
	//SListPushFront(&plist, 2);
	//SListPushFront(&plist, 1);
	//SListPrint(plist);

	//头删
	//SListPopFront(&plist);
	//SListPopFront(&plist);
	//SListPopFront(&plist);
	//SListPopFront(&plist);
	//SListPopFront(&plist);
	//SListPrint(plist);


	//查找、修改
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


	//某个位置插入
	//SListPushBack(&plist, 1);
	//SListPushBack(&plist, 2);
	//SListPushBack(&plist, 3);
	//SListPushBack(&plist, 4);
	////在3的前面插入一个30 
	//SListNode* pos = SListFind(plist, 1);
	//if (pos != NULL)
	//{
	//	SListInsert(&plist, pos, 10);
	//}
	//SListPrint(plist);


	//某个位置删除
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	//删除3
	SListNode* pos = SListFind(plist, 1);
	if (pos != NULL)
	{
		SListErase(&plist, pos);
	}
	SListPrint(plist);

	return 0;
}