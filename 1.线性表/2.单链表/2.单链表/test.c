#define _CRT_SECURE_NO_WARNINGS 1
#include"LinkList.h"


int main()
{
	LinkList* plist = NULL;//定义头指针

	SlistPushBack(&plist, 1);
	SlistPushBack(&plist, 2);
	SlistPushBack(&plist, 3);
	SlistPushBack(&plist, 4);
	SlistPrint(plist);


	////在1的前面插入10
	//LNode* pos = SlistFind(plist, 1);
	//if (pos)
	//{
	//	SlistInsert(&plist, pos, 10);
	//}
	//SlistPrint(plist);


	//删除3的位置
	LNode* pos = SlistFind(plist, 1);
	if (pos)
	{
		SlistErase(&plist, pos);
	}
	SlistPrint(plist);
	return 0;
}