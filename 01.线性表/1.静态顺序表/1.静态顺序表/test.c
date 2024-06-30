#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"


void TestSeqList1()
{
	SeqList SL;
	SeqListInit(&SL);

	SeqListPushBack(&SL, 1);
	SeqListPushBack(&SL, 2);
	SeqListPushBack(&SL, 3);
	SeqListPushBack(&SL, 4);
	SeqListPushBack(&SL, 5);

}

int main()
{
	TestSeqList1();
	return 0;
}