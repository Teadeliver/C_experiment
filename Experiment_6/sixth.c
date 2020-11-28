#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_DEPRECATE 1
#define _CRT_NONSTDC_NO_DEPRECATE 1
#include<stdio.h>
#include<assert.h> 
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include <conio.h>
#include <windows.h>
#define ESC 27
#define SIZE 10

//函数声明
int SetQuestion(int* a, int* b, int* c);
int MathLearn_do(int* a, int* b, int* c, int* answer, int* take_answer, int* old_answer);
int StudyMem();
void Six_prog1(void);
void Point_Array(void);
int PerfectNum();
void ReverseArray(int iArray[], int iCount);
int BubbleSort(int iSortArray[], int iSize);
int SelectSort(int iSortArray_2[], int iSize_2);
void StringStudy(void);
int MathTest();

int StudyMem()
{
	int iArray[5] = { 1,2,3,4,5 };
	char cString[5] = { 'a','b','c','d','e' };
	double fData[5] = { 1.2,2.3,3.4,4.5,5.6 };
	int iNum = 10;
	char cLetter = 'C';
	double fNum = 3.1415;

	printf("size of iArray = %d\n", sizeof(iArray));
	printf("size of cString = %d\n", sizeof(cString));
	printf("size of fData = %d\n", sizeof(fData));
	printf("size of iNum = %d\n", sizeof(iNum));
	printf("size of cLetter = %d\n", sizeof(cLetter));
	printf("size of fNum = %d\n", sizeof(fNum));
	printf("\n");
	printf("adress0 of iArray = %p\n", &iArray[0]);
	printf("adress1 of iArray = %p\n", &iArray[1]);
	printf("adress2 of iArray = %p\n", &iArray[2]);
	printf("adress3 of iArray = %p\n", &iArray[3]);
	printf("adress4 of iArray = %p\n", &iArray[4]);
	printf("\n");
	printf("adress0 of cString = %p\n", &cString[0]);
	printf("adress1 of cString = %p\n", &cString[1]);
	printf("adress2 of cString = %p\n", &cString[2]);
	printf("adress3 of cString = %p\n", &cString[3]);
	printf("adress4 of cString = %p\n", &cString[4]);
	printf("\n");
	printf("adress0 of fData = %p\n", &fData[0]);
	printf("adress1 of fData = %p\n", &fData[1]);
	printf("adress2 of fData = %p\n", &fData[2]);
	printf("adress3 of fData = %p\n", &fData[3]);
	printf("adress4 of fData = %p\n", &fData[4]);
	printf("\n");
	printf("adress0 of iNum = %p\n", &iNum);
	printf("\n");
	printf("adress0 of cLetter = %p\n", &cLetter);
	printf("\n");
	printf("adress0 of fNum = %p\n", &fNum);
	return 0;
}


void Six_prog1(void)
{
	float input[20] = { 0 };
	int i, count, max, min;

	printf("输入实际数据个数（不超过20）：");
	scanf("%d", &count);
	assert(count <= 20);
	printf("输入 %d 个数据\n", count);
	for (i = 0; i < count; i++)
		scanf("%f", &input[i]);
	max = min = 0;
	for (i = 0; i < count; i++)
	{
		if (input[i] > max) max = i;
		else if (input[i] < min) min = i;
	}
	printf("输出结果：\n");
	printf("最大值为：%.2f 其下标为：%d\n", input[max], max);
	printf("最小值为：%.2f 其下标为：%d\n", input[min], min);
}

void Point_Array(void)
{
	int iArray[] = { 1, 2, 3, 4, 5 };
	int* p = NULL;
	p = iArray;
	printf(" %d \n", p[0]);
	printf(" %d \n", *(++p));
	printf(" %d \n", *(p + 2));
	printf(" %d \n", *(p--));
	printf(" %d \n", *p++);
	printf(" %d \n", *p);
	printf(" %d \n", ++(*p));
	printf(" %d \n", *p);
}

int PerfectNum()
{
	int per_num[50] = { 0 };
	int m;//完数
	int i = 0;//因子个数
	int x;//仅用于控制循环次数

	for (m = 1; m < 1000; m++)
	{
		if (isPerfectNum(m, &i, per_num))
		{
			printf("%d = %d ", m, per_num[0]);
			for (x = 1; x < i; x++)
			{
				printf("+ %d ", per_num[x]);
			}
			printf("\n");
		}
	}
	return 0;
}


