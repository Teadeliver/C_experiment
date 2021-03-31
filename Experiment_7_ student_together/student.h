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

int MenuSelect(void); //显示和返回选择的菜单项编号
int MenuHandle(int); //菜单处理
int InputData(void); //输入原始数据，成功返回 1，否则返回 0
int begin();//初始化输出结构体的科目数据
void StaticScore(void); //统计最高分、最低分、平均分、最高分学号
int GetHigh(int* Score, int* Highest); //统计最高分及最高分学号
int GetLow(int* Score); //统计最低分
int GetAve(int* Score); //统计平均分
void StaticPerson(void); //统计优秀和不及格人数
void SortByAve(struct STU output[]); //以平均分为关键字对统计结果进行排序
void Display();
void DisplayStat(void); //显示学生成绩统计表
void DisplaySort(void); //显示学生成绩排序结果
#endif