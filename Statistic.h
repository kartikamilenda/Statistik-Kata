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

// Description              : Fungsi Untuk menghasilkan sebuah Statistik berdasarkan nilai dri user
// Initial State            : Statistik tidak terisi
// Final State              : Statistik menjadi terisi.
// Author                   : Kartika Milenda
// Reference                :-
statistic CreateStatistic(char word[],int sum);

// Description              : Prosedur yang digunakan untuk menampilkan statistik
// Initial State            : tidak menampilkan statistik
// Final State              : menampilkan hasil statistik
// Author                   : Kartika Milenda
// Reference                : -
void PrintStatistic(statistic st);

// Description              : Fungsi yang digunakan untuk mengembalikan nilai Sum dari statistik
// Initial State            : Sebuah statistik kata
// Final State              : Sum dari sebuah statistik kata
// Author                   : Kartika Milenda, Farhan
// Reference                : -
int GetSum(statistic st);

// Description              : prosedur yang digunakan untuk mengembalikan nilai word dari statistik
// Initial State            : sebuah statistik kata
// Final State              : Word dari sebuah statistik kata
// Author                   : Kartika Milenda
// Reference                : -
void GetWord(statistic st, char statisticWord[]);

// Description              : prosedur yang digunakan untuk mengubah nilai sum dari sebuah statistik
// Initial State            : Statistik kata
// Final State              : men set sum pada statistik kata
// Author                   : Kartika Milenda
// Reference                :-
void SetSum(statistic *st, int sum);

// Description              : Prosedur yang digunakan untuk nilai word dari sebuah statistik
// Initial State            : Statistik kata
// Final State              : men set word pada statistik kata
// Author                   : Kartika Milend
// Reference                : -
void SetWord(statistic *st,char statisticWord[]);

#include "Statistic.c"
#endif

