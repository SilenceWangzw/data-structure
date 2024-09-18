#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"

int main()
{
	SeqList s;
	
	////Î²²åÎ²É¾²âÊÔ
	//SeqListInit(&s);
	//SeqListPushBack(&s, 1);
	//SeqListPushBack(&s, 2);
	//SeqListPushBack(&s, 3);
	//SeqListPushBack(&s, 4);
	//SeqListPushBack(&s, 5);
	//SeqListPrint(&s);

	//SeqListPopBack(&s);
	//SeqListPopBack(&s);
	//SeqListPrint(&s);




	//Í·²åÍ·É¾²âÊÔ
	//SeqListInit(&s);
	//SeqListPushFront(&s, 1);
	//SeqListPushFront(&s, 2);
	//SeqListPushFront(&s, 3);
	//SeqListPushFront(&s, 4);
	//SeqListPushFront(&s, 5);
	//SeqListPrint(&s);

	//SeqListPopFront(&s);
	//SeqListPopFront(&s);
	//SeqListPrint(&s);


	//ÈÎÒâÎ»ÖÃ²åÈëÉ¾³ý²âÊÔ
	//SeqListInit(&s);
	//SeqListInsert(&s, 0, 1);
	//SeqListInsert(&s, 1, 2);
	//SeqListInsert(&s, 2, 3);
	//SeqListInsert(&s, 3, 4);
	//SeqListPrint(&s);

	//SeqListErase(&s, 2);
	//SeqListPrint(&s);




	//²éÕÒ²âÊÔ
	SeqListInit(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPushBack(&s, 6);

	int pos = SeqListFind(&s, 3);
	if (pos >= 0)
	{
		SeqListErase(&s, pos);
		SeqListPrint(&s);
	}


	return 0;
}