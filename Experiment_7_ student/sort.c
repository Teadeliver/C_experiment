#include "student.h"

char* cSubject[SubCount] = { "计算机", "数  学", "英  语", "语  文", "体  育" };
//指示课程名称

/**************************************************
函数功能：采用冒泡算法以平均分为关键字对统计结果进行排序
参数说明：无
返回值： 无
****************************************************/
void SortByAve()
{
	int i, j, temp;
	char* strTemp;

	for (i = 1; i < SubCount; i++) //共 SubCount 轮
	{
		for (j = 0; j < SubCount - i; j++) //每轮 SubCount-i 次比较
		{
			if (iScoreAve[j] < iScoreAve[j + 1])
			{
				//将较小的平均分交换到后面
				temp = iScoreAve[j];
				iScoreAve[j] = iScoreAve[j + 1];
				iScoreAve[j + 1] = temp;
				//将对应的最高分信息交换
				temp = iScoreHigh[j];
				iScoreHigh[j] = iScoreHigh[j + 1];
				iScoreHigh[j + 1] = temp;
				//将对应的最低分信息交换
				temp = iScoreLow[j];
				iScoreLow[j] = iScoreLow[j + 1];
				iScoreLow[j + 1] = temp;
				//将对应的最高分学号信息交换
				temp = iHighNo[j];
				iHighNo[j] = iHighNo[j + 1];
				iHighNo[j + 1] = temp;
				//将对应的优秀人数信息交换
				temp = iFineCount[j];
				iFineCount[j] = iFineCount[j + 1];
				iFineCount[j + 1] = temp;
				//将对应的不及格人数信息交换
				temp = iFailCount[j];
				iFailCount[j] = iFailCount[j + 1];
				iFailCount[j + 1] = temp;
				//将对应的课程名称信息交换
				strTemp = cSubject[j];
				cSubject[j] = cSubject[j + 1];
				cSubject[j + 1] = strTemp;
			}
		}
	}
}