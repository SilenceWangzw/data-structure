#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"

//����˳���Ĳ���ɾ������
void TestSeqListPushPop()
{
	SeqList s;

	//��ʼ��
	SeqListInit(&s);

	//β��
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPushBack(&s, 6);
	SeqListPrint(&s);

	//βɾ
	SeqListPopBack(&s);
	SeqListPopBack(&s);
	SeqListPrint(&s);

	//ͷ��
	SeqListPushFront(&s, 0);
	SeqListPushFront(&s, -1);
	SeqListPushFront(&s, -2);
	SeqListPrint(&s);

	//ͷɾ
	SeqListPopFront(&s);
	SeqListPopFront(&s);
	SeqListPrint(&s);

	//����λ�ò���
	SeqListInsert(&s, 5, 5);
	SeqListPrint(&s);

	//����λ��ɾ��
	SeqListErase(&s, 0);
	SeqListPrint(&s);

	//����
	int ret = SeqListFind(&s, 5);
	printf("%d\n", ret);
}

int main()
{
	TestSeqListPushPop();

	return 0;
}