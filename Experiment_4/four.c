#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
void four_test1_1(void);
void four_test1_2(void);
void four_test2_1(void);
void four_test2_2(void);
void Feb_days();
void Tax();
void Func();
double Func1(double x);
void Caculator();
int Triangle();
int MathLearn();

int four_Menu(void)
{
	int iSelect;

	printf("\n * **************************\n");
	printf("\n 1. 运行函数 four_test1_1");
	printf("\n 2. 运行函数 four_test1_2");
	printf("\n 3. 运行函数 four_test2_1");
	printf("\n 4. 运行函数 four_test2_2");
	printf("\n 5. 运行函数 Feb_days()");
	printf("\n 6. 运行函数 Tax()");
	printf("\n 7. 运行函数 Func()");
	printf("\n 8. 运行函数 Caculator()");
	printf("\n 9. 运行函数 Triangle()");
	printf("\n 10. 运行函数 MathLearn()");
	printf("\n 0. 退出");
	printf("\n * **************************\n");
	printf("\n\n 请输入你的选项：");
	scanf("%d", &iSelect);
	return iSelect;
}

int main(void)
{
	int iChoice;

	double x, y;
again:
	iChoice = four_Menu();

	switch (iChoice)
	{
	case 1:
	{
		four_test1_1();
		goto again;
	}
	case 2:
	{
		four_test1_2();
		goto again;
	}
	case 3:
	{
		four_test2_1();
		goto again;
	}
	case 4:
	{
		four_test2_2();
		goto again;
	}
	case 5:
	{
		Feb_days();
		goto again;
	}
	case 6:
	{
		Tax();
		goto again;
	}
	case 7:
	{
		Func();
		goto again;
	}
	case 8:
	{
		Caculator();
		goto again;
	}
	case 9:
	{
		Triangle();
		goto again;
	}
	case 10:
	{
		MathLearn();
		goto again;
	}
	case 0:
	{
		break;
	}
	default:
	{
		printf("\n The select is ERROR\n");
	}
	}
	printf("\n请输入用于Func1函数计算的x值\n");
	scanf("%lf", &x);
	printf("x = %lf\n", x);
	printf("y = %lf\n", Func1(x));
}

void four_test1_1(void)
{
	int i, j;

	i = j = 2;
	if (i == 1)
		if (j == 2)
		{
			printf("i = %d", i = i + j);
		}
		else
		{
			printf("i = %d", i = i - j);
		}
	printf("\n\nfour_test1_1的运行结果是没有输出");
	printf("\n以下代码经修改输出i = 0\n");
	if (i == 0)
	{
		printf("i = %d\n", i);
	}
	else
	{
		i = i - i;
		printf("i = %d\n", i);
	}
	printf("\n以下代码经修改输出i = 4\n");
	if (i == 4)
	{
		printf("i = %d\n", i);
	}
	else
	{
		i = (2 * j);
		printf("i = %d\n", i);
	}
}

void four_test1_2(void)
{
	int x = 3;

	switch (x)
	{
	case 1:
	case 2: printf("x<3 \n");
	case 3: printf("x=3 \n");
	case 4:
	case 5: printf("x>3 \n");
	default:printf("x unknow\n");
	}
}

void four_test2_1(void)
{
	int iNum1, iNum2, iNum3, iMax;

	srand((unsigned int)time(NULL));
	iNum1 = rand();
	iNum2 = rand();
	iNum3 = rand();
	printf("\nThe three numbers are %d  %d  %d\n", iNum1, iNum2, iNum3);

	if (iNum1 > iNum2)
	{
		if (iNum1 > iNum3)
		{
			iMax = iNum1;
		}
		else
		{
			iMax = iNum3;
		}
	}
	else
	{
		if (iNum2 > iNum3)
		{
			iMax = iNum2;
		}
		else
		{
			iMax = iNum3;
		}
	}
	printf("\nThe maxinum is %d\n", iMax);
}

