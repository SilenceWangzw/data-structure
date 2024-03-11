#define _CRT_SECURE_NO_WARNINGS
#include"Slist.h"


void TestSlist1()
{
	SLTNode* plist = NULL;//³õÊ¼Á´±íÎª¿Õ
	SlistPushBack(&plist, 1);
	SlistPushBack(&plist, 2);
	SlistPushBack(&plist, 3);
	SlistPushBack(&plist, 4);
	SListPrint(plist);

	SlistPushFront(&plist, 1);
	SlistPushFront(&plist, 2);
	SlistPushFront(&plist, 3);
	SlistPushFront(&plist, 4);
	SListPrint(plist);
}

int main()
{
	TestSlist1();
	return 0;
}