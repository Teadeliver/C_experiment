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
		if (uValue % 2 == 1) //uValue ���λΪ 1
			iSum++;
		uValue /= 2; //uValue ����һλ
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
	int a = 26, b = 48; //һ��������� 
	int result;
	//���ú��� Greatest_Common_Divisor �� a��b �����Լ��
	result = Greatest_Common_Divisor(a, b);
	printf("\n %d �� %d �����Լ���� %d", a, b, result);
	a = 57; b = 39; //��һ���������
	result = Greatest_Common_Divisor(a, b);
	printf("\n %d �� %d �����Լ���� %d", a, b, result);
	/*�á�����������в���*/
	srand(time(0));
	a = rand() % 80 + 13; b = rand() % 80 + 7;
	result = Greatest_Common_Divisor(a, b);
	printf("\n %d �� %d �����Լ���� %d\n", a, b, result);
}

int IsPrimeNumber(int m)
{
	int i, k, h = 0;
	if ((m == 0) || (m == 1)) //0 �� 1 ��������
	{
		h = 0; //m ��������
	}
	else
	{
		k = (int)sqrt(m); //�� m ��ƽ��������ȷ��ѭ������
		for (i = 2; i <= k; i++)
		{
			if (m % i == 0)
			{
				h = 1; //m ��������
			}
			else
			{
				h = 0;//m ������
			}
		}
	}
	return h;
}

void TestPrime(int iNum) //��������Ϊ 0��i 
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


int test_array(int a[], int* p)//ʵ��ͳ��ż������
{
	int i;
	*p = 0;
	for (i = 0; i < N; i++)
	{
		if (!(a[i] % 2))
		{
			(*p)++;//ָ���ַ+1
		}
	}
	return *p;
}

int test_add(int a[], int* p)//ʵ���������
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
	int w = 0, y = 0;//w��ż��������y�������ͱ���
	for (i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
		test_array(a, &w);
		test_add(a, &y);
	}
	printf("�����ĺ���%��ż�������� %d", y, w);
	return 0;
}

void StatisticsChar()
{
	char c = 0;
	int y = 0, w = 0;

	fflush(stdin);
	printf("�������ַ�����#��ʾ��������");
	c = getchar();
	while (c != '#')//����ѭ���壬�������ַ�����������ж�
	{
		y++;
		if (c <= 'z' && c >= 'a')
		{
			w++;
		}
		c = getchar();

	}
	printf("�� %d���ַ�,�� %d��Сд��ĸ��\n", y, w);

}

int StatisticsMax(int n)
{
	int l, k;

	printf("��������Ҫ���������\n");
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
		printf("�� %d �죬%d ��ƻ�����۸�Ϊ %.0lf Ԫ\n", day, num, sum);
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
	n = n / i;//�������һ�����㣬�������ۼ���
	while (o - n >= EPS)//���ۼ�������ۼ���ɴ�����
	{
		e = e + n;
		i++;
		o = n;
		n = n / i;
	}
	printf("e = %lf���ۼӴ���Ϊ%d\n", e, i - 1);
}

int SumPolynomial(int n)
{
	int i, j; //ѭ�����Ʊ���
	int t; //�ۼ����ֵ
	int sum; //�ۼӺ�
	sum = 0; //��ʼֵΪ 0
	for (i = 1; i <= n; i++)
	{
		t = i;//��
		for (j = 0; j < i - 1; j++)
		{
			t = (t * 10 + i);//��
		}
		sum += t;//sum = sum + t;
	}
	return sum;
}

void TimesTable(void)
{
	int i, j;
	for (i = 1; i <= 9; i++) //���ƴ�ӡ����
	{
		for (j = 1; j <= i; j++) //����ÿ�д�ӡ���ݸ���
			printf(" %d * %d = % -2d ", i, j, i * j);
		printf("\n\n"); //���д���
	}
}

int Pattern(int n)
{
	int i, j, a = n, z;
	for (i = 0; i <= n; i++)
	{
		if (i < (n + 1) / 2)//��ת�ո�
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
		for (j = abs(a); j > 0; j = j - 1)//ͨ������ֵ��ת*����
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

int PerfectNum_test(int m, int i)//�ж�����
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
			printf("%d ��һ��ˮ������%d = %d ^3 + %d ^3 + %d ^3 \n", m, m, a, b, c);
		}
	}
	return 0;
}

