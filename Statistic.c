/* Program  :statistic.c
 Deskripsi       :  berisi body untuk statistic.h
 Author      :  Kartika Milenda
 Versi/Tanggal  : 01/18/07/2020
 Compiler      : Dev-C++ 5.11
 ================================================ */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Statistic.h"

statistic CreateStatistic(char word[],int sum){
	statistic st;
	strcpy(st.word,word);
	st.sum = sum;
	
	return st;
}
void PrintStatistic(statistic st){
	printf("%s	%d \n",st.word, st.sum);
}

int GetSum(statistic st){
	return st.sum;
}
void GetWord(statistic st, char statisticWord[]){
	strcpy(st.word,statisticWord);
}

void SetSum(statistic *st, int sum){
	st->sum = sum;
}
void SetWord(statistic *st,char statisticWord[]){
	strcpy(statisticWord, st->word);
}
