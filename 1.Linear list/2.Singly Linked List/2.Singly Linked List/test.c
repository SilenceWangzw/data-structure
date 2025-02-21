#define _CRT_SECURE_NO_WARNINGS
#include"LinkList.h"

int main()
{
	LinkList* plist = NULL;//定义头指针

	//尾插
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);

	//尾删
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPrint(plist);

	return 0;
}