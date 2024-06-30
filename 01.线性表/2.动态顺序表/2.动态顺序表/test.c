#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"


//void SeqListTest1()
//{
//	SeqList SL;
//	SeqListInit(&SL);
//
//	SeqListPushBack(&SL, 1);
//	SeqListPushBack(&SL, 2);
//	SeqListPushBack(&SL, 3);
//	SeqListPushBack(&SL, 4);
//	SeqListPushBack(&SL, 5);
//	SeqListPushBack(&SL, 6);
//	SeqListPushBack(&SL, 7);
//
//	SeqListPrint(&SL);
//}


void SeqListTest2()
{
	SeqList SL;
	SeqListInit(&SL);

	SeListPushFront(&SL, 6);
	SeListPushFront(&SL, 5);
	SeListPushFront(&SL, 4);
	SeListPushFront(&SL, 3);
	SeListPushFront(&SL, 2);
	SeListPushFront(&SL, 1);

	SeqListPrint(&SL);
}
int main()
{
	//SeqListTest1();
	SeqListTest2();
	return 0;
}