#define _CRT_SECURE_NO_WARNINGS 1
#include"Slist.h"


void TestSlist1()
{
	SlistNode* phead = NULL;//����ͷ���
	SlistPushBack(&phead, 1);
	SlistPushBack(&phead, 2);
	SlistPushBack(&phead, 3);
	SlistPushBack(&phead, 4);

	SlistPrint(&phead);

}


int main()
{
	TestSlist1();
	return 0;
}