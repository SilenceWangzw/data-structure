#define _CRT_SECURE_NO_WARNINGS
#include"DuLinkList.h"

int main()
{
	DLinkList* plist = ListInit();

	////尾插
	//ListPushBack(plist, 1);
	//ListPushBack(plist, 2);
	//ListPushBack(plist, 3);
	//ListPushBack(plist, 4);
	//ListPrint(plist);

	////尾删
	//ListPopBack(plist);
	//ListPrint(plist);


	////头插
	//ListPushFront(plist, 1);
	//ListPushFront(plist, 2);
	//ListPushFront(plist, 3);
	//ListPushFront(plist, 4);
	//ListPrint(plist);

	////头删
	//ListPopFront(plist);
	//ListPopFront(plist);
	//ListPrint(plist);


	//查找
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	DLNode* pos = ListFind(plist, 3);
	//在3之前插入300
	ListInsert(pos, 300);
	ListPrint(plist);
	//删除3这个数据
	ListErase(pos);
	ListPrint(plist);


	ListDestory(plist);

	return 0;
}