void four_test2_2(void)
{
	int iNum1, iNum2, iNum3, iMax;

	srand((unsigned int)time(NULL));
	iNum1 = rand();
	iNum2 = rand();
	iNum3 = rand();
	printf("\nThe three numbers are %d  %d  %d\n", iNum1, iNum2, iNum3);
	iMax = iNum1;

	if (iMax > iNum2)
	{
		if (iMax < iNum3)
		{
			iMax = iNum3;
		}
	}
	else
	{
		iMax = iNum2;
		if (iMax < iNum3)
		{
			iMax = iNum3;
		}
		printf("\nThe maxinum is %d\n", iMax);
	}
}

void Feb_days()
{
	int year, days;

	printf("\n请输入你想要知道二月份天数的年份\n");
	scanf("%d", &year);

	if (year % 4 == 0)
	{
		if (year % 100 != 0)
		{
			days = 28;
			printf("\n%d是闰年，该年的二月为%d天\n", year, days);
		}
	}
	else
	{
		days = 29;
		printf("\n%d是平年，该年的二月份为%d天\n", year, days);
	}
}

void Tax()
{
	int x;

	double bonus, rate, tax, profit;

	printf("你想查看用什么语句计算出来的结果,请输入对应数字并按回车键查看\n");
again1:
	printf("1.if语句\n2.if-else语句\n3.switch语句");
	scanf("%d", &x);
	switch (x)
	{
	case 1:
	{
		printf("请输入你的奖金数：\n");
		scanf("%lf", &bonus);
		if (bonus < 500.0)
		{
			rate = 0.00;
		}
		if (500.0 <= bonus && bonus < 1000.0)
		{
			rate = 0.05;
		}
		if (1000.0 <= bonus && bonus < 2000.0)
		{
			rate = 0.08;
		}
		if (2000.0 <= bonus && bonus <= 5000.0)
		{
			rate = 0.10;
		}
		if (bonus > 5000.0)
		{
			rate = 0.15;
		}

		tax = (bonus * rate);
		profit = bonus - tax;
		printf("bonus = %lf\n", bonus);
		printf("rate = %lf\n", rate);
		printf("tax =%lf\n", tax);
		printf("profit = %lf\n", profit);
		break;
	}
	case 2:
	{
		printf("请输入你的奖金数：\n");
		scanf("%lf", &bonus);

		if (bonus < 500.0)
		{
			rate = 0.00;
		}
		else
		{
			if (500 <= bonus && bonus < 1000.0)
			{
				rate = 0.05;
			}
			else
			{
				if (1000.0 <= bonus && bonus < 2000.0)
				{
					rate = 0.08;
				}
				else
				{
					if (2000.0 <= bonus && bonus <= 5000.0)
					{
						rate = 0.10;
					}
					else
					{
						if (bonus > 5000.0)
						{
							rate = 0.15;
						}
					}
				}
			}

			tax = (bonus * rate);
			profit = (bonus - tax);
			printf("bonus = %lf\n", bonus);
			printf("rate = %lf\n", rate);
			printf("tax =%lf\n", tax);
			printf("profit = %lf\n", profit);
			break;
		}
	}
	case 3:
	{
		printf("请输入奖金数:\n");
		scanf("%lf", &bonus);

		switch ((int)bonus / 500)
		{
		case 0:
		{
			rate = 0.0;
			break;
		}
		case 1:
		{
			rate = 0.05;
			break;
		}
		case 2:case 3:
		{
			rate = 0.08;
			break;
		}
		case 4:case 5:case 6:case 7:case 8:case 9:
		{
			rate = 0.10;
			break;
		}
		}

		tax = (bonus * rate);
		profit = (bonus - tax);
		printf("bonus = %lf\n", bonus);
		printf("rate = %lf\n", rate);
		printf("tax =%lf\n", tax);
		printf("profit = %lf\n", profit);
	}
	case 0:
	{
		break;
	}
	default:
	{
		printf("你的输入有误，请重新输入\n");
		goto again1;
	}
	}
}

void Func()
{
	double x, y;

	printf("\n请输入x的值\n");
	scanf("%lf", &x);

	if (x > 0)
	{
		printf("你输入的x值大于0\n");
		y = exp(-x);
		printf("\n所以y = e^-x = %lf", y);
	}
	else
	{
		if (x == 0)
		{
			printf("你输入的x值等于0\n");
			y = 1;
			printf("\n所以y = %.0lf", y);
		}
		else
		{
			printf("\n所以你输入的x值小于0\n");
			y = -(exp(x));
			printf("y = - e^x = %lf", y);
		}
	}
}

