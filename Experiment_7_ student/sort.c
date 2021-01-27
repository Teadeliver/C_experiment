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
 函数功能：以平均分为关键字对统计结果进行排序
 参数说明：无
 返回值： 无
****************************************************/
//采用冒泡算法
void SortByAve(struct STU output[])
{
	int i, j;
	struct STU stutemp;
	for (i = 1; i < SubCount; i++) //共 SubCount 轮
	{
		for (j = 0; j < SubCount - i; j++) //每轮 SubCount-i 次比较
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