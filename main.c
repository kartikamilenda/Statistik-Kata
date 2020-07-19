/* Program  :main.c
 Deskripsi       :  berisi main  untuk statistik kata
 Author      :  Kartika Milenda & Mizan Nur Qalam
 Versi/Tanggal  : 01/18/07/2020
 Compiler      : Dev-C++ 5.11
 ================================================ */
#include "bt.h"
#include "Statistic.h"

#include <stdio.h>
#define MAX   1000

int main(){
	FILE *file;
    int i, len, index, isUnique,j;
    char words[MAX][50];
    char word[MAX];
    int  count[MAX];

    file = fopen("text.txt", "rb");

    if (file == NULL){
    	
        printf("Unable to open file.\n");
        exit(EXIT_FAILURE);
    }

    for (i=0; i<MAX; i++){
    	count[i] = 0;	
	}

    index = 0;
    while (fscanf(file, "%s", word) != EOF){
        strlwr(word);
        len = strlen(word);
        if (ispunct(word[len-1])){
        	word[len - 1] = '\0';
		}
		if(isdigit(word[index-1])){
        		word[index-1] = '\0';	
		}
            
        isUnique = 1;
        for (i=0; i<index && isUnique; i++){
            if (strcmp(words[i], word) == 0)
                isUnique = 0;
        }
        if (isUnique) {
            strcpy(words[index], word);
            count[index]++;
            index++;
        }
        else{
            count[i - 1]++;
        }
    }
    fclose(file);
    // Description              : Prosedur yang digunakan untuk mengubah isi file text menjadi array dan menghitung katanya
	// Initial State            : Hanya File text biasa
	// Final State              : text yang sudah menjadi perkata dan ada jumlahnya.
	// Author                   : Kartika Milenda, Mizan Nur Qalam
	// Reference                : https://codeforwin.org/2018/02/c-program-count-occurrences-of-all-words-a-file.html
    
    infotype st;
	strcpy(st.word, words[i]);
	st.sum = count[i];
	st = CreateStatistic(st.word,st.sum);
	BinTree BT = Tree(st,Nil,Nil);
	//PrintStatistic(st);
   for (i=0; i<index; i++){
       strcpy(st.word, words[i]);
       st.sum = count[i];
       st = CreateStatistic(st.word,st.sum);
       BT = AddTree(BT,st);
    }
	printf("Urutan kata sesuai alphabet : \n");
    Inorder(BT);
    return 0;
}
