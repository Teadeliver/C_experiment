#define _CRT_SECURE_NO_WARNINGS 1
#include "student.h"
//����ȫ�ֱ���
//���ȫ��ѧ��ѧ�š�������ɼ�����ѧ�ɼ���Ӣ��ɼ������ĳɼ��������ɼ�
int iStuNo[StuCount]; //ȫ��ѧ��
int Computer[StuCount]; //ȫ�������γ̳ɼ�
int Math[StuCount]; //ȫ����ѧ�γ̳ɼ�
int English[StuCount]; //ȫ��Ӣ��γ̳ɼ�
int Chinese[StuCount]; //ȫ�����Ŀγ̳ɼ�
int Physics[StuCount]; //ȫ�������γ̳ɼ�
/**************************************************
�������ܣ�������Ϣʾ��
����˵������
����ֵ�� ��
****************************************************/
void InputEX()
{
	system("cls");
	printf("\n\n ����������ʾ��˳��͸�ʽ����ԭʼ���ݣ�TEB����������\n");
	printf("\tѧ��\t�����\t��ѧ\tӢ��\t����\t����\n");
	printf("����\t:");
	//Sleep(800);
	printf("001\t");
	//Sleep(800);
	printf("99\t");
	//Sleep(800);
	printf("88\t");
	//Sleep(800);
	printf("77\t");
	//Sleep(800);
	printf("66\t");
	//Sleep(800);
	printf("55\t");
	putchar('\n');
}
/**************************************************
�������ܣ�
 ����ȫ��ѧ��ѧ�š�������ɼ�����ѧ�ɼ���Ӣ��ɼ������ĳɼ��������ɼ�
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
		scanf("%d", &iStuNo[i]);
		scanf("%d", &Computer[i]);
		scanf("%d", &Math[i]);
		scanf("%d", &English[i]);
		scanf("%d", &Chinese[i]);
		scanf("%d", &Physics[i]);
		if (Computer[i] > 100 || Computer[i] < 0)
			break;
		if (Math[i] > 100 || Math[i] < 0)
			break;
		if (English[i] > 100 || English[i] < 0)
			break;
		if (Chinese[i] > 100 || Chinese[i] < 0)
			break;
		if (Physics[i] > 100 || Physics[i] < 0)
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