#define _CRT_SECURE_NO_WARNINGS 1
#include "student.h"

int iStuNo[StuCount]; //全班学号
int iComputer[StuCount]; //全班计算机课程成绩
int iMath[StuCount]; //全班数学课程成绩
int iEnglish[StuCount]; //全班英语课程成绩
int iChinese[StuCount]; //全班语文课程成绩
int iPhysics[StuCount]; //全班体育课程成绩
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
 函数功能：显示菜单并返回选择的菜单项编号
 参数说明：无
 返回值： 菜单项编号
****************************************************/
int MenuSelect(void)
{
	int option;
	int input;
	system("cls");
	printf("\n\n\n***********************************************");
	printf("\t1. 输入原始数据\n");
	printf("\t2. 统计最高分、最低分、平均分和最高分学生学号\n");
	printf("\t3. 统计优秀和不及格人数\n");
	printf("\t4. 按平均分排序，并显示排序结果\n");
	printf("\t5. 显示学生成绩统计表\n");
	printf("\t6. 退出程序\n");
	printf("\n\t 数字对应功能选择，请选 1-6：");

	while (1)
	{
		input = scanf("%d", &option);
			if (input != 1)
			{
				printf("\n\t 输入错误，重选 1-6:");
				fflush(stdin);
			}
			else if ((option < 1) || (option > 6))
				printf("\n\t 选择错误，重选 1-6:");
			else break;
	}
	return option;
}
/**************************************************
 函数功能：菜单处理
 参数说明：菜单项编号
 返回值： 返回 0，选择其它菜单项，程序继续运行；返回 1，程序结束
****************************************************/
int MenuHandle(int option)
{
	int quit = 0;
	switch (option)
	{
	case 1: 
		if (InputData() == 0)
		{
			printf("\n\n 输入数据错误，程序退出");
			fflush(stdin);
			quit = 1;
		}
		else
			printf("\n 完成数据输入，按任意键继续......");
		getche();
		break;
	case 2:begin();
		StaticScore();
		printf("\n 完成分数统计，按任意键继续......");
		getche();
		break;
	case 3: StaticPerson();
		printf("\n 完成人数统计，按任意键继续......");
		getche();
		break;
	case 4: SortByAve(output);
		DisplaySort();
		printf("\n 完成排序，按任意键继续......");
		getche();
		break;
	case 5: DisplayStat();
		printf("\n 按任意键继续......");
		getche();
		break;
	case 6: quit = 1;
		break;
	}
	return quit;
}
/**************************************************
 主函数
****************************************************/
void main(void)
{
	int option;
	int quit;
	printf("\n\n\n\n\n");
	printf("\t\t*******************************************\n");
	printf("\t\t* *\n");
	printf("\t\t* *\n");
	printf("\t\t* *\n");
	printf("\t\t* *\n");
	printf("\t\t* *\n");
	printf("\t\t* 学生成绩管理程序 *\n");
	printf("\t\t* *\n");
	printf("\t\t* *\n");
	printf("\t\t* *\n");
	printf("\t\t* 按任意键进入…… *\n");
	printf("\t\t* *\n");
	printf("\t\t* *\n");
	printf("\t\t*******************************************\n");
	getche();
	while (1)
	{
		option = MenuSelect();

		quit = MenuHandle(option);
		if (quit == 1) break;
	}
}
