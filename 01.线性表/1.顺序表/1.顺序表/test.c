#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"


void TestSeqListBack()
{
	SL sl;
	SeqListInit(&sl);

	//β��
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	SeqListPrint(&sl);

	//βɾ
	SeqListPopBack(&sl);
	SeqListPopBack(&sl);
	SeqListPrint(&sl);
}


void TestSeqListFront()
{
	SL sl;
	SeqListInit(&sl);

	//ͷ��
	SeqListPushFront(&sl, 5);
	SeqListPushFront(&sl, 4);
	SeqListPushFront(&sl, 3);
	SeqListPushFront(&sl, 2);
	SeqListPushFront(&sl, 1);
	SeqListPrint(&sl);

	//ͷɾ
	SeqListPopFront(&sl);
	SeqListPopFront(&sl);
	SeqListPopFront(&sl);
	SeqListPrint(&sl);
}

int main()
{

	TestSeqListFront();
	
	return 0;
}