int  isPerfectNum(int m, int* i, int* per_num)
{
	int n, j, k;
	int num = 0;

	k = m / 2, n = 0, j = 1;//2.1
	for (; j <= k;)//2.2
	{
		if (floor(m % j) == 0)//2.2.1
		{
			n += j;
			*(per_num + num) = j;
			num++;
		}
		j++;//2.2.2
	}
	if (m == n)
	{
		*i = num;
		return 1;
	}
	else
	{
		return 0;
	}
}

void ReverseArray(int iArray[], int iCount)
{
	int temp, i;
	int left = 0;
	int right = iCount - 1;
	while (left <= right)
	{
		temp = iArray[left];
		iArray[left] = iArray[right];
		iArray[right] = temp;
		left++;
		right--;
	}
	printf("iArray数组倒序之后的元素按顺序打印为{ ");
	for (i = 0; i < iCount; i++)
	{
		printf("%d ", iArray[i]);
	}
	printf("}\n");
}

int BubbleSort(int iSortArray[], int iSize)
{
	int i, j, k = 0, temp;
	for (i = 0; i < iSize; i++)
	{
		for (j = 0; j < iSize - 2; j++)
		{
			if (iSortArray[j] > iSortArray[j + 1])
			{
				temp = iSortArray[j + 1];
				iSortArray[j + 1] = iSortArray[j];
				iSortArray[j] = temp;
				k++;
			}
		}
	}
	for (i = 0; i < iSize; i++)
	{
		printf("%d ", iSortArray[i]);
	}
	printf("\n%d\n", k);
	return 0;
}

int SelectSort(int iSortArray_2[], int iSize_2)
{
	int i, j, k, m, temp, z = 0;
	int min;

	printf("   初始数组数组：{");
	for (i = 0; i < 10; i++)
	{
		printf(" %2d ", iSortArray_2[i]);
	}
	printf("}\n");
	for (k = 0; k < 9; k++)
	{
		for (i = k; i < 10; i++)//规定无序集合
		{
			min = iSortArray_2[i];//将无序集合的第一个数赋值给min
			for (j = i; j < 10; j++)//遍历寻找最小，找到无序集合中的最小值
			{
				if (iSortArray_2[j] < min)
				{
					min = iSortArray_2[j];
				}
			}
			for (m = i; m < 10; m++)//寻找最小数的下标
			{
				if (min == iSortArray_2[m])//交换最小数与无序数列的第一个
				{
					temp = iSortArray_2[m];
					iSortArray_2[m] = iSortArray_2[i];
					iSortArray_2[i] = temp;
					z++;
					break;
				}
			}
			printf("第%d次排序的数组：{", k + 1);
			for (i = 0; i < 10; i++)
			{
				printf(" %2d ", iSortArray_2[i]);
			}
			printf("}\n");
		}
	}
	printf("共交换%d次\n", z);
	return 0;
}

