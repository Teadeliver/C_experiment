#define _CRT_SECURE_NO_WARNINGS 1
#include "student.h"

int iStuNo[StuCount]; //ȫ��ѧ��
int iComputer[StuCount]; //ȫ�������γ̳ɼ�
int iMath[StuCount]; //ȫ����ѧ�γ̳ɼ�
int iEnglish[StuCount]; //ȫ��Ӣ��γ̳ɼ�
int iChinese[StuCount]; //ȫ�����Ŀγ̳ɼ�
int iPhysics[StuCount]; //ȫ�������γ̳ɼ�
struct STU
{
	char subject[7];
	int Highscore;
	int Lowscore;
	int Avescore;
	int FineCount;
	int FailCount;
	int StuNo;
};
struct STU output[SubCount];
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
	printf("\n\n\n***********************************************");
	printf("\t1. ����ԭʼ����\n");
	printf("\t2. ͳ����߷֡���ͷ֡�ƽ���ֺ���߷�ѧ��ѧ��\n");
	printf("\t3. ͳ������Ͳ���������\n");
	printf("\t4. ��ƽ�������򣬲���ʾ������\n");
	printf("\t5. ��ʾѧ���ɼ�ͳ�Ʊ�\n");
	printf("\t6. �˳�����\n");
	printf("\n\t ���ֶ�Ӧ����ѡ����ѡ 1-6��");

	while (1)
	{
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
	case 2:begin();
		StaticScore();
		printf("\n ��ɷ���ͳ�ƣ������������......");
		getche();
		break;
	case 3: StaticPerson();
		printf("\n �������ͳ�ƣ������������......");
		getche();
		break;
	case 4: SortByAve(output);
		DisplaySort();
		printf("\n ������򣬰����������......");
		getche();
		break;
	case 5: DisplayStat();
		printf("\n �����������......");
		getche();
		break;
	case 6: quit = 1;
		break;
	}
	return quit;
}
/**************************************************
 ������
****************************************************/
void main(void)
{
	int option;
	int quit;
	printf("\n\n\n\n\n");
	printf("\t\t*******************************************\n");
	printf("\t\t* *\n");
	printf("\t\t* *\n");
	printf("\t\t* *\n");
	printf("\t\t* *\n");
	printf("\t\t* *\n");
	printf("\t\t* ѧ���ɼ�������� *\n");
	printf("\t\t* *\n");
	printf("\t\t* *\n");
	printf("\t\t* *\n");
	printf("\t\t* ����������롭�� *\n");
	printf("\t\t* *\n");
	printf("\t\t* *\n");
	printf("\t\t*******************************************\n");
	getche();
	while (1)
	{
		option = MenuSelect();

		quit = MenuHandle(option);
		if (quit == 1) break;
	}
}
