#define _CRT_SECURE_NO_WARNINGS 1
#include "student.h"
/*************************************************
 �������ܣ���ʾѧ���ɼ�ͳ�Ʊ�
 ����˵������
 ����ֵ�� ��
****************************************************/
void DisplayStat(void)
{
	int i;
	system("cls"); //����
	printf("\n\n\n");
	printf("�� Ŀ��߷� ��ͷ� ƽ���� �������� ���������� ��߷�ѧ��ѧ��\n");
	for (i = 0; i < SubCount; i++)
	{
		//printf("%s %6d %6d %6d %7d %9d \t%d\n", cSubject[i], iScoreHigh[i], iScoreLow[i], iScoreAve[i], iFineCount[i], iFailCount[i], iHighNo[i]);
	}
}
/*************************************************
 �������ܣ���ʾѧ���ɼ������
 ����˵������
 ����ֵ�� ��
****************************************************/
void DisplaySort(void)
{
	int i;
	system("cls"); //����
	printf("\n\n\n");
	printf("ѧ��ѧ�� ������ɼ� ��ѧ�ɼ� Ӣ��ɼ� ���ĳɼ� �����ɼ�\n");
	for (i = 0; i < StuCount; i++)
	{
		printf("%8d %10d %8d %8d %8d %8d\n",
			iStuNo[i], Computer[i], Math[i], English[i], Chinese[i], Physics[i]);
	}
}