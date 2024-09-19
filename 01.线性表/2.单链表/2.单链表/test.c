#define _CRT_SECURE_NO_WARNINGS 1
#include"LinkList.h"


int main()
{
	LNode* plist = NULL;//Õ∑÷∏’Î

	//Œ≤≤ÂŒ≤…æ≤‚ ‘
	ListPushBack(&plist, 1);
	ListPushBack(&plist, 2);
	ListPushBack(&plist, 3);
	ListPushBack(&plist, 4);
	ListPrint(plist);

	ListPopBack(&plist);
	ListPopBack(&plist);
	ListPopBack(&plist);
	ListPopBack(&plist);
	ListPopBack(&plist);
	ListPrint(plist);

	return 0;
}

