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
    STU oneClass[COUNT] = { 123,"��Ʊ�",12,34,56 };
    //������Ӵ�������ѧ�������Ա�����֤
    ModifyOne(oneClass + 0);//�޸��±�Ϊ1��ѧ���ɼ���Ϣ
    DisplayTrancriptOne(oneClass[0]);//��ʾ�±�Ϊ1��ѧ���ɼ���Ϣ
}
void ModifyOne(STU* MyInfo)
{
    /*���¸��ṹ���Ա�ı�ʾ���Գ��Զ��ַ�ʽ*/

    MyInfo->fChineseScore = 30;//�޸�ѧ�������ĳɼ�Ϊ30

    MyInfo->fEnglishScore = 80;//�޸�ѧ����Ӣ��ɼ�Ϊ80

    MyInfo->fMathScore = 100;//�޸�ѧ������ѧ�ɼ�Ϊ100
}
void DisplayTrancriptOne(STU myScore)
{
    printf("\n my data\n");
    printf("ѧ��  ����  ����  ��ѧ Ӣ�\n");
    printf("%d\t", myScore.iNum);    //���ѧ��
    printf("%s\t", myScore.cName);    //�������
    printf("%d\t", myScore.fChineseScore);    //������ĳɼ�
    printf("%d\t", myScore.fMathScore);    //�����ѧ�ɼ�
    printf("%d\n", myScore.fEnglishScore);    //���Ӣ��ɼ�
}