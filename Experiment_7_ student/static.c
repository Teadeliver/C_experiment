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
 �������ܣ���ʼ���ṹ��
****************************************************/
int begin()
{
	struct STU output[5] = { { "�����" } ,{ "��ѧ" },{ "Ӣ��" }, { "����" }, { "����" } };
}
/**************************************************
 �������ܣ�ͳ��ĳ�γ���߷ּ���߷�ѧ��
 ����˵����Score ָʾĳ�γ̳ɼ���Highest ָʾ��߷�
 ����ֵ�� ��߷�ѧ��
****************************************************/
int GetHigh(int* Score, struct STU output[5])
{
	int i;
	int High = 0;

	output[0].Highscore = Score[0];
	for (i = 1; i < StuCount; i++)
		if (Score[High] < Score[i])
		{
			High = i;
			output[0].Highscore = Score[High];
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
int GetAve(int *Score)
{
	int i;
	int sum = 0;

	for(i=0; i<StuCount; i++)
		sum+=Score[i];

	return sum/i;
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
	output[0].StuNo = GetHigh(Computer, output); //��߷ּ�ѧ��
	output[0].Lowscore = GetLow(Computer); //��ͷ�
	output[0].Avescore = GetAve(Computer); //ƽ����
	SubjectNo++;
	//ͳ����ѧ�γ������Ϣ
	output[1].StuNo = GetHigh(Math, output); //��߷ּ�ѧ��
	output[1].Lowscore = GetLow(Math); //��ͷ�
	output[1].Avescore = GetAve(Math); //ƽ����
		//ͳ��Ӣ��γ������Ϣ
	output[2].StuNo = GetHigh(English, output); //��߷ּ�ѧ��
	output[2].Lowscore = GetLow(English); //��ͷ�
	output[2].Avescore = GetAve(English); //ƽ����
		//ͳ�����Ŀγ������Ϣ
	output[3].StuNo = GetHigh(Chinese, output); //��߷ּ�ѧ��
	output[3].Lowscore = GetLow(Chinese); //��ͷ�
	output[3].Avescore = GetAve(Chinese); //ƽ����

		//ͳ�������γ������Ϣ
	output[4].StuNo = GetHigh(Physics, output); //��߷ּ�ѧ��
	output[4].Lowscore = GetLow(Physics); //��ͷ�
	output[4].Avescore = GetAve(Physics); //ƽ����
}
/**************************************************
 �������ܣ�ͳ������Ͳ���������
 ����˵������
 ����ֵ�� ��
****************************************************/
void StaticPerson(void)
{
	int SubjectNo = 0;
	//SubjectNo=0,1,2,3,4 �ֱ��Ӧ���������ѧ��Ӣ����ġ����������Ŀ
	int j, Fine, Fail;
	//ͳ�Ƽ�����γ������Ϣ
	Fine = 0, Fail = 0;
	for (j = 0; j < StuCount; j++)
		if (Computer[j] >= 90) Fine++;
		else if (Computer[j] < 60) Fail++;
	output[0].FineCount = Fine;
	output[0].FailCount = Fail;
	SubjectNo++;
	//ͳ����ѧ�γ������Ϣ
	Fine = 0, Fail = 0;
	for (j = 0; j < StuCount; j++)
		if (Computer[j] >= 90) Fine++;
		else if (Computer[j] < 60) Fail++;
	output[1].FineCount = Fine;
	output[1].FailCount = Fail;
	SubjectNo++;
	//ͳ��Ӣ��γ������Ϣ
	Fine = 0, Fail = 0;
	for (j = 0; j < StuCount; j++)
		if (Computer[j] >= 90) Fine++;
		else if (Computer[j] < 60) Fail++;
	output[2].FineCount = Fine;
	output[2].FailCount = Fail;
	SubjectNo++;
	//ͳ�����Ŀγ������Ϣ
	Fine = 0, Fail = 0;
	for (j = 0; j < StuCount; j++)
		if (Computer[j] >= 90) Fine++;
		else if (Computer[j] < 60) Fail++;
	output[3].FineCount = Fine;
	output[3].FailCount = Fail;
	SubjectNo++;
	//ͳ�������γ������Ϣ
	Fine = 0, Fail = 0;
	for (j = 0; j < StuCount; j++)
		if (Computer[j] >= 90) Fine++;
		else if (Computer[j] < 60) Fail++;
	output[4].FineCount = Fine;
	output[4].FailCount = Fail;
}