void GetBall()
{
	int m, n, number = 0;
	printf("          ���� ���� ����\n\n");
	for (m = 0; m <= 3; m++)
	{
		for (n = 0; n <= 3; n++)
		{
			if (8 - m - n <= 6)
			{
				printf("������ %2d:   %d   %d   %d\n", ++number, m, n, 8 - m - n);
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

	printf("������������ϰ����Ŀ������\n");
	printf("���Եȣ�����Ϊ�����\n");
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
			printf("��������Ĵ𰸲����س�����\n");
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
					printf("������������Ĵ𰸣�\n");
					printf("�㻹�� %d �λ���\n", (3 - e));
					scanf("%d", &d);
					goto try1;
				}
				printf("������λ����Ѿ��ľ�������������뿴��һ��\n");
			}
			break;
		}
		case 2:
		{
			printf("%d - %d = \n", a, b);
			printf("��������Ĵ𰸲����س�����\n");
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
					printf("������������Ĵ𰸣�\n");
					printf("�㻹�� %d �λ���\n", (3 - e));
					scanf("%d", &d);
					goto try2;
				}
				printf("������λ����Ѿ��ľ�������������뿴��һ��\n");
			}
			break;
		}
		case 3:
		{
			printf("%d * %d = \n", a, b);
			printf("��������Ĵ𰸲����س�����\n");
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
					printf("������������Ĵ𰸣�\n");
					printf("�㻹�� %d �λ���\n", (3 - e));
					scanf("%d", &d);
					goto try3;
				}
				printf("������λ����Ѿ��ľ�������������뿴��һ��\n");
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
					printf("��������Ĵ𰸲����س�����\n");
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
							printf("������������Ĵ𰸣�\n");
							printf("�㻹�� %d �λ���\n", (3 - e));
							scanf("%d", &d);
							goto try4;
						}
						printf("������λ����Ѿ��ľ�������������뿴��һ��\n");
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
	printf("\n��ͳ�ƣ���Ĵ�������%d\n��", en);
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
	printf("\n 1. ���к��� Count_One_Bits");
	printf("\n 2. ���к��� Test_Greatest_Common_Divisor");
	printf("\n 3. ���к��� TestPrime");
	printf("\n 4. ���к��� StatisticsNum");
	printf("\n 5. ���к��� StatisticsChar");
	printf("\n 6. ���к��� StatisticsMax");
	printf("\n 7. ���к��� five_test5_1");
	printf("\n 8. ���к��� five_test5_2");
	printf("\n 9. ���к��� Apple");
	printf("\n 10. ���к��� Count_e");
	printf("\n 11. ���к��� SumPolynomial");
	printf("\n 12. ���к��� TimesTable");
	printf("\n 13. ���к��� Pattern");
	printf("\n 14. ���к��� PerfectNum");
	printf("\n 15. ���к��� PerfectNum_1");
	printf("\n 16. ���к��� DaffodilNum");
	printf("\n 17. ���к��� GetBall");
	printf("\n 18. ���к��� MathLearn");
	printf("\n 0.��������");
	printf("\n * **************************\n");
	printf("\n\n ���������ѡ�");
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
			printf("����1.���� Count_One_Bits\n");
			printf("����������\n");
			Sleep(1000);
			scanf("%d", &x);
			printf("%d\n", Count_One_Bits(x));
			continue;/*1 .���� Count_One_Bits �Ĺ������� 16 λ�����ƴ����� 1 �ĸ��������������е���������ʾ��������
			�����ƴ����� 1 �ĸ��������㵥�����г����ڳ������й�����ʹ�õ��Թ��߹۲����ִ�����̣�
				�Լ�ѭ�����Ʊ��� uValue ��ֵ��*/
		case 2:
			Sleep(1000);
			printf("\n����2.�����Լ���Ĳ��Գ���\n");
			Sleep(1000);
			Test_Greatest_Common_Divisor();//2.�����Լ��
			continue;
		case 3:
			Sleep(1000);
			printf("\n����3.�ж������Ĳ��Գ���\n");
			Sleep(1000);
			TestPrime(10); //3.�ж������Ĳ��Գ���
			continue;
		case 4:
			printf("\n���к���void StatisticsNumʵ�ֽ��ռ����������� 10 ������\n�������������ĺ͡�ż���ĸ���������ͳ�ƽ����ʾ����Ļ��\n");
			Sleep(1000);
			StatisticsNum();/*4.ѡ���ʵ�ѭ��������ͳ��
	��1����д���� void StatisticsNum()��ʵ�ֽ��ռ����������� 10 �������������������ĺ͡�ż���ĸ�
	��������ͳ�ƽ����ʾ����Ļ�ϡ�*/
			continue;
		case 5:
			StatisticsChar();
			continue;/*��2����д���� void StatisticsChar()�Ӽ����������ɸ��ַ����ԡ�#��������ͳ���ַ������Լ�Сд��
	ĸ�ĸ�����*/
		case 6:
			printf("��������Ҫ��������ָ���\n");
			scanf("%d", &n);
			printf("%d is the Max Number\n", StatisticsMax(n));/*��3����д���� int StatisticsMax(int n)��ʵ�ֽ��ռ����������� n �������ҳ��������ֵ���������ʾ
	����Ļ�ϲ��������ֵ*/
			continue;
		case 7:
			five_test5_1();//5.continue �� break ��ʹ��
			continue;
		case 8:
			five_test5_2();//5.continue �� break ��ʹ��
			continue;
		case 9:
			Apple();//6.ƻ�����򷽰� 
			continue;
		case 10:
			Count_e(); //7. �������� e ֵ
			continue;
		case 11:
			printf("%d", SumPolynomial(9));//8. �ö���ѭ�������ʽ�ĺ� 
			continue;
		case 12:
			TimesTable();//9����ӡ�˷��� 
			continue;
		case 13:
			printf("�����������ӡͼ����������\n");
			scanf("%d", &n);
			Pattern(n);//10�������ʾͼ����ѡ����
			continue;
		case 14:
			PerfectNum();/*11.1 ��д���� void PerfectNum( )�ҳ� 1000 ֮�ڵ�������������Щ�����ĺ͡������Ǻ����Ĵ����㷨��
	Ҫ���� for ���ʵ�ָ��㷨��*/
			continue;
		case 15:
			PerfectNum_1();//������������11.2 ��Ҫ���� 6=1+2+3 ����ʽ���ÿ�����������ӣ��ָ���δ���
			continue;
		case 16:
			DaffodilNum();/*12����ӡˮ�ɻ��� ��ѡ���� */
			continue;
		case 17:
			GetBall();/*13.ȡ�򷽰�*/
			continue;
		case 18:
			MathLearn;/*14.Сѧ��������ϰ����*/
			continue;
		}
	} while (z != 0);
	printf("�������н�����!\n");
}