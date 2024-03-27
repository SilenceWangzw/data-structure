#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

void SeqListTestBack()
{
	SL sl;
	SeqListInit(&sl);

	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	SeqListPushBack(&sl, 6);
	SeqListPrint(&sl);


	SeqListPopBack(&sl);
	SeqListPopBack(&sl);
	SeqListPopBack(&sl);
	SeqListPrint(&sl);

	SeqListDestory(&sl);
}


void SeqListTestFront()
{
	SL sl;
	SeqListInit(&sl);

	SeqListPushFront(&sl, 5);
	SeqListPushFront(&sl, 4);
	SeqListPushFront(&sl, 3);
	SeqListPushFront(&sl, 2);
	SeqListPushFront(&sl, 1);
	SeqListPrint(&sl);

	SeqListPopFront(&sl);
	SeqListPopFront(&sl);
	SeqListPopFront(&sl);
	SeqListPrint(&sl);

	SeqListDestory(&sl);
}


void SeqListTestFind()
{
	SL sl;
	SeqListInit(&sl);

	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);

	int ret = SeqListFind(&sl, 3);
	printf("%d\n", ret);

	SeqListDestory(&sl);
}


void SeqListTestIE()
{
	SL sl;
	SeqListInit(&sl);

	SeqListInsert(&sl, 0, 1);
	SeqListInsert(&sl, 1, 2);
	SeqListInsert(&sl, 2, 3);
	SeqListInsert(&sl, 3, 4);
	SeqListInsert(&sl, 4, 5);
	SeqListPrint(&sl);

	SeqListErase(&sl, 0);
	SeqListPrint(&sl);

	SeqListDestory(&sl);
}


int main()
{
	//SeqListTestBack();
	//SeqListTestFront();
	//SeqListTestFind();
	SeqListTestIE();
	return 0;
}