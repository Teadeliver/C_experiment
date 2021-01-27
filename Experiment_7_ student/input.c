#define _CRT_SECURE_NO_WARNINGS 1
#include "student.h"
//定义全局变量
//存放全班学生学号、计算机成绩、数学成绩、英语成绩、语文成绩、体育成绩
int iStuNo[StuCount]; //全班学号
int Computer[StuCount]; //全班计算机课程成绩
int Math[StuCount]; //全班数学课程成绩
int English[StuCount]; //全班英语课程成绩
int Chinese[StuCount]; //全班语文课程成绩
int Physics[StuCount]; //全班体育课程成绩
/**************************************************
函数功能：输入信息示例
参数说明：无
返回值： 无
****************************************************/
void InputEX()
{
	system("cls");
	printf("\n\n 请以下面所示的顺序和格式输入原始数据（TEB键隔开）：\n");
	printf("\t学号\t计算机\t数学\t英语\t语文\t体育\n");
	printf("例如\t:");
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
函数功能：
 输入全班学生学号、计算机成绩、数学成绩、英语成绩、语文成绩、体育成绩
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