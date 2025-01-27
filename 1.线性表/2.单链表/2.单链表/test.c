#define _CRT_SECURE_NO_WARNINGS 1
#include"LinkList.h"

int main()
{
	LinkList* plist = NULL;//定义头指针

	//尾插
	//ListPushBack(&plist, 4);
	//ListPushBack(&plist, 3);
	//ListPushBack(&plist, 2);
	//ListPushBack(&plist, 1);
	//ListPrint(plist);

	////尾删
	//ListPopBack(&plist);
	//ListPopBack(&plist);
	//ListPopBack(&plist);
	//ListPopBack(&plist);
	//ListPrint(plist);

	//头插
	ListPushFront(&plist, 1);
	ListPushFront(&plist, 2);
	ListPushFront(&plist, 3);
	ListPushFront(&plist, 4);
	ListPrint(plist);

	//头删
	//ListPopFront(&plist);
	//ListPopFront(&plist);
	//ListPopFront(&plist);
	//ListPopFront(&plist);
	//ListPrint(plist);

	//查找元素
	LNode* ret = ListFind(plist, 1);
	if (ret != NULL)
	{
		printf("查找成功\n");
	}
	else
	{
		printf("查找失败\n");
	}

	return 0;
}