#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"


//void SeqListTest1()
//{
//	SeqList SL;
//	SeqListInit(&SL);
//
//	SeqListPushBack(&SL, 1);
//	SeqListPushBack(&SL, 2);
//	SeqListPushBack(&SL, 3);
//	SeqListPushBack(&SL, 4);
//	SeqListPushBack(&SL, 5);
//	SeqListPushBack(&SL, 6);
//	SeqListPushBack(&SL, 7);
//
//	SeqListPrint(&SL);
//}


//void SeqListTest2()
//{
//	SeqList SL;
//	SeqListInit(&SL);
//
//	//ͷ��
//	SeListPushFront(&SL, 6);
//	SeListPushFront(&SL, 5);
//	SeListPushFront(&SL, 4);
//	SeListPushFront(&SL, 3);
//	SeListPushFront(&SL, 2);
//	SeListPushFront(&SL, 1);
//
//	SeqListPrint(&SL);
//
//	//βɾ
//	SeqListPopBack(&SL);
//	SeqListPrint(&SL);
//
//	//ͷɾ
//	SeqListPopFront(&SL);
//	SeqListPrint(&SL);
//}


//void SeqListTest3()
//{
//	SeqList SL;
//	SeqListInit(&SL);
//
//	//ָ��λ�ò���
//	SeqListInsert(&SL, 0, 1);
//	SeqListInsert(&SL, 1, 2);
//	SeqListInsert(&SL, 2, 3);
//	SeqListInsert(&SL, 3, 4);
//	SeqListInsert(&SL, 4, 5);
//	SeqListPrint(&SL);
//
//
//	//ָ��λ��ɾ��
//	SeqListDelete(&SL, 2);
//	SeqListPrint(&SL);
//
//	//����
//	SeqListDestory(&SL);
//}


void menu()
{
	printf("***************************************\n");
	printf("1.β�����ݣ�  2.ͷ������\n");
	printf("3.βɾ���ݣ�  4.ͷɾ����\n");
	printf("5.��ӡ���ݣ�  -1.�˳�   \n");
	printf("***************************************\n");
	printf("��������Ҫ����ѡ��:> \n");
}


int main()
{
	//SeqListTest1();
	//SeqListTest2();
	//SeqListTest3();
	SeqList SL;
	SeqListInit(&SL);

	int option = 0;
	int x = 0;
	while (option != -1)
	{
		menu();
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			printf("������Ҫ��������ݣ���-1����\n");
			do
			{
				scanf("%d", &x);
				if (x != -1)
				{
					SeqListPushBack(&SL, x);
				}
			} while (x != -1);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		default:
			break;
		}
	}

	SeqListDestory(&SL);
	return 0;
}