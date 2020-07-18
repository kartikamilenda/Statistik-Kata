/* Program  :statistic.h
 Deskripsi       :  berisi header untuk statistic.h
 Author      :  Kartika Milenda
 Versi/Tanggal  : 01/18/07/2020
 Compiler      : Dev-C++ 5.11
 ================================================ */
#ifndef STATISTIC_H_
#define STATISTIC_H_

#define MAX   1000
#include <string.h>
#include <stdio.h>

typedef struct statistic{
	char word[MAX];
	int sum;
}statistic;

statistic CreateStatistic(char word[],int sum);
void PrintStatistic(statistic st);

int GetSum(statistic st);
void GetWord(statistic st, char statisticWord[]);

void SetSum(statistic *st, int sum);
void SetWord(statistic *st,char statisticWord[]);

#include "Statistic.c"
#endif

