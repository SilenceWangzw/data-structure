#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

//≤‚ ‘Õ∑Œ≤µƒ≤Â»Î…æ≥˝
void TestSeqListPushPop()
{
	SeqList s;
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPushBack(&s, 6);
	SeqListPushBack(&s, 7);
	SeqListPrint(&s);


	SeqListPopBack(&s);
	SeqListPopBack(&s);
	SeqListPrint(&s);


	SeqListPushFront(&s, -1);
	SeqListPushFront(&s, -2);
	SeqListPushFront(&s, -3);
	SeqListPrint(&s);

	
	SeqListPopFront(&s);
	SeqListPopFront(&s);
	SeqListPrint(&s);

}

int main()
{
	SeqList s;
	TestSeqListPushPop();

	return 0;
}