#ifndef STUDENT_H
#define STUDENT_H
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

#define StuCount 3
#define SubCount 5
extern char* cSubject[]; //ָʾ�γ�����
extern int iStuNo[]; //ȫ��ѧ��
extern int Computer[]; //ȫ�������γ̳ɼ�
extern int Math[]; //ȫ����ѧ�γ̳ɼ�
extern int English[]; //ȫ��Ӣ��γ̳ɼ�
extern int Chinese[]; //ȫ�����Ŀγ̳ɼ�
extern int Physics[]; //ȫ�������γ̳ɼ�
extern int iScoreHigh[]; //�Լ��������ѧ��Ӣ����ġ�������˳���Ÿ�����߷�
extern int iScoreLow[]; //�Լ��������ѧ��Ӣ����ġ�������˳���Ÿ�����ͷ�
extern int iScoreAve[]; //�Լ��������ѧ��Ӣ����ġ�������˳���Ÿ���ƽ����
extern int iHighNo[];//�Լ��������ѧ��Ӣ����ġ�������˳���Ÿ�����߷�ѧ��ѧ��
extern int iFineCount[];//�Լ��������ѧ��Ӣ����ġ�������˳���Ÿ��ƴ���������
extern int iFailCount[];//�Լ��������ѧ��Ӣ����ġ�������˳���Ÿ��Ʋ���������
int MenuSelect(); //��ʾ�ͷ���ѡ��Ĳ˵�����
int MenuHandle(int); //�˵�����

void StaticScore(); //ͳ����߷֡���ͷ֡�ƽ���֡���߷�ѧ��
int GetHigh(int* Score, int* Highest); //ͳ����߷ּ���߷�ѧ��
int GetLow(int* Score); //ͳ����ͷ�
int GetAve(int* Score); //ͳ��ƽ����
void StaticPerson(); //ͳ������Ͳ���������
void SortByAve(); //��ƽ����Ϊ�ؼ��ֶ�ͳ�ƽ����������
void Display(); //��ʾѧ���ɼ�ͳ�Ʊ�

#endif