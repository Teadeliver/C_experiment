#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<windows.h>
#define LF(a) ((a)*(a)*(a))
#define TRUE 1
#define FALSE 0
#define N 10
#define EPS (1.0e-5)

int Count_One_Bits(unsigned short uValue)
{
	int iSum = 0;
	while (uValue)
	{
		if (uValue % 2 == 1) //uValue 最低位为 1
			iSum++;
		uValue /= 2; //uValue 右移一位
	}
	return iSum;
}

int Greatest_Common_Divisor(int p, int q)
{
	int temp, r;
	if (p > 0 && q > 0)
	{
		if (p < q)
		{
			temp = p;
			p = q;
			q = temp;
		}
		r = p % q;
		while (r != 0)
		{
			p = q, q = r;
			r = p % q;
		}
		return q;
	}
	else
	{
		return -1;
	}
}

void Test_Greatest_Common_Divisor(void)
{
	int a = 26, b = 48; //一组测试数据 
	int result;
	//调用函数 Greatest_Common_Divisor 求 a，b 的最大公约数
	result = Greatest_Common_Divisor(a, b);
	printf("\n %d 和 %d 的最大公约数是 %d", a, b, result);
	a = 57; b = 39; //另一组测试数据
	result = Greatest_Common_Divisor(a, b);
	printf("\n %d 和 %d 的最大公约数是 %d", a, b, result);
	/*用“随机数”进行测试*/
	srand(time(0));
	a = rand() % 80 + 13; b = rand() % 80 + 7;
	result = Greatest_Common_Divisor(a, b);
	printf("\n %d 和 %d 的最大公约数是 %d\n", a, b, result);
}

int IsPrimeNumber(int m)
{
	int i, k, h = 0;
	if ((m == 0) || (m == 1)) //0 和 1 不是素数
	{
		h = 0; //m 不是素数
	}
	else
	{
		k = (int)sqrt(m); //求 m 的平方根，以确定循环次数
		for (i = 2; i <= k; i++)
		{
			if (m % i == 0)
			{
				h = 1; //m 不是素数
			}
			else
			{
				h = 0;//m 是素数
			}
		}
	}
	return h;
}

void TestPrime(int iNum) //测试数据为 0…i 
{
	int i;
	for (i = 0; i <= iNum; i++)
		if (IsPrimeNumber(i) == 1)
		{
			printf("\n % d is a prime.", i);
		}
		else
		{
			printf("\n % d is not a prime.\n", i);
		}
}

//int simple_1(int x)
//{
//	if (x%(2/x) > floor(x/2) )
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}


int test_array(int a[], int* p)//实现统计偶数计数
{
	int i;
	*p = 0;
	for (i = 0; i < N; i++)
	{
		if (!(a[i] % 2))
		{
			(*p)++;//指向地址+1
		}
	}
	return *p;
}

int test_add(int a[], int* p)//实现正数相加
{
	int i;
	*p = 0;
	for (i = 0; i < N; i++)
	{
		if (a[i] > 0)
		{
			*p = (*p) + a[i];
		}
	}
	return *p;
}

void StatisticsNum()
{
	int a[N], i;
	int w = 0, y = 0;//w是偶数变量，y是正数和变量
	for (i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
		test_array(a, &w);
		test_add(a, &y);
	}
	printf("正数的和是%，偶数个数是 %d", y, w);
	return 0;
}

void StatisticsChar()
{
	char c = 0;
	int y = 0, w = 0;

	fflush(stdin);
	printf("请输入字符串（#表示结束）：");
	c = getchar();
	while (c != '#')//运用循环体，对输入字符串逐个进行判断
	{
		y++;
		if (c <= 'z' && c >= 'a')
		{
			w++;
		}
		c = getchar();

	}
	printf("有 %d个字符,有 %d个小写字母。\n", y, w);

}

int StatisticsMax(int n)
{
	int l, k;

	printf("请输入你要输入的数字\n");
	scanf("%d", &l);
	for (; n > 1; n--)
	{
		scanf("%d", &k);
		if (k > l)
		{
			l = k;
		}
	}
	return l;
}

void five_test5_1(void)
{
	int a, b;
	for (a = 1, b = 1; a <= 100; a++)
	{
		printf("a=%d, ", a);
		if (b >= 20)
			break;
		if (b % 3 == 1)
		{
			b += 3;
			continue;
		}
		b -= 5;
	}
	printf("\n");
}

