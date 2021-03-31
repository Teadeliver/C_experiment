#include "student.h"

int iScoreHigh[SubCount]; //�Լ��������ѧ��Ӣ����ġ�������˳���Ÿ�����߷�
int iScoreLow[SubCount]; //�Լ��������ѧ��Ӣ����ġ�������˳���Ÿ�����ͷ�
int iScoreAve[SubCount]; //�Լ��������ѧ��Ӣ����ġ�������˳���Ÿ���ƽ����
int iHighNo[SubCount];
//�Լ��������ѧ��Ӣ����ġ�������˳���Ÿ�����߷�ѧ��ѧ��
int iFineCount[SubCount];
//�Լ��������ѧ��Ӣ����ġ�������˳���Ÿ��ƴ���������
int iFailCount[SubCount];
//�Լ��������ѧ��Ӣ����ġ�������˳���Ÿ��Ʋ���������

/**************************************************
�������ܣ�ͳ��ĳ�γ���߷ּ���߷�ѧ��
����˵����Score ָʾĳ�γ̳ɼ���Highest ָʾ��߷�
����ֵ�� ��߷�ѧ��
****************************************************/
int GetHigh(int* Score, int* Highest)
{
	int i;
	int High = 0;

	*Highest = Score[0];
	for (i = 1; i < StuCount; i++)
		if (Score[High] < Score[i])
		{
			High = i;
			*Highest = Score[High];
		}

	return iStuNo[High];
}
/**************************************************
�������ܣ�ͳ��ĳ�γ���ͷ�
����˵����Score ָʾĳ�γ̳ɼ�
����ֵ�� �ÿγ���ͷ�
****************************************************/
int GetLow(int* Score)
{
	int i;
	int Low = 0;

	for (i = 1; i < StuCount; i++)
		if (Score[Low] > Score[i])
			Low = i;

	return Score[Low];
}
/**************************************************
�������ܣ�ͳ��ĳ�γ�ƽ����
����˵����Score ָʾĳ�γ̳ɼ�
����ֵ�� �ÿγ�ƽ����
****************************************************/
int GetAve(int* Score)
{
	int i;
	int sum = 0;

	for (i = 0; i < StuCount; i++)
		sum += Score[i];

	return sum / i;
}
/**************************************************
�������ܣ�ͳ����߷֡���ͷ֡�ƽ���֡���߷�ѧ��
����˵������
����ֵ�� ��
****************************************************/
void StaticScore(void)
{
	int SubjectNo = 0;
	//SubjectNo=0,1,2,3,4 �ֱ��Ӧ���������ѧ��Ӣ����ġ����������Ŀ

//ͳ�Ƽ�����γ������Ϣ
	iHighNo[SubjectNo] = GetHigh(Computer, &iScoreHigh[SubjectNo]); //��߷ּ�ѧ��
	iScoreLow[SubjectNo] = GetLow(Computer); //��ͷ�
	iScoreAve[SubjectNo] = GetAve(Computer); //ƽ����
	SubjectNo++;

	//ͳ����ѧ�γ������Ϣ
	iHighNo[SubjectNo] = GetHigh(Math, &iScoreHigh[SubjectNo]); //��߷ּ�ѧ��
	iScoreLow[SubjectNo] = GetLow(Math); //��ͷ�
	iScoreAve[SubjectNo] = GetAve(Math); //ƽ����
	SubjectNo++;

	//ͳ��Ӣ��γ������Ϣ
	iHighNo[SubjectNo] = GetHigh(English, &iScoreHigh[SubjectNo]); //��߷ּ�ѧ��
	iScoreLow[SubjectNo] = GetLow(English); //��ͷ�
	iScoreAve[SubjectNo] = GetAve(English); //ƽ����
	SubjectNo++;

	//ͳ�����Ŀγ������Ϣ
	iHighNo[SubjectNo] = GetHigh(Chinese, &iScoreHigh[SubjectNo]); //��߷ּ�ѧ��
	iScoreLow[SubjectNo] = GetLow(Chinese); //��ͷ�
	iScoreAve[SubjectNo] = GetAve(Chinese); //ƽ����
	SubjectNo++;

	//ͳ�������γ������Ϣ
	iHighNo[SubjectNo] = GetHigh(Physics, &iScoreHigh[SubjectNo]); //��߷ּ�ѧ��
	iScoreLow[SubjectNo] = GetLow(Physics); //��ͷ�
	iScoreAve[SubjectNo] = GetAve(Physics); //ƽ����
	SubjectNo++;
}
/**************************************************
�������ܣ�ͳ������Ͳ���������
����˵������
����ֵ�� ��
****************************************************/
void StaticPerson(void)
{
	//SubjectNo=0,1,2,3,4 �ֱ��Ӧ���������ѧ��Ӣ����ġ����������Ŀ
	int SubjectNo = 0;
	//Fine����������Fail����������
	int j, Fine, Fail;

	//ͳ�Ƽ���������Ϣ
	Fine = 0, Fail = 0;
	for (j = 0; j < StuCount; j++)
	{
		if (Computer[j] >= 90)
			Fine++;
		else if (Computer[j] < 60)
			Fail++;
	}
	iFineCount[SubjectNo] = Fine;
	iFailCount[SubjectNo] = Fail;
	SubjectNo++;           //SubjectNo��1��Ӧ��ѧ

	//ͳ����ѧ�γ������Ϣ
	Fine = 0, Fail = 0;
	for (j = 0; j < StuCount; j++)
	{
		if (Math[j] >= 90)
			Fine++;
		else if (Math[j] < 60)
			Fail++;
	}
	iFineCount[SubjectNo] = Fine;
	iFailCount[SubjectNo] = Fail;
	SubjectNo++;

	//ͳ��Ӣ��γ������Ϣ
	Fine = 0, Fail = 0;
	for (j = 0; j < StuCount; j++)
	{
		if (English[j] >= 90)
			Fine++;
		else if (English[j] < 60)
			Fail++;
	}
	iFineCount[SubjectNo] = Fine;
	iFailCount[SubjectNo] = Fail;
	SubjectNo++;

	//ͳ�����Ŀγ������Ϣ
	Fine = 0, Fail = 0;
	for (j = 0; j < StuCount; j++)
	{
		if (Chinese[j] >= 90)
			Fine++;
		else if (Chinese[j] < 60)
			Fail++;
	}
	iFineCount[SubjectNo] = Fine;
	iFailCount[SubjectNo] = Fail;
	SubjectNo++;

	//ͳ�������γ������Ϣ
	Fine = 0, Fail = 0;
	for (j = 0; j < StuCount; j++)
	{
		if (Physics[j] >= 90)
			Fine++;
		else if (Physics[j] < 60)
			Fail++;
	}
	iFineCount[SubjectNo] = Fine;
	iFailCount[SubjectNo] = Fail;
	SubjectNo++;
}