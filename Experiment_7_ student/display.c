#include "student.h"
/*************************************************
�������ܣ���ʾѧ���ɼ�ͳ�Ʊ�
����˵������
����ֵ�� ��
****************************************************/
void Display(void)
{
	int i;
	system("cls"); //����
	printf("\n\n\n");
	printf("�� Ŀ\t��߷� ��ͷ� ƽ���� �������� ���������� ��߷�ѧ��ѧ��\n");
	for (i = 0; i < SubCount; i++)
	{
		printf("%s %6d %6d %6d %7d %8d %9d\n", \
			cSubject[i], iScoreHigh[i], iScoreLow[i], \
			iScoreAve[i], iFineCount[i], iFailCount[i], iHighNo[i]);
	}
}