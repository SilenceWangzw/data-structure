#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"


void TestSeqListPushPop()
{
	SeqList ps;
	//初始化
	SeqListInit(&ps);

	//尾插
	SeqListPushBack(&ps, 1);
	SeqListPushBack(&ps, 2);
	SeqListPushBack(&ps, 3);
	SeqListPushBack(&ps, 4);
	SeqListPushBack(&ps, 5);
	SeqListPrint(&ps);

	//尾删
	SeqListPopBack(&ps);
	SeqListPopBack(&ps);
	SeqListPrint(&ps);

	//头插
	SeqListPushFront(&ps, -1);
	SeqListPushFront(&ps, -2);
	SeqListPushFront(&ps, -3);
	SeqListPrint(&ps);

	//头删
	SeqListPopFront(&ps);
	SeqListPopFront(&ps);
	SeqListPopFront(&ps);
	SeqListPrint(&ps);

	//任意位置插入
	SeqListInsert(&ps, 4, 4);
	SeqListPrint(&ps);

	//任意位置删除
	SeqListErase(&ps, 2);
	SeqListPrint(&ps);
}


int main()
{
	TestSeqListPushPop();
	return 0;
}