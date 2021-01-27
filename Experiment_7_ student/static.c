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
 函数功能：初始化结构体
****************************************************/
int begin()
{
	struct STU output[5] = { { "计算机" } ,{ "数学" },{ "英语" }, { "语文" }, { "体育" } };
}
/**************************************************
 函数功能：统计某课程最高分及最高分学号
 参数说明：Score 指示某课程成绩，Highest 指示最高分
 返回值： 最高分学号
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
int GetAve(int *Score)
{
	int i;
	int sum = 0;

	for(i=0; i<StuCount; i++)
		sum+=Score[i];

	return sum/i;
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
	output[0].StuNo = GetHigh(Computer, output); //最高分及学号
	output[0].Lowscore = GetLow(Computer); //最低分
	output[0].Avescore = GetAve(Computer); //平均分
	SubjectNo++;
	//统计数学课程相关信息
	output[1].StuNo = GetHigh(Math, output); //最高分及学号
	output[1].Lowscore = GetLow(Math); //最低分
	output[1].Avescore = GetAve(Math); //平均分
		//统计英语课程相关信息
	output[2].StuNo = GetHigh(English, output); //最高分及学号
	output[2].Lowscore = GetLow(English); //最低分
	output[2].Avescore = GetAve(English); //平均分
		//统计语文课程相关信息
	output[3].StuNo = GetHigh(Chinese, output); //最高分及学号
	output[3].Lowscore = GetLow(Chinese); //最低分
	output[3].Avescore = GetAve(Chinese); //平均分

		//统计体育课程相关信息
	output[4].StuNo = GetHigh(Physics, output); //最高分及学号
	output[4].Lowscore = GetLow(Physics); //最低分
	output[4].Avescore = GetAve(Physics); //平均分
}
/**************************************************
 函数功能：统计优秀和不及格人数
 参数说明：无
 返回值： 无
****************************************************/
void StaticPerson(void)
{
	int SubjectNo = 0;
	//SubjectNo=0,1,2,3,4 分别对应计算机、数学、英语、语文、体育五个科目
	int j, Fine, Fail;
	//统计计算机课程相关信息
	Fine = 0, Fail = 0;
	for (j = 0; j < StuCount; j++)
		if (Computer[j] >= 90) Fine++;
		else if (Computer[j] < 60) Fail++;
	output[0].FineCount = Fine;
	output[0].FailCount = Fail;
	SubjectNo++;
	//统计数学课程相关信息
	Fine = 0, Fail = 0;
	for (j = 0; j < StuCount; j++)
		if (Computer[j] >= 90) Fine++;
		else if (Computer[j] < 60) Fail++;
	output[1].FineCount = Fine;
	output[1].FailCount = Fail;
	SubjectNo++;
	//统计英语课程相关信息
	Fine = 0, Fail = 0;
	for (j = 0; j < StuCount; j++)
		if (Computer[j] >= 90) Fine++;
		else if (Computer[j] < 60) Fail++;
	output[2].FineCount = Fine;
	output[2].FailCount = Fail;
	SubjectNo++;
	//统计语文课程相关信息
	Fine = 0, Fail = 0;
	for (j = 0; j < StuCount; j++)
		if (Computer[j] >= 90) Fine++;
		else if (Computer[j] < 60) Fail++;
	output[3].FineCount = Fine;
	output[3].FailCount = Fail;
	SubjectNo++;
	//统计体育课程相关信息
	Fine = 0, Fail = 0;
	for (j = 0; j < StuCount; j++)
		if (Computer[j] >= 90) Fine++;
		else if (Computer[j] < 60) Fail++;
	output[4].FineCount = Fine;
	output[4].FailCount = Fail;
}