#define _CRT_SECURE_NO_WARNINGS
#include"DuLinkList.h"

int main()
{
	DuLinkList* plist = ListInit();//����ͷָ�룬ָ��ͷ���

	////β��
	//ListPushBack(plist, 1);
	//ListPushBack(plist, 2);
	//ListPushBack(plist, 3);
	//ListPushBack(plist, 4);
	//ListPrint(plist);

	////βɾ
	//ListPopBack(plist);
	//ListPopBack(plist);
	//ListPopBack(plist);
	//ListPopBack(plist);
	//ListPrint(plist);


	////ͷ��
	//ListPushFront(plist, 4);
	//ListPushFront(plist, 3);
	//ListPushFront(plist, 2);
	//ListPushFront(plist, 1);
	//ListPrint(plist);

	////ͷɾ
	//ListPopFront(plist);
	//ListPopFront(plist);
	//ListPopFront(plist);
	//ListPopFront(plist);
	//ListPrint(plist);


	//����
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	DLNode* pos = ListFind(plist, 3);
	//��3֮ǰ����30
	ListInsert(pos, 30);
	ListPrint(plist);
	//ɾ��3
	ListErase(pos);
	ListPrint(plist);


	//����
	ListDestory(plist);

	return 0;
}