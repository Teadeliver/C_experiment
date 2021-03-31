#include "student.h"
/*************************************************
函数功能：显示学生成绩统计表
参数说明：无
返回值： 无
****************************************************/
void Display(void)
{
	int i;
	system("cls"); //清屏
	printf("\n\n\n");
	printf("科 目\t最高分 最低分 平均分 优秀人数 不及格人数 最高分学生学号\n");
	for (i = 0; i < SubCount; i++)
	{
		printf("%s %6d %6d %6d %7d %8d %9d\n", \
			cSubject[i], iScoreHigh[i], iScoreLow[i], \
			iScoreAve[i], iFineCount[i], iFailCount[i], iHighNo[i]);
	}
}