#define _CRT_SECURE_NO_WARNINGS 1
#include"LinkList.h"


int main()
{
	LinkList* plist = NULL;//����ͷָ��

	SlistPushBack(&plist, 1);
	SlistPushBack(&plist, 2);
	SlistPushBack(&plist, 3);
	SlistPushBack(&plist, 4);
	SlistPrint(plist);


	////��1��ǰ�����10
	//LNode* pos = SlistFind(plist, 1);
	//if (pos)
	//{
	//	SlistInsert(&plist, pos, 10);
	//}
	//SlistPrint(plist);


	//ɾ��3��λ��
	LNode* pos = SlistFind(plist, 1);
	if (pos)
	{
		SlistErase(&plist, pos);
	}
	SlistPrint(plist);
	return 0;
}