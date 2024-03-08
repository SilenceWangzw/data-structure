#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

//测试顺序表的插入删除操作
void TestSeqListPushPop()
{
	SeqList s;

	//初始化
	SeqListInit(&s);

	//尾插
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPushBack(&s, 6);
	SeqListPrint(&s);

	//尾删
	SeqListPopBack(&s);
	SeqListPopBack(&s);
	SeqListPrint(&s);

	//头插
	SeqListPushFront(&s, 0);
	SeqListPushFront(&s, -1);
	SeqListPushFront(&s, -2);
	SeqListPrint(&s);

	//头删
	SeqListPopFront(&s);
	SeqListPopFront(&s);
	SeqListPrint(&s);

	//任意位置插入
	SeqListInsert(&s, 5, 5);
	SeqListPrint(&s);

	//任意位置删除
	SeqListErase(&s, 0);
	SeqListPrint(&s);

	//查找
	int ret = SeqListFind(&s, 5);
	printf("%d\n", ret);
}

int main()
{
	TestSeqListPushPop();

	return 0;
}