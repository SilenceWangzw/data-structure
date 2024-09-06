#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

int main()
{
	SeqList s;
	
	////Œ≤≤ÂŒ≤…æ≤‚ ‘
	//SeqListInit(&s);
	//SeqListPushBack(&s, 1);
	//SeqListPushBack(&s, 2);
	//SeqListPushBack(&s, 3);
	//SeqListPushBack(&s, 4);
	//SeqListPushBack(&s, 5);
	//SeqListPrint(&s);

	//SeqListPopBack(&s);
	//SeqListPopBack(&s);
	//SeqListPrint(&s);




	//Õ∑≤ÂÕ∑…æ≤‚ ‘
	SeqListInit(&s);
	SeqListPushFront(&s, 1);
	SeqListPushFront(&s, 2);
	SeqListPushFront(&s, 3);
	SeqListPushFront(&s, 4);
	SeqListPushFront(&s, 5);
	SeqListPrint(&s);

	SeqListPopFront(&s);
	SeqListPopFront(&s);
	SeqListPrint(&s);


	return 0;
}