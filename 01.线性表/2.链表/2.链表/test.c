#define _CRT_SECURE_NO_WARNINGS
#include"Slist.h"


void TestSlist1()
{
	SLTNode* plist = NULL;//��ʼ����Ϊ��
	SlistPushBack(&plist, 1);
	SlistPushBack(&plist, 2);
	SlistPushBack(&plist, 3);
	SlistPushBack(&plist, 4);
	SListPrint(plist);
}

int main()
{
	TestSlist1();
	return 0;
}