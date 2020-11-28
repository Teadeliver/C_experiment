#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>

void myself(void)
{
	Sleep(1500);
	printf("   ***       ***        ***       ***        ***       ***        ***       ***        ***       ***\n");
	printf("  ******   ******      ******   ******      ******   ******      ******   ******      ******   ******\n");
	printf(" *****************    *****************    *****************    *****************    *****************\n");
	printf("  ******* *******      ******* *******      ******* *******      ******* *******      ******* *******\n");
	printf("   ***我来自***         ***数据科学**        ******与*****        *大数据技术*         ****201班***\n");
	printf("     **** ****            **** ****            **** ****            **** ****            **** ****\n");
	printf("       *****                *****               ******               ******               ******\n");
	printf("         *                    *                   *                    *                    *\n");
	Sleep(1500);
	Sleep(2000);
	printf("我叫吴浩斌！来自大数据201班!\n\n");
	Sleep(2000);
	printf("我的学号是2020083044.\n\n");
	Sleep(2000);
	printf("我喜欢琢磨电子产品.\n\n");
	Sleep(2000);
	printf("一起努力,一起进步!\n\n");
	Sleep(2000); //多次调用 printf 函数显示个人信息
}

int add(int x, int y)
{
	return(x + y); /*将计算结果返回给主调函数 ADD*/
}

void AddTwo(void)
{
	int a, b, sum; //a,b 为输入的两个整数，sum 为和
	printf("\nPlease input two number: ");
	scanf("%d,%d", &a, &b);//输入 a,b 的值
	sum = add(a, b);//调用函数 add。将 a,b 传递给函数，并且 sum 接收函数的返回值
	printf("sum= %d\n", sum);
}

void Avg(void)
{
	float a, b, c, aver;

	printf("\nPlease input 3 float :");
	scanf("%f,%f,%f", &a, &b, &c); //输入 3 个实数
	aver = (a + b + c) / 3; // 求平均值
	printf("\n average = %f \n", aver);
}

void DisplayDigit(void)
{
	int a;

	printf("\nPlease input a number: "); //显示输入提示
	scanf("%d", &a); //输入整数 a
	printf("%d", a); //输出整数 a
}

void Func(void)
{
	int a, s, c; // a 为边长,s 为面积,c 为周长
	printf("\nPlease input an integer:"); //显示输入提示
	scanf("%d", &a); //输入边长
	s = a * a; //计算面积
	c = a * 4; //计算周长
	printf("\ns= %d\n", s); //输出面积
	printf("\nc = % d\n", c); //输出周长
}

int main(void)
{
	myself(); /*在完成新的实验任务时，可将已完成部分屏蔽，以便观察程序运行结果*/
	AddTwo(); /*调用 AddTwo 函数 */
	Avg(); /*调用 Avg 函数 */
	printf("程序调试(1)原因:添加//屏蔽了调用头文件的命令,导致printf命令无法被识别\n\n");
	Sleep(1000);
	printf("程序调试(2)原因:自定义函数在main函数之后,main函数执行时,无法调用到Avg函数,需要将函数定义在main函数之前\n\n");
	Sleep(1000);
	printf("程序调试(3)纪录:\n\n");
	printf("c:\\users\\嘻嘻嘻\\desktop\\frist.c(7) : error C2065: 'a' : undeclared identifier\n\n");
	printf("c:\\users\\嘻嘻嘻\\desktop\\frist.c(7) : error C2065: 'b' : undeclared identifier\n\n");
	printf("c:\\users\\嘻嘻嘻\\desktop\\frist.c(7) : error C2065: 'c' : undeclared identifier\n\n");
	printf("c:\\users\\嘻嘻嘻\\desktop\\frist.c(7) : error C2065: 'aver' : undeclared identifier\n\n");
	DisplayDigit();
	Func();
	return 0;
}
