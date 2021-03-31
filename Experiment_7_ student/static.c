#include "student.h"

int iScoreHigh[SubCount]; //以计算机、数学、英语、语文、体育的顺序存放各科最高分
int iScoreLow[SubCount]; //以计算机、数学、英语、语文、体育的顺序存放各科最低分
int iScoreAve[SubCount]; //以计算机、数学、英语、语文、体育的顺序存放各科平均分
int iHighNo[SubCount];
//以计算机、数学、英语、语文、体育的顺序存放各科最高分学生学号
int iFineCount[SubCount];
//以计算机、数学、英语、语文、体育的顺序存放各科达优秀人数
int iFailCount[SubCount];
//以计算机、数学、英语、语文、体育的顺序存放各科不及格人数

/**************************************************
函数功能：统计某课程最高分及最高分学号
参数说明：Score 指示某课程成绩，Highest 指示最高分
返回值： 最高分学号
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
函数功能：统计某课程最低分
参数说明：Score 指示某课程成绩
返回值： 该课程最低分
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
函数功能：统计某课程平均分
参数说明：Score 指示某课程成绩
返回值： 该课程平均分
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
函数功能：统计最高分、最低分、平均分、最高分学号
参数说明：无
返回值： 无
****************************************************/
void StaticScore(void)
{
	int SubjectNo = 0;
	//SubjectNo=0,1,2,3,4 分别对应计算机、数学、英语、语文、体育五个科目

//统计计算机课程相关信息
	iHighNo[SubjectNo] = GetHigh(Computer, &iScoreHigh[SubjectNo]); //最高分及学号
	iScoreLow[SubjectNo] = GetLow(Computer); //最低分
	iScoreAve[SubjectNo] = GetAve(Computer); //平均分
	SubjectNo++;

	//统计数学课程相关信息
	iHighNo[SubjectNo] = GetHigh(Math, &iScoreHigh[SubjectNo]); //最高分及学号
	iScoreLow[SubjectNo] = GetLow(Math); //最低分
	iScoreAve[SubjectNo] = GetAve(Math); //平均分
	SubjectNo++;

	//统计英语课程相关信息
	iHighNo[SubjectNo] = GetHigh(English, &iScoreHigh[SubjectNo]); //最高分及学号
	iScoreLow[SubjectNo] = GetLow(English); //最低分
	iScoreAve[SubjectNo] = GetAve(English); //平均分
	SubjectNo++;

	//统计语文课程相关信息
	iHighNo[SubjectNo] = GetHigh(Chinese, &iScoreHigh[SubjectNo]); //最高分及学号
	iScoreLow[SubjectNo] = GetLow(Chinese); //最低分
	iScoreAve[SubjectNo] = GetAve(Chinese); //平均分
	SubjectNo++;

	//统计体育课程相关信息
	iHighNo[SubjectNo] = GetHigh(Physics, &iScoreHigh[SubjectNo]); //最高分及学号
	iScoreLow[SubjectNo] = GetLow(Physics); //最低分
	iScoreAve[SubjectNo] = GetAve(Physics); //平均分
	SubjectNo++;
}
/**************************************************
函数功能：统计优秀和不及格人数
参数说明：无
返回值： 无
****************************************************/
void StaticPerson(void)
{
	//SubjectNo=0,1,2,3,4 分别对应计算机、数学、英语、语文、体育五个科目
	int SubjectNo = 0;
	//Fine优秀人数，Fail不及格人数
	int j, Fine, Fail;

	//统计计算机相关信息
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
	SubjectNo++;           //SubjectNo增1对应数学

	//统计数学课程相关信息
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

	//统计英语课程相关信息
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

	//统计语文课程相关信息
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

	//统计体育课程相关信息
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