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

	printf("Input a char:"); //显示输入提示
	scanf("%c", &cData); //给字符变量赋初值
	printf("cData 的值是%c\n", cData); //以字符格式显示变量的值
	printf("cData 占内存%d 字节\n", sizeof(cData)); //显示变量空间大小
	printf("cData 起始地址是 0x%x\n", &cData); //显示变量所占内存首地址
	printf("\nInput an integer:");
	scanf("%d", &iNum);
	printf("iNum 的值是%d\n", iNum);
	printf("iNum 占内存%d 字节\n", sizeof(iNum));
	printf("iNum 起始地址是%#x \n", &iNum);
	printf("\nInput a float:");
	scanf("%f", &fData);
	printf("fData 的值是%f\n", fData);
	printf("fData 占内存%d 字节\n", sizeof(fData));
	printf("fData 起始地址是 0x%p\n", &fData);
	return OK;
}
int prog3_1(void)
{
	float x = 2.5f, y = 4.7f, k;
	int tmp = 12, z = 7, w = 5, a, e;
	while (w--)
	{
		a = tmp;
		printf("\n请输入你想查看的题号的序号\n\n");
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
	printf("60°F ＝ %d°C\n", celsius);
}
void FahrToCelsius_2(void)
{
	int celsius, fahr = 0;
	printf("请您输入需要转换的华氏温度：\n");
	scanf_s("%d", &fahr);
	celsius = (fahr - 32) * 5 / 9;
	printf("%d°F ＝ %d°C\n\n", fahr, celsius);
}
int prog6_1(void)
{
	int a = 0x64; //定义并初始化整型变量 a
	int* pa; //定义指针变量 pa
	char ch = 'A'; //定义并初始化字符变量 ch
	char* pch = &ch; //定义并初始化指针变量 pch
	pa = &a; //初始化指针变量 pa，使指针指向目标变量 a
	printf("整型变量 a 的值:a=%d\n", a);
	printf("整型变量 a 的指针:&a=%p\n", &a);
	printf("指针变量 pa 的值:pa=%p\n", pa);
	printf("指针变量 pa 的指针:&pa=%p\n", &pa);
	printf("字符变量 ch 的值: ch = %p\n", ch); //输出 ch 的值
	printf("字符变量 ch 的指针: &ch = %p\n", &ch); //输出 ch 的地址
	printf("指针变量 pch 的值: pch = %p\n", pch); //输出 pch 的值
	printf("指针变量 pch 的指针: &pch = %p\n", &pch); //输出 pch 的地址
	printf("指针变量 pch 占内存 %d 字节\n", sizeof(pch)); //输出 pch 占内存字节数
	return OK; /*将 OK 返回给主调函数，表示程序运行一切正常*/
}
int prog6_2(void)
{
	int a = 3, b = 4, sum = 0;
	int* pa, * pb, * psum; //定义整型指针变量 pa,pb,psum
	char ch;
	char* pch = &ch; //定义并初始化字符型指针变量 pch
	pa = &a; //整型指针变量 pa 指向目标变量 a
	pb = &b; //整型指针变量 pb 指向目标变量 b
	psum = &sum; //初始化整型指针变量 psum
	printf("指针变量的值:pa = %x pb = %x psum = %x\n", pa, pb, psum);
	printf("目标变量的值:a = %d pb = %d sum = %d\n", *pa, *pb, *psum);//用整型指针变量引用整型变量
	*psum = *pa + *pb; //用指针变量求 a,b 之和
	*pch = 'A'; //用指针变量为字符变量赋值
	printf("运算结果:sum = %d\tch = %c\n", *(&sum), ch);
	printf("整型指针变量的 + 运算: pa = %x pa + 1 = %x\n", pa, pa + 1);
	printf("字符型指针变量的 + 运算: pch = %x pch + 1 = %x\n", pch, pch + 1);
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
	printf("\niNumA = %d，iNumB = %d\n\n", iNumA, iNumB);
}
void prog7_5(void)
{
	int a = 5, b = 7;
	float x = 67.8546f, y = -789.124f;
	long n = 1234567;
	unsigned int u = 65535;
	printf("#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#-#\n"); //编程者可利用#的个数确定字段宽度
	printf("a,b:%3d%3d", a, b);
	printf("\nx,y:%lf,%lf ", x, y);
	printf("\nx,y:%lf\t\40\40\40,%lf ", x, y);
	printf("\nx,y:\40\40\40%.2f%.4f ", x, y);
	printf("\nx,y:%.6e%.2e ", x, y);
	printf("\nu,u,u:%d,%o,%x ", n, n, n); //输出 n 的十进制、八进制和十六进制的值
	printf("\nn,n,n:%d,%o,%x ", u, u, u); //输出 u 的十进制、八进制和十六进制的值
	printf("\nSTR1,STR2:%s,\40\40\40%3.3s \n", STR1, STR2);
}
void MathLearn(void)
{
	int a, b, c, d;
	printf("\n请输入第一个加数:\n");
	scanf("%d", &a);
	printf("请输入第二个加数：\n");
	scanf("%d", &b);
	printf("题目：%d + %d = ？\n\n请输入你的答案:\n", a, b);
	scanf("%d", &c);
	d = a + b;
	if (c == d)
		printf("\n恭喜你，你答对了，你真是太棒了！");
	else
		printf("\n很遗憾，答错了噢，还需要继续努力！\n");
}
int main(void)
{
	printf("prog1_1编译结果：\n");
	prog1_1();
	printf("\nprog1_1 k值不同的原因：\n答:因为第一个k值对应了k = x，相当于给k赋值输出，而第二个k未初始化值也没有进行赋值，所以输出是随机数\n\n");
	printf("prog1_2编译结果：\n");
	prog1_2();
	printf("\nprog1_2 为什么输出的第二个变量 Var2 值为-1？\n答：因为对其赋的值超出了短整型的取值范围\n");
	printf("\nprog1_2 输出的变量 5 的值为什么与初始化的不同？\n答:数据5定义成单精度浮点型变量，赋值的精度大于超出了单精度浮点型的限度，发生了数据截断\n");
	printf("\nprog1_2 将变量 7 的初始值改为 65，程序运行结果如何？为什么？\n答:输出的值依旧是Var7 = A,因为65在ASCII码表中对应字符A\n\n");
	prog2_1();
	prog3_1();
	printf("\n下面是修改好的将华氏温度为 60°F 转换成摄氏温度值的程序编译结果\n");
	FahrToCelsius_1();
	printf("\n下面是将任意华氏温度转换为摄氏温度值的程序\n\n");
	FahrToCelsius_2();
	prog6_1();
	prog6_2();
	while (getchar() != '\n');
	prog7_1();
	prog7_2();
	printf("7.2(1)若要求输出结果为 iNumA=12,iNumB=26，用户如何输入？\n");
	printf("   答：用户应输入12_26(_为空格)\n\n");
	printf("7.2(2)若要求输出结果为 iNumA=12,iNumB=26，用户输入为：12,26↙应怎样修改程序中的 scanf 调用语句？\n");
	printf("   答：调整为:scanf(\"\%%d,%%d\"\,&iNumA,&iNumB\);");
	printf("\n\n7.2(3)若用户可以用任意字符作为分隔符进行输入，怎样修改程序？\n");
	printf("   答:调整为:scanf(\"\%%d%%*c%%d\"\,&iNumA,&iNumB\);");
	printf("\n\n7.2(4)若要求输出结果为 iNumA=12,iNumB=26，用户输入为：iNumA=12,iNumB=26↙应怎样修改程序中的 scanf 语句？");
	printf("\n   答：调整为:scanf(\"\iNumA = %%d,iNumB = %%d\"\,&iNumA,&iNumB\);");
	printf("\n\n7.2(5)运行结果是:iNumA = 12，iNumB = 26\n");
	printf("\n以下是prog7_5的编译结果：");
	prog7_5();
	MathLearn();
	return 0;
}