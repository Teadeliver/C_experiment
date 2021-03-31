#include <stdio.h>
#define COUNT 1
struct student
{
    int iNum;
    char cName[16];
    int fChineseScore;
    int fMathScore;
    int fEnglishScore;
};
typedef struct student STU;
void ModifyOne(STU* MyInfo);
void DisplayTrancriptOne(STU myScore);
int main(void)
{
    STU oneClass[COUNT] = { 123,"吴浩斌",12,34,56 };
    //自行添加代码输入学生数据以便于验证
    ModifyOne(oneClass + 0);//修改下标为1的学生成绩信息
    DisplayTrancriptOne(oneClass[0]);//显示下标为1的学生成绩信息
}
void ModifyOne(STU* MyInfo)
{
    /*以下各结构体成员的表示可以尝试多种方式*/

    MyInfo->fChineseScore = 30;//修改学生的语文成绩为30

    MyInfo->fEnglishScore = 80;//修改学生的英语成绩为80

    MyInfo->fMathScore = 100;//修改学生的数学成绩为100
}
void DisplayTrancriptOne(STU myScore)
{
    printf("\n my data\n");
    printf("学号  姓名  语文  数学 英语：\n");
    printf("%d\t", myScore.iNum);    //输出学号
    printf("%s\t", myScore.cName);    //输出姓名
    printf("%d\t", myScore.fChineseScore);    //输出语文成绩
    printf("%d\t", myScore.fMathScore);    //输出数学成绩
    printf("%d\n", myScore.fEnglishScore);    //输出英语成绩
}