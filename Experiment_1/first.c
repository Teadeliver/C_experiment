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
	printf("   ***??????***         ***??????**        ******??*****        *?????????*         ****201??***\n");
	printf("     **** ****            **** ****            **** ****            **** ****            **** ****\n");
	printf("       *****                *****               ******               ******               ******\n");
	printf("         *                    *                   *                    *                    *\n");
	Sleep(1500);
	Sleep(2000);
	printf("????????????????201??!\n\n");
	Sleep(2000);
	printf("????????2020083044.\n\n");
	Sleep(2000);
	printf("??????????????.\n\n");
	Sleep(2000);
	printf("??????,??????!\n\n");
	Sleep(2000); //??��??? printf ??????????????
}

int add(int x, int y)
{
	return(x + y); /*????????????????????? ADD*/
}

void AddTwo(void)
{
	int a, b, sum; //a,b ????????????????sum ???
	printf("\nPlease input two number: ");
	scanf("%d,%d", &a, &b);//???? a,b ???
	sum = add(a, b);//???��??? add???? a,b ??????????????? sum ?????????????
	printf("sum= %d\n", sum);
}

void Avg(void)
{
	float a, b, c, aver;

	printf("\nPlease input 3 float :");
	scanf("%f,%f,%f", &a, &b, &c); //???? 3 ?????
	aver = (a + b + c) / 3; // ??????
	printf("\n average = %f \n", aver);
}

void DisplayDigit(void)
{
	int a;

	printf("\nPlease input a number: "); //??????????
	scanf("%d", &a); //???????? a
	printf("%d", a); //??????? a
}

void Func(void)
{
	int a, s, c; // a ????,s ????,c ????
	printf("\nPlease input an integer:"); //??????????
	scanf("%d", &a); //??????
	s = a * a; //???????
	c = a * 4; //???????
	printf("\ns= %d\n", s); //??????
	printf("\nc = % d\n", c); //??????
}

int main(void)
{
	myself(); /*????????????????????????????????��????????????��??*/
	AddTwo(); /*???? AddTwo ???? */
	Avg(); /*???? Avg ???? */
	printf("???????(1)???:????//???????????????????,????printf????????????\n\n");
	Sleep(1000);
	printf("???????(2)???:????��????main???????,main????????,????????Avg????,???????????????main??????\n\n");
	Sleep(1000);
	printf("???????(3)???:\n\n");
	printf("c:\\users\\??????\\desktop\\frist.c(7) : error C2065: 'a' : undeclared identifier\n\n");
	printf("c:\\users\\??????\\desktop\\frist.c(7) : error C2065: 'b' : undeclared identifier\n\n");
	printf("c:\\users\\??????\\desktop\\frist.c(7) : error C2065: 'c' : undeclared identifier\n\n");
	printf("c:\\users\\??????\\desktop\\frist.c(7) : error C2065: 'aver' : undeclared identifier\n\n");
	DisplayDigit();
	Func();
	return 0;
}
