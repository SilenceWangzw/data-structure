#define _CRT_SECURE_NO_WARNINGS 1
#include"Slist.h"


int main()
{
	SListNode* phead = NULL;//Õ∑÷∏’Î


	SListPushBack(&phead, 1);
	SListPushBack(&phead, 2);
	SListPushBack(&phead, 3);
	SListPushBack(&phead, 4);
	SListPrint(phead);

	SListPopBack(&phead);
	SListPopBack(&phead);
	SListPopBack(&phead);
	SListPrint(phead);

	return 0;
}
