#define _CRT_SECURE_NO_WARNINGS 1
#include"LinkList.h"

int main()
{
	LinkList* plist = NULL;//����ͷָ��

	//β��
	//ListPushBack(&plist, 4);
	//ListPushBack(&plist, 3);
	//ListPushBack(&plist, 2);
	//ListPushBack(&plist, 1);
	//ListPrint(plist);

	////βɾ
	//ListPopBack(&plist);
	//ListPopBack(&plist);
	//ListPopBack(&plist);
	//ListPopBack(&plist);
	//ListPrint(plist);

	//ͷ��
	ListPushFront(&plist, 1);
	ListPushFront(&plist, 2);
	ListPushFront(&plist, 3);
	ListPushFront(&plist, 4);
	ListPrint(plist);

	//ͷɾ
	//ListPopFront(&plist);
	//ListPopFront(&plist);
	//ListPopFront(&plist);
	//ListPopFront(&plist);
	//ListPrint(plist);

	//����Ԫ��
	LNode* ret = ListFind(plist, 1);
	if (ret != NULL)
	{
		printf("���ҳɹ�\n");
	}
	else
	{
		printf("����ʧ��\n");
	}

	return 0;
}