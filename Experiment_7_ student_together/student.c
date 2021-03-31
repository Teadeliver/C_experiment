#define _CRT_SECURE_NO_WARNINGS 1
#include "student.h"
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
	printf("\n\n\n");
	printf("\t*************************************************\n");
	printf("\t*1. 输入原始数据\n");
	printf("\t*2. 统计最高分、最低分、平均分和最高分学生学号\n");
	printf("\t*3. 统计优秀和不及格人数\n");
	printf("\t*4. 按平均分排序\n");
	printf("\t*5. 显示学生成绩统计表\n");
	printf("\t*6. 退出程序\n");
	printf("\n\t 数字对应功能选择，请选 1-6：");
	while (1)
	{
		fflush(stdin);
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
	case 2:
		//StaticScore();
		printf("\n 完成分数统计，按任意键继续......");
		getche();
		break;
	case 3:
		//StaticPerson();
		printf("\n 完成人数统计，按任意键继续......");
		getche();
		break;
	case 4:
		//SortByAve();
		printf("\n 完成排序，按任意键继续......");
		getche();
		break;
	case 5:
		//Display();
		printf("\n 按任意键继续......");
		getche();
		break;
	case 6:
		quit = 1;
		break;
	}
	return quit;
}
/**************************************************
主函数
****************************************************/
void main(void)
{
	//int i;
	//int option;
	//int quit;

	////SetConsoleTitle("实验七 成绩管理系统");  //设置控制台标题
	//system("color B0");                     //设置背景色和前景色
	//printf("\n\n\n\n\n");
	//printf("\t\t*************************************************\n");
	//printf("\t\t*\t\t\t\t\t\t*\n");
	//printf("\t\t*\t\t\t\t\t\t*\n");
	//printf("\t\t*\t\t\t\t\t\t*\n");
	//printf("\t\t*\t\t\t\t\t\t*\n");
	//printf("\t\t*\t\t\t\t\t\t*\n");
	//printf("\t\t*\t\t学生成绩管理程序\t\t*\n");
	//printf("\t\t*\t\t\t\t\t\t*\n");
	//printf("\t\t*\t\t\t\t\t\t*\n");
	//printf("\t\t*\t\t\t\t\t\t*\n");
	//printf("\t\t*\t\t按任意键进入……\t\t*\n");
	//printf("\t\t*\t\t\t\t\t\t*\n");
	//printf("\t\t*\t\t\t\t\t\t*\n");
	//printf("\t\t*************************************************\n");
	//printf("\t\t\t\t\tBy: 比茗");
	//getche();
	//printf("\n\n\t\t正在进入");
	//for (i = 0; i < 5; i++)
	//{
	//	Sleep(600);
	//	printf(" .");
	//}

	//while (1)
	//{
	//	option = MenuSelect();
	//	quit = MenuHandle(option);
	//	if (quit == 1)
	//	{
	//		printf("\n\n\t正在退出，谢谢使用...\n");
	//		break;
	//	}
	//}
}