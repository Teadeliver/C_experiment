#define _CRT_SECURE_NO_WARNINGS 1
#define OK 1
#define STR1 "computer"
#define STR2 "english"
#include <stdio.h>

void prog1_1(void)
{
	int k;
	float x = 3.6f;

	printf("[k = x] = % d	[x] = % f	[k] = % d\n", k = x, x, k);
	printf("[k = x] = % d	[x] = % 0.1f	[k] = % d\n", k = x, x, k);
}

void prog1_2(void)
{
	int Var1 = -1;
	short Var2 = 65535;
	long Var3 = 98300;
	unsigned int Var4 = 98;
	float Var5 = 36.5387215;
	double Var6 = 127.753405213;
	char Var7 = 'A';
	printf("Var1=%d\nVar2=%d\nVar3=%d\nVar4=%d\nVar5=%7f\nVar6=%.9f\nVar7=%c\n", Var1, Var2, Var3, Var4, Var5, Var6, Var7);
}
int prog2_1(void)
{
	char cData;
	int iNum;
	float fData;

	printf("Input a char:"); //��ʾ������ʾ
	scanf("%c", &cData); //���ַ���������ֵ
	printf("cData ��ֵ��%c\n", cData); //���ַ���ʽ��ʾ������ֵ
	printf("cData ռ�ڴ�%d �ֽ�\n", sizeof(cData)); //��ʾ�����ռ��С
	printf("cData ��ʼ��ַ�� 0x%x\n", &cData); //��ʾ������ռ�ڴ��׵�ַ
	printf("\nInput an integer:");
	scanf("%d", &iNum);
	printf("iNum ��ֵ��%d\n", iNum);
	printf("iNum ռ�ڴ�%d �ֽ�\n", sizeof(iNum));
	printf("iNum ��ʼ��ַ��%#x \n", &iNum);
	printf("\nInput a float:");
	scanf("%f", &fData);
	printf("fData ��ֵ��%f\n", fData);
	printf("fData ռ�ڴ�%d �ֽ�\n", sizeof(fData));
	printf("fData ��ʼ��ַ�� 0x%p\n", &fData);
	return OK;
}
int prog3_1(void)
{
	float x = 2.5f, y = 4.7f, k;
	int tmp = 12, z = 7, w = 5, a, e;
	while (w--)
	{
		a = tmp;
		printf("\n����������鿴����ŵ����\n\n");
		printf("1 a+=a; 2 a*=2+3; 3 a%=(5%2); 4 a+=a-=a*=a; 5 x+z%3*(int)(x+y)%2/4\n");
		scanf("%d", &e);
		switch (e)
		{
		case 1:
			a += a;
			printf("a = %d\n", a);
			continue;
		case 2:
			a *= 2 + 3;
			printf("a = %d\n", a);
			continue;
		case 3:
			a %= (5 % 2);
			printf("a = %d\n", a);
			continue;
		case 4:
			a += a -= a *= a;
			printf("a= %d\n", a);
			continue;
		case 5:
			k = x + z % 3 * (int)(x + y) % 2 / 4;
			printf("k = %f\n\n", k);
		}
	}
	return 0;
}
void FahrToCelsius_1(void)
{
	int celsius, fahr = 60;
	celsius = (fahr - 32) * 5 / 9;
	printf("60��F �� %d��C\n", celsius);
}
void FahrToCelsius_2(void)
{
	int celsius, fahr = 0;
	printf("����������Ҫת���Ļ����¶ȣ�\n");
	scanf_s("%d", &fahr);
	celsius = (fahr - 32) * 5 / 9;
	printf("%d��F �� %d��C\n\n", fahr, celsius);
}
int prog6_1(void)
{
	int a = 0x64; //���岢��ʼ�����ͱ��� a
	int* pa; //����ָ����� pa
	char ch = 'A'; //���岢��ʼ���ַ����� ch
	char* pch = &ch; //���岢��ʼ��ָ����� pch
	pa = &a; //��ʼ��ָ����� pa��ʹָ��ָ��Ŀ����� a
	printf("���ͱ��� a ��ֵ:a=%d\n", a);
	printf("���ͱ��� a ��ָ��:&a=%p\n", &a);
	printf("ָ����� pa ��ֵ:pa=%p\n", pa);
	printf("ָ����� pa ��ָ��:&pa=%p\n", &pa);
	printf("�ַ����� ch ��ֵ: ch = %p\n", ch); //��� ch ��ֵ
	printf("�ַ����� ch ��ָ��: &ch = %p\n", &ch); //��� ch �ĵ�ַ
	printf("ָ����� pch ��ֵ: pch = %p\n", pch); //��� pch ��ֵ
	printf("ָ����� pch ��ָ��: &pch = %p\n", &pch); //��� pch �ĵ�ַ
	printf("ָ����� pch ռ�ڴ� %d �ֽ�\n", sizeof(pch)); //��� pch ռ�ڴ��ֽ���
	return OK; /*�� OK ���ظ�������������ʾ��������һ������*/
}
int prog6_2(void)
{
	int a = 3, b = 4, sum = 0;
	int* pa, * pb, * psum; //��������ָ����� pa,pb,psum
	char ch;
	char* pch = &ch; //���岢��ʼ���ַ���ָ����� pch
	pa = &a; //����ָ����� pa ָ��Ŀ����� a
	pb = &b; //����ָ����� pb ָ��Ŀ����� b
	psum = &sum; //��ʼ������ָ����� psum
	printf("ָ�������ֵ:pa = %x pb = %x psum = %x\n", pa, pb, psum);
	printf("Ŀ�������ֵ:a = %d pb = %d sum = %d\n", *pa, *pb, *psum);//������ָ������������ͱ���
	*psum = *pa + *pb; //��ָ������� a,b ֮��
	*pch = 'A'; //��ָ�����Ϊ�ַ�������ֵ
	printf("������:sum = %d\tch = %c\n", *(&sum), ch);
	printf("����ָ������� + ����: pa = %x pa + 1 = %x\n", pa, pa + 1);
	printf("�ַ���ָ������� + ����: pch = %x pch + 1 = %x\n", pch, pch + 1);
	return OK;
}
void prog7_1(void)
{
	char c1, c2, c3;
	printf("\nInput three characters:\n");
	scanf("%c", &c1);
	scanf("%c", &c2);
	scanf("%c", &c3);
	printf("c1 = %c\tASCII = %d\n", c1, c1);
	printf("c2 = %c\tASCII = %d\n", c2, c2);
	printf("c3 = %c\tASCII = %d\n\n", c3, c3);
}
void prog7_2(void)
{
	int iNumA, iNumB;
	printf("Input two integers :\n");
	scanf("%d%d", &iNumA, &iNumB);
	printf("\niNumA = %d��iNumB = %d\n\n", iNumA, iNumB);
}
void prog7_5(void)
{
	int a = 5, b = 7;
	float x = 67.8546f, y = -789.124f;
	long n = 1234567;
	unsigned int u = 65535;
	printf("#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#\n"); //����߿�����#�ĸ���ȷ���ֶο��
	printf("a,b:%3d%3d", a, b);
	printf("\nx,y:%lf,%lf ", x, y);
	printf("\nx,y:%lf\t\40\40\40,%lf ", x, y);
	printf("\nx,y:\40\40\40%.2f%.4f ", x, y);
	printf("\nx,y:%.6e%.2e ", x, y);
	printf("\nu,u,u:%d,%o,%x ", n, n, n); //��� n ��ʮ���ơ��˽��ƺ�ʮ�����Ƶ�ֵ
	printf("\nn,n,n:%d,%o,%x ", u, u, u); //��� u ��ʮ���ơ��˽��ƺ�ʮ�����Ƶ�ֵ
	printf("\nSTR1,STR2:%s,\40\40\40%3.3s \n", STR1, STR2);
}
void MathLearn(void)
{
	int a, b, c, d;
	printf("\n�������һ������:\n");
	scanf("%d", &a);
	printf("������ڶ���������\n");
	scanf("%d", &b);
	printf("��Ŀ��%d + %d = ��\n\n��������Ĵ�:\n", a, b);
	scanf("%d", &c);
	d = a + b;
	if (c == d)
		printf("\n��ϲ�㣬�����ˣ�������̫���ˣ�");
	else
		printf("\n���ź���������ޣ�����Ҫ����Ŭ����\n");
}
int main(void)
{
	printf("prog1_1��������\n");
	prog1_1();
	printf("\nprog1_1 kֵ��ͬ��ԭ��\n��:��Ϊ��һ��kֵ��Ӧ��k = x���൱�ڸ�k��ֵ��������ڶ���kδ��ʼ��ֵҲû�н��и�ֵ����������������\n\n");
	printf("prog1_2��������\n");
	prog1_2();
	printf("\nprog1_2 Ϊʲô����ĵڶ������� Var2 ֵΪ-1��\n����Ϊ���丳��ֵ�����˶����͵�ȡֵ��Χ\n");
	printf("\nprog1_2 ����ı��� 5 ��ֵΪʲô���ʼ���Ĳ�ͬ��\n��:����5����ɵ����ȸ����ͱ�������ֵ�ľ��ȴ��ڳ����˵����ȸ����͵��޶ȣ����������ݽض�\n");
	printf("\nprog1_2 ������ 7 �ĳ�ʼֵ��Ϊ 65���������н����Σ�Ϊʲô��\n��:�����ֵ������Var7 = A,��Ϊ65��ASCII����ж�Ӧ�ַ�A\n\n");
	prog2_1();
	prog3_1();
	printf("\n�������޸ĺõĽ������¶�Ϊ 60��F ת���������¶�ֵ�ĳ��������\n");
	FahrToCelsius_1();
	printf("\n�����ǽ����⻪���¶�ת��Ϊ�����¶�ֵ�ĳ���\n\n");
	FahrToCelsius_2();
	prog6_1();
	prog6_2();
	while (getchar() != '\n');
	prog7_1();
	prog7_2();
	printf("7.2(1)��Ҫ��������Ϊ iNumA=12,iNumB=26���û�������룿\n");
	printf("   ���û�Ӧ����12_26(_Ϊ�ո�)\n\n");
	printf("7.2(2)��Ҫ��������Ϊ iNumA=12,iNumB=26���û�����Ϊ��12,26�LӦ�����޸ĳ����е� scanf ������䣿\n");
	printf("   �𣺵���Ϊ:scanf(\"\%%d,%%d\"\,&iNumA,&iNumB\);");
	printf("\n\n7.2(3)���û������������ַ���Ϊ�ָ����������룬�����޸ĳ���\n");
	printf("   ��:����Ϊ:scanf(\"\%%d%%*c%%d\"\,&iNumA,&iNumB\);");
	printf("\n\n7.2(4)��Ҫ��������Ϊ iNumA=12,iNumB=26���û�����Ϊ��iNumA=12,iNumB=26�LӦ�����޸ĳ����е� scanf ��䣿");
	printf("\n   �𣺵���Ϊ:scanf(\"\iNumA = %%d,iNumB = %%d\"\,&iNumA,&iNumB\);");
	printf("\n\n7.2(5)���н����:iNumA = 12��iNumB = 26\n");
	printf("\n������prog7_5�ı�������");
	prog7_5();
	MathLearn();
	return 0;
}