#define _CRT_SECURE_NO_WARNINGS 1
#include "student.h"

struct STU student[StuCount];

/**************************************************
函数功能：输入信息示例
参数说明：无
返回值： 无
****************************************************/
void InputEX()
{
	system("cls");
	printf("\n\n 请以下面所示的顺序和格式输入原始数据（TEB键隔开）：\n");
	printf("************************************************************\n");
	printf("            学号\t计算机\t  数学\t  英语\t  语文\t  体育\n");
	printf(" 例如 :  ");
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
函数功能：输入全班学生学号、计算机成绩、数学成绩、英语成绩、语文成绩、体育成绩
参数说明：无
返回值： 输入操作正确返回 1，否则返回 0
****************************************************/
int InputData(void)
{
	int i;
	int flag = 0; //用于判别输入操作的标志

	InputEX();
	for (i = 0; i < StuCount; i++)
	{
		fflush(stdin);
		printf("NO.%2d\t:", i + 1);
		//输入学生学号 计算机成绩 数学成绩 英语成绩 语文成绩 体育成绩
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