double Func1(double x)
{
	if (x > 0)
	{
		return exp(-x);
	}
	else
	{
		if (x == 0)
		{
			return 1;
		}
		else
		{
			return -(exp(x));
		}
	}
}

void Caculator()
{
	double a, b, c;

	char d;

	printf("请输入你想计算的表达式(例如12+3)：\n");
	scanf("%lf%c%lf", &a, &d, &b);

	while (-0.000001 < b && b < 0.000001)
	{
		printf("输入有误，0不能是除数，请重新输入你想计算的表达式(例如12+3)：\n");
		scanf("%lf%c%lf", &a, &d, &b);
	}
	switch (d)
	{
	case '+':
	{
		printf("%lf %c %lf = %lf\n", a, d, b, (a + b));
		break;
	}
	case '-':
	{
		printf("% lf % c % lf = % lf\n", a, d, b, (a - b));
		break;
	}
	case '*':
	{
		printf("%lf %c %lf = %lf\n", a, d, b, (a * b));
		break;
	}
	case '/':
	{
		printf("%lf %c %lf = %lf\n", a, d, b, (a / b));
		break;
	}
	default:
	{
		printf("输入有误，无法计算\n");
		break;
	}
	}
}

int Triangle()
{
	double a, b, c;

	printf("请输入需要判断的三边长a、b、c(空格隔开)：\n");
	scanf("%lf%lf%lf", &a, &b, &c);

	if (a + b > c && a + c > b && b + c > a)
	{
		printf("你输入的三边长可以构成三角形\n");
		if (a == b && b == c && a == c)
		{
			printf("并且你输入的三角形是等边三角形\n");
			return 1;
		}
		else
		{
			if (a == b || a == c || b == c)
			{
				if (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(a, 2) + pow(b, 2))
				{
					printf("并且该三角形是等腰直角三角形\n");
				}
				else
				{
					printf("并且你输入的三角形是等腰三角形\n");
					return 2;
				}
			}
			else
			{
				if (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(a, 2) + pow(b, 2))
				{
					printf("并且该三角形是直角三角形\n");
					return 3;
				}
				else
				{
					printf("并且该三角形是一般三角形\n");
					return 4;
				}
			}
		}
	}
	else
	{
		return 0;
	}
}

int MathLearn()
{
	int a = 0, b = 0, c;
	int min = 0, max = 10;
	int imin = 1, imax = 4;

	srand((unsigned int)time(NULL));
	while (a == 0)
	{
		a = rand() % (max - min) + min;
		b = rand() % (max - min) + min;
	}
	//c = rand() % (imax - imin) + imin;
	c = 4;

	switch (c)
	{
	case 1:
	{
		printf("%d + %d = \n", a, b);
		printf("请输入你的答案并按回车键：\n");
		scanf("%d", &c);
		if (c == a + b)
		{
			printf("Right!");
			return 0;
		}
		else
		{
			printf("Not Correct! Try again!");
			return 1;
		}
		break;
	}
	case 2:
	{
		while ((a - b) >= 0)
		{
			srand((unsigned int)time(NULL));
			a = rand() % (max - min) + min;
			b = rand() % (max - min) + min;
		}
		printf("%d - %d = \n", a, b);
		printf("请输入你的答案并按回车键：\n");
		scanf("%d", &c);
		if (c == (a - b))
		{
			printf("Right!");
		}
		else
		{
			printf("Not Correct! Try again!");
		}
		break;
	}
	case 3:
	{
		printf("%d * %d = \n", a, b);
		printf("请输入你的答案并按回车键：\n");
		scanf("%d", &c);
		if (c == (a * b))
		{
			printf("Right!");
		}
		else
		{
			printf("Not Correct! Try again!");
		}
		break;
	}

	case 4:
	{
		if (b != 0)
		{
			if (a % b == 0)
			{
				printf("%d / %d = \n", a, b);
				printf("请输入你的答案并按回车键：\n");
				scanf("%d", &c);
				if (c == (a / b))
				{
					printf("Right!");
				}
				else
				{
					printf("Not Correct! Try again!");
				}
			}
			else
			{
				return 0;
			}
		}
		break;
	}
	}
}