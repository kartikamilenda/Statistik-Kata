#include "Statistic.h"
#include <stdio.h>

int main(){
	statistic st;
	int sum;
	int n,i;
	char word[50];
	char words[50];
	
	printf("Masukan kata yang ingin diinput kan? ");
    scanf("%d", &n);
    
    for(i = 0; i < n;i++){
    	printf("word : ");
        scanf("%s", word);
        printf("Sum  : ");
        scanf("%d", &sum);
        st = CreateStatistic(word,sum);
        PrintStatistic(st);
	}
	GetWord(st,words);
	
    
    return 0;
}
