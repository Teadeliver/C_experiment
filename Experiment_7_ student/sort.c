#define _CRT_SECURE_NO_WARNINGS 1
#include "student.h"
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
 �������ܣ���ƽ����Ϊ�ؼ��ֶ�ͳ�ƽ����������
 ����˵������
 ����ֵ�� ��
****************************************************/
//����ð���㷨
void SortByAve(struct STU output[])
{
	int i, j;
	struct STU stutemp;
	for (i = 1; i < SubCount; i++) //�� SubCount ��
	{
		for (j = 0; j < SubCount - i; j++) //ÿ�� SubCount-i �αȽ�
		{
			if (output[j].Avescore > output[j + 1].Avescore)
			{
				stutemp = output[j];
				output[j] = output[j+1];
				output[j + 1] = stutemp;
			}
		}
	}
}