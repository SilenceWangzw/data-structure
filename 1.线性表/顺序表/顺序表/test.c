#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

int main()
{
	SeqList L;
	//��ʼ��
	SeqListInit(&L);

	//β��
	//SeqListPushBack(&L, 5);
	//SeqListPushBack(&L, 4);
	//SeqListPushBack(&L, 3);
	//SeqListPushBack(&L, 2);
	//SeqListPushBack(&L, 1);
	//SeqListPrint(&L);

	//βɾ
	//SeqListPopBack(&L);
	//SeqListPopBack(&L);
	//SeqListPrint(&L);


	//ͷ��
	//SeqListPushFront(&L, 1);
	//SeqListPushFront(&L, 2);
	//SeqListPushFront(&L, 3);
	//SeqListPushFront(&L, 4);
	//SeqListPushFront(&L, 5);
	//SeqListPrint(&L);

	//ͷɾ
	//SeqListPopFront(&L);
	//SeqListPopFront(&L);
	//SeqListPopFront(&L);
	//SeqListPopFront(&L);
	//SeqListPrint(&L);


	//����λ�ò���
	//SeqListPushBack(&L, 4);
	//SeqListPushBack(&L, 3);
	//SeqListPushBack(&L, 2);
	//SeqListPushBack(&L, 1);
	//SeqListInsert(&L, 0, 5);
	//SeqListPrint(&L);

	//����λ��ɾ��
	//SeqListErase(&L, 4);
	//SeqListPrint(&L);


	//����Ԫ��
	SeqListPushBack(&L, 1);
	SeqListPushBack(&L, 2);
	SeqListPushBack(&L, 3);
	SeqListPushBack(&L, 4);
	int ret = SeqListFind(&L, 4);
	if (ret >= 0)
	{
		printf("���ҳɹ���Ԫ���±�Ϊ:%d\n", ret);
	}
	else
	{
		printf("Ԫ�ز�����\n");
	}


	return 0;
}