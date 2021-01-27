#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define StuCount 5
#define SubCount 5
extern char* cSubject[]; //指示课程名称
extern int iStuNo[]; //全班学号
extern int Computer[]; //全班计算机课程成绩
extern int Math[]; //全班数学课程成绩
extern int English[]; //全班英语课程成绩
extern int Chinese[]; //全班语文课程成绩
extern int Physics[]; //全班体育课程成绩
extern int iScoreHigh[]; //以计算机、数学、英语、语文、体育的顺序存放各科最高分
extern int iScoreLow[]; //以计算机、数学、英语、语文、体育的顺序存放各科最低分
extern int iScoreAve[]; //以计算机、数学、英语、语文、体育的顺序存放各科平均分
extern int iHighNo[];
//以计算机、数学、英语、语文、体育的顺序存放各科最高分学生学号
extern int iFineCount[];
//以计算机、数学、英语、语文、体育的顺序存放各科达优秀人数
extern int iFailCount[];
//以计算机、数学、英语、语文、体育的顺序存放各科不及格人数
int MenuSelect(void); //显示和返回选择的菜单项编号
int MenuHandle(int); //菜单处理
int InputData(void); //输入原始数据，成功返回 1，否则返回 0
void StaticScore(void); //统计最高分、最低分、平均分、最高分学号
int GetHigh(int* Score, int* Highest); //统计最高分及最高分学号
int GetLow(int* Score); //统计最低分
int GetAve(int* Score); //统计平均分
void StaticPerson(void); //统计优秀和不及格人数
void SortByAve(void); //以平均分为关键字对统计结果进行排序
void DisplayStat(void); //显示学生成绩统计表
void DisplaySort(void); //显示学生成绩排序结果
#endif