#define _CRT_SECURE_NO_WARNINGS
#include"DuLinkList.h"

int main()
{
	DuLinkList* plist = ListInit();//定义头指针，指向头结点

	////尾插
	//ListPushBack(plist, 1);
	//ListPushBack(plist, 2);
	//ListPushBack(plist, 3);
	//ListPushBack(plist, 4);
	//ListPrint(plist);

	////尾删
	//ListPopBack(plist);
	//ListPopBack(plist);
	//ListPopBack(plist);
	//ListPopBack(plist);
	//ListPrint(plist);


	////头插
	//ListPushFront(plist, 4);
	//ListPushFront(plist, 3);
	//ListPushFront(plist, 2);
	//ListPushFront(plist, 1);
	//ListPrint(plist);

	////头删
	//ListPopFront(plist);
	//ListPopFront(plist);
	//ListPopFront(plist);
	//ListPopFront(plist);
	//ListPrint(plist);


	//查找
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	DLNode* pos = ListFind(plist, 3);
	//在3之前插入30
	ListInsert(pos, 30);
	ListPrint(plist);
	//删除3
	ListErase(pos);
	ListPrint(plist);


	//销毁
	ListDestory(plist);

	return 0;
}