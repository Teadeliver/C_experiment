#define _CRT_SECURE_NO_WARNINGS 1
#include "student.h"

struct STU student[StuCount];

/**************************************************
�������ܣ�������Ϣʾ��
����˵������
����ֵ�� ��
****************************************************/
void InputEX()
{
	system("cls");
	printf("\n\n ����������ʾ��˳��͸�ʽ����ԭʼ���ݣ�TEB����������\n");
	printf("************************************************************\n");
	printf("            ѧ��\t�����\t  ��ѧ\t  Ӣ��\t  ����\t  ����\n");
	printf(" ���� :  ");
	Sleep(800);
	printf("2020083000\t");
	Sleep(800);
	printf("  99\t");
	Sleep(800);
	printf("   88\t");
	Sleep(800);
	printf("   77\t");
	Sleep(800);
	printf("   66\t");
	Sleep(800);
	printf("   55\t");
	putchar('\n');
}

/**************************************************
�������ܣ�����ȫ��ѧ��ѧ�š�������ɼ�����ѧ�ɼ���Ӣ��ɼ������ĳɼ��������ɼ�
����˵������
����ֵ�� ���������ȷ���� 1�����򷵻� 0
****************************************************/
int InputData(void)
{
	int i;
	int flag = 0; //�����б���������ı�־

	InputEX();
	for (i = 0; i < StuCount; i++)
	{
		fflush(stdin);
		printf("NO.%2d\t:", i + 1);
		//����ѧ��ѧ�� ������ɼ� ��ѧ�ɼ� Ӣ��ɼ� ���ĳɼ� �����ɼ�
		scanf("%d\t%d\t%d\t%d\t%d\t%d",&student[i].Student_ID,&student[i].Computer, &student[i].Math, &student[i].English, &student[i].Chinese, &student[i].Physics);

		if (student[i].Computer > 100 || student[i].Computer < 0)
			break;
		if (student[i].Math > 100 || student[i].Math < 0)
			break;
		if (student[i].English > 100 || student[i].English < 0)
			break;
		if (student[i].Chinese > 100 || student[i].Chinese < 0)
			break;
		if (student[i].Physics > 100 || student[i].Physics < 0)
			break;
	}
	flag = i;
	if (flag == StuCount)
		return 1;
	else
	{
		fflush(stdin);
		return 0;
	}
}