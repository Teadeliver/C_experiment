#include<stdio.h>

void StudyStructMem()
{
    typedef struct birthday {
        int year, month, day;
    }BIR;

    typedef struct student {
        char name[10];
        int  num;
        BIR bir;
        float  height;
        float  weight;
    }STU;
    STU stu1 = { "张三丰",12345667,{1992,5,16},1.78f,62 };
    STU  MyClass[5] = { {"张三丰",12345667,{1992,5,16},1.78f,62},
                        {"李云龙",12466532,{1990,3,16},1.65f,45},
                        {"郭  靖",13284567,{1993,8,11},1.70f,59.5f},
                        {"苗翠花",13435767,{1995,1,19},1.75f,60},
                        {"张无忌",15345650,{1994,7,15},1.68f,52} };
    int i;
    printf("        size    Addr0     Addr1     Addr2     Addr3     Addr4     Addr5\n");
    printf("Student:%-8d%08X  %08X  %08X  %08X  %08X  %08X\n", sizeof(stu1), &stu1, &stu1.num, &stu1.bir, &stu1.height, &stu1.weight);  //输出stu1各成员的地址
    printf("MyClass:%-8d%08X  %08X  %08X  %08X  %08X  %08X\n", sizeof(MyClass), &MyClass, MyClass + 1, MyClass + 2, MyClass + 3, MyClass + 4, MyClass + 5);  //输出MyClass数组每个元素的地址        
    printf("Student:%s No.%d   %d-%d-%d   %.2fm   %.2fkg\n", stu1.name, stu1.num, stu1.bir.year, stu1.bir.month, stu1.bir.day, stu1.height, stu1.weight);//输出stu1各成员的值
    printf("MyClass:\n");
    for (i = 0; i < 5; i++)
    {
        printf("\t%s  No.%d   %d-%d-%d   %.2fm   %.2fkg\n", MyClass[i].name, MyClass[i].num, MyClass[i].bir.year, MyClass[i].bir.month, MyClass[i].bir.day, MyClass[i].height, MyClass[i].weight);
    }
}
int main()
{
    StudyStructMem();
    return 0;
}