#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"


void TestSeqListPushPop()
{
	SeqList ps;
	//��ʼ��
	SeqListInit(&ps);

	//β��
	SeqListPushBack(&ps, 1);
	SeqListPushBack(&ps, 2);
	SeqListPushBack(&ps, 3);
	SeqListPushBack(&ps, 4);
	SeqListPushBack(&ps, 5);
	SeqListPrint(&ps);

	//βɾ
	SeqListPopBack(&ps);
	SeqListPopBack(&ps);
	SeqListPrint(&ps);

	//ͷ��
	SeqListPushFront(&ps, -1);
	SeqListPushFront(&ps, -2);
	SeqListPushFront(&ps, -3);
	SeqListPrint(&ps);

	//ͷɾ
	SeqListPopFront(&ps);
	SeqListPopFront(&ps);
	SeqListPopFront(&ps);
	SeqListPrint(&ps);

	//����λ�ò���
	SeqListInsert(&ps, 4, 4);
	SeqListPrint(&ps);

	//����λ��ɾ��
	SeqListErase(&ps, 2);
	SeqListPrint(&ps);
}


int main()
{
	TestSeqListPushPop();
	return 0;
}