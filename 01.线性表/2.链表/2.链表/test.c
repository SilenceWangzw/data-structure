#define _CRT_SECURE_NO_WARNINGS
#include"Slist.h"

int main()
{
	SlistNode* phead = NULL;//Õ∑÷∏’Î

	SlistPushBack(&phead, 1);
	SlistPushBack(&phead, 2);
	SlistPushBack(&phead, 3);
	SlistPushBack(&phead, 4);
	SlistPrint(phead);


	SlistPopBack(&phead); 
	SlistPopBack(&phead);
	SlistPrint(phead);

	return 0;
}