//void StringStudy(void)
//{
//	char cStr1[20];
//	char cStr2[20] = { 'H', 'e', 'l', 'l', 'o', ' ','t', 'h', 'e', ' ', 'w', 'o', 'r', 'l', 'd', '!' };
//	char cStr3[] = "Programming is interesting.";
//	char* pStr1 = "OK!";
//	char* pStr2, * pStr3;
//	int i;
//	printf("Assign a string to the array or the pointer :\n");
//	*cStr1 = "OK"; 
//	pStr2 = "ABCD!";
//	puts(pStr1);
//	puts(pStr2);
//	printf("Study the address of a string const:\n");
//	printf("Address of \"ABCD!\":%x\n", "ABCD!");
//	printf("pStr2=%x\n", pStr2);
//	printf("The third char of \"ABCD!\":%c\n", "ABCD!"[3]);
//	printf("Input a string to the pointer pStr1 by calling gets():\n");
//	gets(pStr1);
//	puts(pStr1);
//	printf("Input \"12345 abcde\" to the array cStr1 by calling gets():\n");
//	gets(cStr1); //输入字符串"12345 abcde"
//	puts(cStr1);
//	printf("Input \"ABCDEF 123456\" to the array cStr1 by calling scanf():\n");
//	scanf("%s", cStr1); //输入字符串"ABCDEF 123456"
//	puts(cStr1);
//	//fflush(stdin);
//	pStr1 = cStr1;
//	printf("Using getchar() to input \"Hi, hello!\" ended by ENTER:\n");
//	i = 0;
//	pStr1[i] = getchar(); //输入字符串"Hi, hello!"
//	while ((pStr1[i] != '\n') && (i < 19))
//	{
//		i++;
//		pStr1[i] = getchar();
//	}
//	pStr1[i] = '\0';
//	printf("Output the string by calling printf():%s\n", pStr1);
//	pStr1 = cStr1;
//	printf("Using getche() to input \"How are you!\" ended by ESC:\n");
//	i = 0;
//	pStr1[i] = getche(); //输入字符串"How are you!"+ESC
//	while ((pStr1[i] != ESC) && (i < 19))
//	{
//		i++;
//		pStr1[i] = getche();
//	}
//	// pStr1[i]='\0';
//	printf("\nOutput the string by calling printf():%s\n", pStr1);
//	printf("Display string2 and string3 by calling puts():\n");
//	puts(cStr2);
//	puts(cStr3);
//	printf("Size of the array cStr2:%d\n", sizeof(cStr2));
//	printf("Size of the array cStr3:%d\n", sizeof(cStr3));
//	printf("Using the pointer to output the string2 by calling printf():\n");
//	pStr2 = cStr2;
//	printf("%s", pStr2);
//	printf("Using the pointer to output the string3 by calling putchar():\n");
//	pStr3 = cStr3;
//	while (*pStr3)
//	{
//		putchar(*pStr3);
//		pStr3++;
//	}
//	printf("The End!\n");
//}

int MathTest()
{
	int qt_1[SIZE] = { 0 };
	int op[SIZE] = { 0 };
	int qt_2[SIZE] = { 0 };
	int answer[SIZE] = { 0 };//正确答案保存
	int old_answer[SIZE] = { 0 };//输入答案保存
	int take_answer[SIZE] = { 0 };//答题结果
	int i, c, d, new_answer, num = 0;
	char ch;

	SetQuestion(qt_1, qt_2, op);
	MathLearn_do(qt_1, qt_2, op, answer, take_answer, old_answer);
	printf("你的错题有；");
	for (i = 0; i < 10; i++)
	{
		if (take_answer[i] == 0)
		{
			num++;
			printf(" %d ", (i + 1));
		}
	}
	printf("共错 %d 道题\n", num);
	printf("Do you want to correct your answer? Y/N\n");
	while ((c = getchar()) != '\n' && c != EOF);
	scanf("%c", &ch);
	switch (ch)
	{
	case 'Y':
		for (i = 0; i < 10; i++)
		{
			if (take_answer[i] == 0)
			{
				//重现错题
				switch (op[i])
				{
				case 1:printf("第 %d 题；%d + %d = ?\n", (i + 1), qt_1[i], qt_2[i]);
					d = (qt_1[i] + qt_2[i]);
					break;
				case 2:printf("第 %d 题；%d - %d = ?\n", (i + 1), qt_1[i], qt_2[i]);
					d = (qt_1[i] + qt_2[i]);
					break;
				case 3:printf("第 %d 题；%d * %d = ?\n", (i + 1), qt_1[i], qt_2[i]);
					d = (qt_1[i] + qt_2[i]);
					break;
				case 4:printf("第 %d 题；%d / %d = ?\n", (i + 1), qt_1[i], qt_2[i]);
					d = (qt_1[i] + qt_2[i]);
					break;
				}
				printf("你上次的答案是 %d\n", old_answer[i]);
				printf("请输入你新的答案的答案：\n");
				scanf("%d", &new_answer);
				if (new_answer == answer[i])
				{
					printf("经过第二次答题，你获得了\"Right!\"\n");
				}
				else
				{
					printf("你输入的答案是：%d\n", new_answer);
					printf("正确答案是：%d\n", answer[i]);
					printf("经过第二次答题，你获得了\"Not Correct!\"\n");
					printf("你的机会已经用完\n请看下一道错题\n\n");
				}
			}
		}
		return 4;
	case 'y':
		for (i = 0; i < 10; i++)
		{
			if (take_answer[i] == 0)
			{
				//重现错题
				switch (op[i])
				{
				case 1:printf("第 %d 题；%d + %d = ?\n", (i + 1), qt_1[i], qt_2[i]);
					d = (qt_1[i] + qt_2[i]);
					break;
				case 2:printf("第 %d 题；%d - %d = ?\n", (i + 1), qt_1[i], qt_2[i]);
					d = (qt_1[i] + qt_2[i]);
					break;
				case 3:printf("第 %d 题；%d * %d = ?\n", (i + 1), qt_1[i], qt_2[i]);
					d = (qt_1[i] + qt_2[i]);
					break;
				case 4:printf("第 %d 题；%d / %d = ?\n", (i + 1), qt_1[i], qt_2[i]);
					d = (qt_1[i] + qt_2[i]);
					break;
				}
				printf("你上次的答案是 %d\n", old_answer[i]);
				printf("请输入你新的答案的答案：\n");
				scanf("%d", &new_answer);
				if (new_answer == answer[i])
				{
					printf("经过第二次答题，你获得了\"Right!\"");
				}
				else
				{
					printf("你输入的答案是：%d\n", new_answer);
					printf("正确答案是：%d\n", answer[i]);
					printf("经过第二次答题，你获得了\"Not Correct!\"\n");
					printf("你的机会已经用完\n请看下一道错题\n\n");
				}
			}
		}
		return 4;
	default:
		break;
	}
	return 0;
}

