#define _CRT_SECURE_NO_WARNINGS 1
#include "student.h"
/**************************************************
�������ܣ���ʾ�˵�������ѡ��Ĳ˵�����
����˵������
����ֵ�� �˵�����
****************************************************/
int MenuSelect(void)
{
	int option;
	int input;
	system("cls");
	printf("\n\n\n");
	printf("\t*************************************************\n");
	printf("\t*1. ����ԭʼ����\n");
	printf("\t*2. ͳ����߷֡���ͷ֡�ƽ���ֺ���߷�ѧ��ѧ��\n");
	printf("\t*3. ͳ������Ͳ���������\n");
	printf("\t*4. ��ƽ��������\n");
	printf("\t*5. ��ʾѧ���ɼ�ͳ�Ʊ�\n");
	printf("\t*6. �˳�����\n");
	printf("\n\t ���ֶ�Ӧ����ѡ����ѡ 1-6��");
	while (1)
	{
		fflush(stdin);
		input = scanf("%d", &option);
		if (input != 1)
		{
			printf("\n\t ���������ѡ 1-6:");
			fflush(stdin);
		}
		else if ((option < 1) || (option > 6))
			printf("\n\t ѡ�������ѡ 1-6:");
		else break;
	}
	return option;
}
/**************************************************
�������ܣ��˵�����
����˵�����˵�����
����ֵ�� ���� 0��ѡ�������˵������������У����� 1���������
****************************************************/
int MenuHandle(int option)
{
	int quit = 0;

	switch (option)
	{
	case 1:
		if (InputData() == 0)
		{
			printf("\n\n �������ݴ��󣬳����˳�");
			fflush(stdin);
			quit = 1;
		}
		else
			printf("\n ����������룬�����������......");
		getche();
		break;
	case 2:
		//StaticScore();
		printf("\n ��ɷ���ͳ�ƣ������������......");
		getche();
		break;
	case 3:
		//StaticPerson();
		printf("\n �������ͳ�ƣ������������......");
		getche();
		break;
	case 4:
		//SortByAve();
		printf("\n ������򣬰����������......");
		getche();
		break;
	case 5:
		//Display();
		printf("\n �����������......");
		getche();
		break;
	case 6:
		quit = 1;
		break;
	}
	return quit;
}
/**************************************************
������
****************************************************/
void main(void)
{
	//int i;
	//int option;
	//int quit;

	////SetConsoleTitle("ʵ���� �ɼ�����ϵͳ");  //���ÿ���̨����
	//system("color B0");                     //���ñ���ɫ��ǰ��ɫ
	//printf("\n\n\n\n\n");
	//printf("\t\t*************************************************\n");
	//printf("\t\t*\t\t\t\t\t\t*\n");
	//printf("\t\t*\t\t\t\t\t\t*\n");
	//printf("\t\t*\t\t\t\t\t\t*\n");
	//printf("\t\t*\t\t\t\t\t\t*\n");
	//printf("\t\t*\t\t\t\t\t\t*\n");
	//printf("\t\t*\t\tѧ���ɼ��������\t\t*\n");
	//printf("\t\t*\t\t\t\t\t\t*\n");
	//printf("\t\t*\t\t\t\t\t\t*\n");
	//printf("\t\t*\t\t\t\t\t\t*\n");
	//printf("\t\t*\t\t����������롭��\t\t*\n");
	//printf("\t\t*\t\t\t\t\t\t*\n");
	//printf("\t\t*\t\t\t\t\t\t*\n");
	//printf("\t\t*************************************************\n");
	//printf("\t\t\t\t\tBy: ����");
	//getche();
	//printf("\n\n\t\t���ڽ���");
	//for (i = 0; i < 5; i++)
	//{
	//	Sleep(600);
	//	printf(" .");
	//}

	//while (1)
	//{
	//	option = MenuSelect();
	//	quit = MenuHandle(option);
	//	if (quit == 1)
	//	{
	//		printf("\n\n\t�����˳���ллʹ��...\n");
	//		break;
	//	}
	//}
}