void five_test5_2(void)
{
	int m = 1, n = 3;
	do
	{
		n += m++;
		if (n % 7 == 0)
			continue;
		else ++m;
	} while (n < 15);
	printf("m=%d, n=%d\n", m, n);
}

int Apple(void)
{
	int num, day = 0;
	float price = 0.8, sum;

	for (num = 2; num < 100;)
	{
		sum = price * num;
		day++;
		printf("第 %d 天，%d 个苹果，价格为 %.0lf 元\n", day, num, sum);
		num = 2 * num - 1;
	}
	return 0;
}

void Count_e()
{
	double e = 1, o = 0, n = 1;
	int i = 1;
	e = e + n;
	i++;
	o = n;
	n = n / i;//首先完成一次运算，出现新累加项
	while (o - n >= EPS)//旧累加项减新累加项、旧大于新
	{
		e = e + n;
		i++;
		o = n;
		n = n / i;
	}
	printf("e = %lf，累加次数为%d\n", e, i - 1);
}

int SumPolynomial(int n)
{
	int i, j; //循环控制变量
	int t; //累加项的值
	int sum; //累加和
	sum = 0; //初始值为 0
	for (i = 1; i <= n; i++)
	{
		t = i;//①
		for (j = 0; j < i - 1; j++)
		{
			t = (t * 10 + i);//②
		}
		sum += t;//sum = sum + t;
	}
	return sum;
}

void TimesTable(void)
{
	int i, j;
	for (i = 1; i <= 9; i++) //控制打印行数
	{
		for (j = 1; j <= i; j++) //控制每行打印数据个数
			printf(" %d * %d = % -2d ", i, j, i * j);
		printf("\n\n"); //换行处理
	}
}

int Pattern(int n)
{
	int i, j, a = n, z;
	for (i = 0; i <= n; i++)
	{
		if (i < (n + 1) / 2)//逆转空格
		{
			for (z = i; z >= 0; z--)
			{
				printf("  ");
			}
		}
		else
		{
			for (z = n - i; z >= 0; z--)
			{
				printf("  ");
			}
		}
		for (j = abs(a); j > 0; j = j - 1)//通过绝对值逆转*个数
		{
			printf(" *");
		}
		printf("\n");
		a = a - 2;
	}
	return 0;
}

void PerfectNum()
{
	int sum = 0, m = 2, n, j, k, z = 1;

	for (; m < 1000;)
	{
		k = m / 2, n = 0, j = 1;//2.1
		for (; j <= k;)//2.2
		{
			if (floor(m % j) == 0)//2.2.1
			{
				n += j;
			}
			j++;//2.2.2
		}
		if (m == n)
		{
			sum += m;
			if (z == 1)
			{
				printf("%d", m);
				z++;
			}
			else
			{
				printf(" + %d", m);
			}
		}
		m++;
	}
	printf(" = %d\n", sum);
}

void PerfectNum_1()
{
	int m, i;

	for (m = 0; m < 1000; m++)
	{
		i = PerfectNum_test(m, 0);
		if (i == 1)
		{
			PerfectNum_test(m, 2);
			PerfectNum_test(m, 1);
			printf("\n");
		}
	}
}

int PerfectNum_test(int m, int i)//判断完数
{
	int sum = 0, n, j, k;

	k = m / 2, n = 0, j = 1;//2.1
	for (; j <= k;)//2.2
	{
		if (floor(m % j) == 0)//2.2.1
		{
			n += j;
			if (i == 1)
			{
				if (j == 1)
				{
					printf("%d", j);
				}
				else
				{
					printf(" + %d", j);
				}
			}

		}
		j++;//2.2.2
	}
	if (m == n)
	{
		if (i == 2 && m != 0)
		{
			printf("%d = ", m);
		}
		return 1;
	}
	else
	{
		return 0;
	}
}


int DaffodilNum()
{
	int a, b, c, m;

	for (m = 100; m < 1000; m++)
	{
		a = m % 10;
		b = m / 10 % 10;
		c = m / 100 % 10;
		if (LF(a) + LF(b) + LF(c) == m)
		{
			printf("%d 是一个水仙数，%d = %d ^3 + %d ^3 + %d ^3 \n", m, m, a, b, c);
		}
	}
	return 0;
}

