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
	printf("�����ǲ�����ʮ��20-100��Χ�ڵ������");
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
	printf("\n�����%d + %d = ��\n\n��������Ĵ𰸣�", x1, x2);
	scanf("%d", &sum);
	rsum = x1 + x2;
	if (sum == rsum)
	{
		printf("\n��ϲ�㣬����ˣ�Ҫ�ٽ�������\n\n");
	}
	else
	{
		printf("\n���ź�������ˣ������Ŭ��\n\n");
	}
}
void Swap1(int x, int y) //���� x,y Ϊ��������������
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
void Swap2(int* px, int* py) //ָ�� px,py ָ���������������
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}
void Swap3(int* px, int* py) //ָ�� px,py ָ���������������
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
	printf("\n�밴��a_b_c�ĵĸ�ʽ���������εı߳�a��b��c������_Ϊ�ո�");
	scanf("%d%d%d", &a, &b, &c);
	p = (a + b + c) / 2;
	S = Area(p * (p - a) * (p - b) * (p - c));
	if (a + b > c && a + c > b && b + c > a)
		printf("����������������α߳��������ε������%d\n\n", S);
	else
		printf("\nע�⣡������ı߳����ܹ��������Σ��޷�����\n\n");
	RandInt_1();
	printf("\n\n����RandInt�еĴ��룬srand()�����������������������\ntime(0)�������ǵõ���ǰʱ���ֵ����1970.1.1�����������,\nsrand(time(0))�����þ��ǳ�ʼ�����������\n");
	MathLearn_plus();
	printf("\n���Կո�Ϊ���������Num1��Num2��ֵ�����س�������\n");
	scanf("%d%d", &Num1, &Num2);
	Swap1(Num1, Num2);
	printf("����Swap1������Ľ������:\nNum1 = %d,Num2 = %d\n", Num1, Num2);
	printf("���ݽ�������жϣ�Swap1������δʵ��Ԥ�ڹ���\n\n");
	Swap2(&Num1, &Num2);
	printf("����Swap2������Ľ������:\nNum1 = %d,Num2 = %d\n", Num1, Num2);
	printf("���ݽ�������жϣ�Swap2�����ɹ�ʵ��Ԥ�ڹ���\n\n");
	Swap3(&Num1, &Num2);
	printf("����Swap3������Ľ������:\nNum1 = %d,Num2 = %d\n", Num1, Num2);
	printf("���ݽ�������жϣ�Swap1������δʵ��Ԥ�ڹ���\n\n");
	return 0;
}
