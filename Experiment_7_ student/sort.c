#include "student.h"

char* cSubject[SubCount] = { "�����", "��  ѧ", "Ӣ  ��", "��  ��", "��  ��" };
//ָʾ�γ�����

/**************************************************
�������ܣ�����ð���㷨��ƽ����Ϊ�ؼ��ֶ�ͳ�ƽ����������
����˵������
����ֵ�� ��
****************************************************/
void SortByAve()
{
	int i, j, temp;
	char* strTemp;

	for (i = 1; i < SubCount; i++) //�� SubCount ��
	{
		for (j = 0; j < SubCount - i; j++) //ÿ�� SubCount-i �αȽ�
		{
			if (iScoreAve[j] < iScoreAve[j + 1])
			{
				//����С��ƽ���ֽ���������
				temp = iScoreAve[j];
				iScoreAve[j] = iScoreAve[j + 1];
				iScoreAve[j + 1] = temp;
				//����Ӧ����߷���Ϣ����
				temp = iScoreHigh[j];
				iScoreHigh[j] = iScoreHigh[j + 1];
				iScoreHigh[j + 1] = temp;
				//����Ӧ����ͷ���Ϣ����
				temp = iScoreLow[j];
				iScoreLow[j] = iScoreLow[j + 1];
				iScoreLow[j + 1] = temp;
				//����Ӧ����߷�ѧ����Ϣ����
				temp = iHighNo[j];
				iHighNo[j] = iHighNo[j + 1];
				iHighNo[j + 1] = temp;
				//����Ӧ������������Ϣ����
				temp = iFineCount[j];
				iFineCount[j] = iFineCount[j + 1];
				iFineCount[j + 1] = temp;
				//����Ӧ�Ĳ�����������Ϣ����
				temp = iFailCount[j];
				iFailCount[j] = iFailCount[j + 1];
				iFailCount[j + 1] = temp;
				//����Ӧ�Ŀγ�������Ϣ����
				strTemp = cSubject[j];
				cSubject[j] = cSubject[j + 1];
				cSubject[j + 1] = strTemp;
			}
		}
	}
}