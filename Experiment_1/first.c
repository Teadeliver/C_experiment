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
	printf("   ***������***         ***���ݿ�ѧ**        ******��*****        *�����ݼ���*         ****201��***\n");
	printf("     **** ****            **** ****            **** ****            **** ****            **** ****\n");
	printf("       *****                *****               ******               ******               ******\n");
	printf("         *                    *                   *                    *                    *\n");
	Sleep(1500);
	Sleep(2000);
	printf("�ҽ���Ʊ����Դ�����201��!\n\n");
	Sleep(2000);
	printf("�ҵ�ѧ����2020083044.\n\n");
	Sleep(2000);
	printf("��ϲ����ĥ���Ӳ�Ʒ.\n\n");
	Sleep(2000);
	printf("һ��Ŭ��,һ�����!\n\n");
	Sleep(2000); //��ε��� printf ������ʾ������Ϣ
}

int add(int x, int y)
{
	return(x + y); /*�����������ظ��������� ADD*/
}

void AddTwo(void)
{
	int a, b, sum; //a,b Ϊ���������������sum Ϊ��
	printf("\nPlease input two number: ");
	scanf("%d,%d", &a, &b);//���� a,b ��ֵ
	sum = add(a, b);//���ú��� add���� a,b ���ݸ����������� sum ���պ����ķ���ֵ
	printf("sum= %d\n", sum);
}

void Avg(void)
{
	float a, b, c, aver;

	printf("\nPlease input 3 float :");
	scanf("%f,%f,%f", &a, &b, &c); //���� 3 ��ʵ��
	aver = (a + b + c) / 3; // ��ƽ��ֵ
	printf("\n average = %f \n", aver);
}

void DisplayDigit(void)
{
	int a;

	printf("\nPlease input a number: "); //��ʾ������ʾ
	scanf("%d", &a); //�������� a
	printf("%d", a); //������� a
}

void Func(void)
{
	int a, s, c; // a Ϊ�߳�,s Ϊ���,c Ϊ�ܳ�
	printf("\nPlease input an integer:"); //��ʾ������ʾ
	scanf("%d", &a); //����߳�
	s = a * a; //�������
	c = a * 4; //�����ܳ�
	printf("\ns= %d\n", s); //������
	printf("\nc = % d\n", c); //����ܳ�
}

int main(void)
{
	myself(); /*������µ�ʵ������ʱ���ɽ�����ɲ������Σ��Ա�۲�������н��*/
	AddTwo(); /*���� AddTwo ���� */
	Avg(); /*���� Avg ���� */
	printf("�������(1)ԭ��:���//�����˵���ͷ�ļ�������,����printf�����޷���ʶ��\n\n");
	Sleep(1000);
	printf("�������(2)ԭ��:�Զ��庯����main����֮��,main����ִ��ʱ,�޷����õ�Avg����,��Ҫ������������main����֮ǰ\n\n");
	Sleep(1000);
	printf("�������(3)��¼:\n\n");
	printf("c:\\users\\������\\desktop\\frist.c(7) : error C2065: 'a' : undeclared identifier\n\n");
	printf("c:\\users\\������\\desktop\\frist.c(7) : error C2065: 'b' : undeclared identifier\n\n");
	printf("c:\\users\\������\\desktop\\frist.c(7) : error C2065: 'c' : undeclared identifier\n\n");
	printf("c:\\users\\������\\desktop\\frist.c(7) : error C2065: 'aver' : undeclared identifier\n\n");
	DisplayDigit();
	Func();
	return 0;
}