void GetBall()
{
	int m, n, number = 0;
	printf("          红球 白球 黑球\n\n");
	for (m = 0; m <= 3; m++)
	{
		for (n = 0; n <= 3; n++)
		{
			if (8 - m - n <= 6)
			{
				printf("可能性 %2d:   %d   %d   %d\n", ++number, m, n, 8 - m - n);
			}
		}
	}
}

int MathLearn()
{
	int a = 0, b = 0, c = '*', i, n, e = 0, d = 0, m = 0, en, en_1 = 0, en_2 = 0, en_3 = 0, en_4 = 0;
	int min = 0, max = 10;
	int imin = 1, imax = 4;
	char ch;

	printf("请输入你想练习的题目数量：\n");
	printf("请稍等，正在为你出题\n");
	scanf("%d", &n);
	while ((ch = getchar()) != '\n' && ch != EOF);
	for (i = 0; i < n; i++)
	{
	zero:
		SetQuestion(&a, &b, &c);
		switch (c)
		{
		case 1:
		{
			printf("%d + %d = \n", a, b);
			printf("请输入你的答案并按回车键：\n");
			scanf("%d", &d);
		try1:
			if (d == a + b)
			{
				printf("Right!\n");
			}
			else
			{
				e = m, en_1 = 1;
				e++;
				for (; e < 3;)
				{
					printf("Not Correct! Try again!\n");
					printf("请重新输入你的答案：\n");
					printf("你还有 %d 次机会\n", (3 - e));
					scanf("%d", &d);
					goto try1;
				}
				printf("你的三次机会已经耗尽，本题结束，请看下一题\n");
			}
			break;
		}
		case 2:
		{
			printf("%d - %d = \n", a, b);
			printf("请输入你的答案并按回车键：\n");
			scanf("%d", &d);
		try2:
			if (d == (a - b))
			{
				printf("Right!\n");
			}
			else
			{
				e = m, en_2 = 1;
				e++;
				for (; e < 3;)
				{
					printf("Not Correct! Try again!\n");
					printf("请重新输入你的答案：\n");
					printf("你还有 %d 次机会\n", (3 - e));
					scanf("%d", &d);
					goto try2;
				}
				printf("你的三次机会已经耗尽，本题结束，请看下一题\n");
			}
			break;
		}
		case 3:
		{
			printf("%d * %d = \n", a, b);
			printf("请输入你的答案并按回车键：\n");
			scanf("%d", &d);
		try3:
			if (d == (a * b))
			{
				printf("Right!\n");
			}
			else
			{
				e = m, en_3 = 1;
				e++;
				for (; e < 3;)
				{
					printf("Not Correct! Try again!\n");
					printf("请重新输入你的答案：\n");
					printf("你还有 %d 次机会\n", (3 - e));
					scanf("%d", &d);
					goto try3;
				}
				printf("你的三次机会已经耗尽，本题结束，请看下一题\n");
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
					scanf("%d", &d);
				try4:
					if (d == (a / b))
					{
						printf("Right!");
					}
					else
					{
						e = m, en_4 = 1;
						e++;
						for (; e < 3;)
						{
							printf("Not Correct! Try again!\n");
							printf("请重新输入你的答案：\n");
							printf("你还有 %d 次机会\n", (3 - e));
							scanf("%d", &d);
							goto try4;
						}
						printf("你的三次机会已经耗尽，本题结束，请看下一题\n");
					}
				}
				else
				{
					goto zero;
				}
			}
			goto zero;
		}
		}

	}
	en = en_1 + en_2 + en_3 + en_4;
	printf("\n经统计，你的错题数是%d\n题", en);
	return 0;
}

int SetQuestion(int* a, int* b, char* c)
{
	int min = 0, max = 10;
	int imin = 1, imax = 4;

again:
	srand((unsigned int)time(NULL));
	*a = rand() % (max - min) + min;
	*a = rand() % (max - min) + min;
	*c = rand() % (imax - imin) + imin;
	if ((*c == 3 && (*a == 0 || *b == 0)) || (*c == 2 && (*a < *b)) || (*a == 0 && *b == 0))
		goto again;
}

