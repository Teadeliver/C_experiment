#ifndef STUDENT_H
#define STUDENT_H
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#define StuCount 5
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
extern struct STU output[];
int MenuSelect(void); //��ʾ�ͷ���ѡ��Ĳ˵�����
int MenuHandle(int); //�˵�����
int InputData(void); //����ԭʼ���ݣ��ɹ����� 1�����򷵻� 0
int begin();//��ʼ������ṹ��Ŀ�Ŀ����
void StaticScore(void); //ͳ����߷֡���ͷ֡�ƽ���֡���߷�ѧ��
int GetHigh(int* Score, int* Highest); //ͳ����߷ּ���߷�ѧ��
int GetLow(int* Score); //ͳ����ͷ�
int GetAve(int* Score); //ͳ��ƽ����
void StaticPerson(void); //ͳ������Ͳ���������
void SortByAve(struct STU output[]); //��ƽ����Ϊ�ؼ��ֶ�ͳ�ƽ����������
void DisplayStat(void); //��ʾѧ���ɼ�ͳ�Ʊ�
void DisplaySort(void); //��ʾѧ���ɼ�������
#endif