int SetQuestion(int* a, int* b, int* c)
{
	int min = 0, max = 10;
	int imin = 1, imax = 4;
	int i;

	srand((unsigned int)time(NULL));
	for (i = 0; i < 10; i++)
	{
		*(a + i) = rand() % (max - min) + min;
		*(b + i) = rand() % (max - min) + min;
		*(c + i) = rand() % (imax - imin) + imin;
		if ((*c == 3 && (*a == 0 || *b == 0)) || (*c == 2 && (*a < *b)) || (*a == 0 && *b == 0))
		{
			continue;
		}
		else
		{
			i--;
		}
	}
	return 0;
}

int MathLearn_do(int* a, int* b, int* c, int* answer, int* take_answer, int* old_answer)
{
	int i, d = 0;
	for (i = 0; i < 10; i++)
	{
		switch (*(c + i))
		{
		case 1:printf("第 %d 题；%d + %d = ?\n", (i + 1), *(a + i), *(b + i));
			d = (*(a + i)) + (*(b + i));
			break;
		case 2:printf("第 %d 题；%d - %d = ?\n", (i + 1), *(a + i), *(b + i));
			d = (*(a + i)) - (*(b + i));
			break;
		case 3:printf("第 %d 题；%d * %d = ?\n", (i + 1), *(a + i), *(b + i));
			d = (*(a + i)) * (*(b + i));
			break;
		case 4:printf("第 %d 题；%d / %d = ?\n", (i + 1), *(a + i), *(b + i));
			d = (*(a + i)) / (*(b + i));
			break;
		}
		*(answer + i) = d;
		printf("请输入你的答案：\n");
		scanf("%d", &*(old_answer + i));
		system("cls");
		if (*(old_answer + i) == d)
		{
			printf("上一题的结果是 Right!\n\n");
			*(take_answer + i) = 1;
		}
		else
		{
			printf("上一题的结果是 Not Correct!\n\n");
			*(take_answer + i) = 0;
		}
	}
	printf("出题完毕\n");
	return 0;
}

int main()
{
	//int iArray[] = { 1,2,3,4,5,6,7,8,9,10 };
	//int iCount, iSize, i, iSize_2;
	//int iSortArray[100];
	//int iSortArray_2[10];

	//StudyMem();

	//Six_prog1();

	//Point_Array();

	PerfectNum();

	//iCount = sizeof(iArray) / sizeof(iArray[0]);
	//ReverseArray(iArray, iCount);

	//srand((unsigned)time(NULL));//对数组进行赋值
	//for(i = 0; i < 100; i++)
	//{
	//	iSortArray[i] = rand()%100;
	//}
	//iSize = sizeof(iSortArray) / sizeof(iSortArray[0]);
	//BubbleSort(iSortArray, iSize);

	//srand((unsigned)time(0));//对数组进行赋值
	//for(i = 0; i < 10; i++)
	//{
	//	iSortArray_2[i] = rand()%100;
	//}
	//iSize_2 = sizeof(iSortArray_2) / sizeof(iSortArray_2[0]);
	//SelectSort(iSortArray_2, iSize_2);

	//StringStudy();

	//MathTest();
	return 0;
}