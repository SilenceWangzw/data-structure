#define _CRT_SECURE_NO_WARNINGS
#include"LinkList.h"

int main()
{
	LinkList* plist = NULL;//����ͷָ��

	//β��
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPrint(plist);

	//βɾ
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPopBack(&plist);
	SListPrint(plist);

	return 0;
}