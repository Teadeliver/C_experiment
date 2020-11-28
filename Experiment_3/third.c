#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
#include<stdlib.h>
float fun(float x)
{
	return (x * x) + (4 * x) - 5;

}
int Area(z)
{
	return sqrt(z);
}
int RandInt_1()
{
	int min = 20, max = 100, i;
	int MyRand;
	srand(time(0));
	printf("下面是产生的十个20-100范围内的随机数");
	for (i = 0; i < 10; i++)
		printf("\nMyRand = %d", rand() % (max - min) + min);
}
int RandInt_2()
{
	int min = 0, max = 100;
	return rand() % (max - min) + min;

}
int MathLearn_plus()
{
	int x1, x2, rsum, sum, i;
	srand((unsigned int)time(NULL));
	x1 = RandInt_2();
	srand((unsigned int)time(NULL));
	x2 = RandInt_2();
	while (x1 == x2) {
		x2 = RandInt_2();
	}
	printf("\n请计算%d + %d = ？\n\n请输入你的答案：", x1, x2);
	scanf("%d", &sum);
	rsum = x1 + x2;
	if (sum == rsum)
	{
		printf("\n恭喜你，答对了，要再接再厉噢\n\n");
	}
	else
	{
		printf("\n很遗憾，答错了，请继续努力\n\n");
	}
}
void Swap1(int x, int y) //参数 x,y 为待交换的两个数
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
void Swap2(int* px, int* py) //指针 px,py 指向待交换的两个数
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}
void Swap3(int* px, int* py) //指针 px,py 指向待交换的两个数
{
	int* temp;
	temp = px;
	px = py;
	py = temp;
}
int main(void)
{
	float fx2 = 0.8, f2 = 0, fx1 = 3.0, f1 = 0;
	int a, b, c, p, S, Num1, Num2;
	f1 = fun(fx1);
	printf("f1 = %f\n", f1);
	f2 = fun(fx2);
	printf("f2 = %f\n", f2);
	printf("\n请按照a_b_c的的格式输入三角形的边长a、b、c，其中_为空格");
	scanf("%d%d%d", &a, &b, &c);
	p = (a + b + c) / 2;
	S = Area(p * (p - a) * (p - b) * (p - c));
	if (a + b > c && a + c > b && b + c > a)
		printf("根据你输入的三角形边长，三角形的面积是%d\n\n", S);
	else
		printf("\n注意！你输入的边长不能构成三角形，无法计算\n\n");
	RandInt_1();
	printf("\n\n对于RandInt中的代码，srand()的作用是种下随机中子数，\ntime(0)的作用是得到当前时间的值（从1970.1.1至今的秒数）,\nsrand(time(0))的作用就是初始化随机数种子\n");
	MathLearn_plus();
	printf("\n请以空格为间隔符输入Num1与Num2的值，按回车键继续\n");
	scanf("%d%d", &Num1, &Num2);
	Swap1(Num1, Num2);
	printf("调用Swap1函数后的结果如下:\nNum1 = %d,Num2 = %d\n", Num1, Num2);
	printf("根据结果可以判断，Swap1函数并未实现预期功能\n\n");
	Swap2(&Num1, &Num2);
	printf("调用Swap2函数后的结果如下:\nNum1 = %d,Num2 = %d\n", Num1, Num2);
	printf("根据结果可以判断，Swap2函数成功实现预期功能\n\n");
	Swap3(&Num1, &Num2);
	printf("调用Swap3函数后的结果如下:\nNum1 = %d,Num2 = %d\n", Num1, Num2);
	printf("根据结果可以判断，Swap1函数并未实现预期功能\n\n");
	return 0;
}
