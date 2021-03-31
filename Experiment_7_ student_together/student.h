#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>

#define StuCount 1
#define SubCount 1

struct STU
{
    int Student_ID;
    int Computer;
    int Math;
    int English;
    int Chinese;
    int Physics;
};
extern struct STU student[];

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
void Display();
void DisplayStat(void); //��ʾѧ���ɼ�ͳ�Ʊ�
void DisplaySort(void); //��ʾѧ���ɼ�������
#endif