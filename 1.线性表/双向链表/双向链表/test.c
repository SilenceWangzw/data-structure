#define _CRT_SECURE_NO_WARNINGS
#include"DuLinkList.h"

int main()
{
	DLinkList* plist = ListInit();

	////β��
	//ListPushBack(plist, 1);
	//ListPushBack(plist, 2);
	//ListPushBack(plist, 3);
	//ListPushBack(plist, 4);
	//ListPrint(plist);

	////βɾ
	//ListPopBack(plist);
	//ListPrint(plist);


	////ͷ��
	//ListPushFront(plist, 1);
	//ListPushFront(plist, 2);
	//ListPushFront(plist, 3);
	//ListPushFront(plist, 4);
	//ListPrint(plist);

	////ͷɾ
	//ListPopFront(plist);
	//ListPopFront(plist);
	//ListPrint(plist);


	//����
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	DLNode* pos = ListFind(plist, 3);
	//��3֮ǰ����300
	ListInsert(pos, 300);
	ListPrint(plist);
	//ɾ��3�������
	ListErase(pos);
	ListPrint(plist);


	ListDestory(plist);

	return 0;
}