int four_Menu(void)
{
	int iSelect;

	printf("\n * **************************\n");
	printf("\n 1. 运行函数 Count_One_Bits");
	printf("\n 2. 运行函数 Test_Greatest_Common_Divisor");
	printf("\n 3. 运行函数 TestPrime");
	printf("\n 4. 运行函数 StatisticsNum");
	printf("\n 5. 运行函数 StatisticsChar");
	printf("\n 6. 运行函数 StatisticsMax");
	printf("\n 7. 运行函数 five_test5_1");
	printf("\n 8. 运行函数 five_test5_2");
	printf("\n 9. 运行函数 Apple");
	printf("\n 10. 运行函数 Count_e");
	printf("\n 11. 运行函数 SumPolynomial");
	printf("\n 12. 运行函数 TimesTable");
	printf("\n 13. 运行函数 Pattern");
	printf("\n 14. 运行函数 PerfectNum");
	printf("\n 15. 运行函数 PerfectNum_1");
	printf("\n 16. 运行函数 DaffodilNum");
	printf("\n 17. 运行函数 GetBall");
	printf("\n 18. 运行函数 MathLearn");
	printf("\n 0.结束运行");
	printf("\n * **************************\n");
	printf("\n\n 请输入你的选项：");
	scanf("%d", &iSelect);
	return iSelect;
}

int main()
{
	int n, x, y, z;
	do
	{
		z = four_Menu();
		switch (z)
		{
		case 1:
			printf("运行1.函数 Count_One_Bits\n");
			printf("请输入数据\n");
			Sleep(1000);
			scanf("%d", &x);
			printf("%d\n", Count_One_Bits(x));
			continue;/*1 .函数 Count_One_Bits 的功能是求 16 位二进制代码中 1 的个数，在主函数中调用它，显示输入数据
			二进制代码中 1 的个数。请你单步运行程序，在程序运行过程中使用调试工具观察程序执行流程，
				以及循环控制变量 uValue 的值。*/
		case 2:
			Sleep(1000);
			printf("\n运行2.求最大公约数的测试程序\n");
			Sleep(1000);
			Test_Greatest_Common_Divisor();//2.求最大公约数
			continue;
		case 3:
			Sleep(1000);
			printf("\n运行3.判断素数的测试程序\n");
			Sleep(1000);
			TestPrime(10); //3.判断素数的测试程序
			continue;
		case 4:
			printf("\n运行函数void StatisticsNum实现接收键盘任意输入 10 个数，\n计算所有正数的和、偶数的个数，并将统计结果显示在屏幕上\n");
			Sleep(1000);
			StatisticsNum();/*4.选择适当循环语句完成统计
	（1）编写函数 void StatisticsNum()，实现接收键盘任意输入 10 个数，计算所有正数的和、偶数的个
	数，并将统计结果显示在屏幕上。*/
			continue;
		case 5:
			StatisticsChar();
			continue;/*（2）编写函数 void StatisticsChar()从键盘输入若干个字符，以“#”结束，统计字符个数以及小写字
	母的个数。*/
		case 6:
			printf("请输入你要输入的数字个数\n");
			scanf("%d", &n);
			printf("%d is the Max Number\n", StatisticsMax(n));/*（3）编写函数 int StatisticsMax(int n)，实现接收键盘任意输入 n 个数，找出其中最大值，将结果显示
	在屏幕上并返回最大值*/
			continue;
		case 7:
			five_test5_1();//5.continue 和 break 的使用
			continue;
		case 8:
			five_test5_2();//5.continue 和 break 的使用
			continue;
		case 9:
			Apple();//6.苹果购买方案 
			continue;
		case 10:
			Count_e(); //7. 迭代法求 e 值
			continue;
		case 11:
			printf("%d", SumPolynomial(9));//8. 用多重循环求多项式的和 
			continue;
		case 12:
			TimesTable();//9．打印乘法表 
			continue;
		case 13:
			printf("请输入你想打印图案的总行数\n");
			scanf("%d", &n);
			Pattern(n);//10．编程显示图案（选作）
			continue;
		case 14:
			PerfectNum();/*11.1 编写函数 void PerfectNum( )找出 1000 之内的所有完数及这些完数的和。下面是函数的处理算法，
	要求用 for 语句实现该算法。*/
			continue;
		case 15:
			PerfectNum_1();//做不来，待定11.2 若要求如 6=1+2+3 的形式输出每个完数的因子，又该如何处理
			continue;
		case 16:
			DaffodilNum();/*12．打印水仙花数 （选作） */
			continue;
		case 17:
			GetBall();/*13.取球方案*/
			continue;
		case 18:
			MathLearn;/*14.小学生算术练习程序*/
			continue;
		}
	} while (z != 0);
	printf("程序运行结束咯!\n");
}