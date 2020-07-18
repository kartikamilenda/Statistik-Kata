#include "bt.h"
#include "Statistic.h"

#include <stdio.h>
#define MAX   1000

int main(){
	FILE *file;
    int i, len, index, isUnique,j;
    char words[MAX][50];
    char word[50];
    int  count[MAX];

    file = fopen("nyoba.txt", "rb");

    if (file == NULL){
        printf("Unable to open file.\n");

        exit(EXIT_FAILURE);
    }

    for (i=0; i<MAX; i++)
        count[i] = 0;

    index = 0;
    
    while (fscanf(file, "%s", word) != EOF){
        strlwr(word);
        len = strlen(word);
        if (ispunct(word[len-1]))
            word[len - 1] = 0;

        isUnique = 1;
        for (i=0; i<index && isUnique; i++){
            if (strcmp(words[i], word) == 0)
                isUnique = 0;
        }
        if (isUnique) {
            strcpy(words[index], word);
            if(isdigit(word[index-1])){
        		word[index-1] = '\0';	
			}
            count[index]++;

            index++;
        }
        else{
            count[i - 1]++;
        }
    }
    fclose(file);
    
    BinTree BT = Nil;
    infotype st;
    
    
    
   for (i=0; i<index; i++){
       strcpy(st.word, words[i]);
       st.sum = count[i];
       //st = CreateStatistic(st.word,st.sum);
       //PrintStatistic(st);
       InsSearchTree(&BT, st);
       
    }  
    printf("Inorder dari Tree : \n");
    Inorder(BT);

    return 0;
}
