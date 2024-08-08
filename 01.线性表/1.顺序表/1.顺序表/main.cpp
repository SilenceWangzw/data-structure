#define _CRT_SECURE_NO_WARNINGS 1
#include"SeqList.h"


int main()
{
	SeqList mylist;
	InitSeqList(&mylist);

	ElemType Item = 0;
	int pos = 0;

	int select = 1;
	while (select)
	{
		printf("******************************************\n");
		printf("*****  [1]push_back   [2]push_front  *****\n");
		printf("*****  [3]show_list   [4]pop_back    *****\n");
		printf("*****  [5]pop_front   [6]insert_pos  *****\n");
		printf("*****  [7]find        [8]length      *****\n");
		printf("*****  [9]delete_pos  [10]delete_val *****\n");
		printf("*****  [11]sort       [11]reverse    *****\n");
		printf("*****  [12]clear      [14]destory    *****\n");
		printf("*****  [0] quit_system               *****\n");
		printf("******************************************\n");
		printf("��ѡ��:> ");
		scanf("%d", &select);
		if (select == 0)
			break;

		switch (select)
		{
		case 1:
			printf("������Ҫ�����Ԫ��(-1����):> ");
			while (scanf("%d", &Item), Item != -1)
			{
				push_back(&mylist, Item);
			}
			break;
		case 2:
			printf("������Ҫ���������(-1����):>");
			while (scanf("%d", &Item), Item != -1)
			{
				push_front(&mylist, Item);
			}
			break;
		case 3:
			show_list(&mylist);
			break;
		case 4:
			pop_back(&mylist);
			break;
		case 5:
			pop_front(&mylist);
			break;
		case 6:
			printf("������Ҫ���������(-1����):> ");
			scanf("%d", &Item);
			printf("������Ҫ�����λ��:> ");
			scanf("%d", &pos);
			insert_pos(&mylist, pos, Item);
			break;
		case 7:
			printf("������Ҫ���ҵ�����:> ");
			scanf("%d", &Item);
			pos = find(&mylist, Item);
			if (pos == -1)
			{
				printf("���ҵ�����%d��˳����в�����\n", Item);;
			}
			else
			{
				printf("���ҵ�����%d��˳����е�%d�±�λ��\n", Item, pos);
			}
			break;
		case 8:
			printf("˳���ĳ���Ϊ:> %d\n", length(&mylist));
			break;
		default:
			printf("�����ѡ���������������\n");
			break;
		}
	}


	return 0;
}