#ifndef BINTREE_H
#define BINTREE_H

#include <stdlib.h>
#include "boolean.h"

#define Nil NULL
#define MAX   1000
#define Info(P) (P)->info
#define Left(P) (P)->left
#define Parent(P) (P)->parent
#define Right(P) (P)->right
#define Count(P) (P)->count

typedef struct infotype{
	char word[MAX];
	int sum;
}infotype;
typedef struct tElmtNode *address;
typedef struct tElmtNode
{
    infotype info;
    address left;
    address right;
    address parent;
    int count;
} ElmtNode;

typedef address BinTree;

void DestroyTree(BinTree *P);
void InsSearchTree(BinTree *P,infotype X);
BinTree BuildBalanceTree(int n);
address Search2(BinTree T,infotype X);
void PrintTree(BinTree P);
void Postorder(BinTree P);
void Inorder(BinTree P);
void Preorder(BinTree P);
boolean IsBiner(BinTree P);
boolean IsUnerRight(BinTree P);
boolean IsUnerLeft(BinTree P);
void MakeTree(infotype X,BinTree L,BinTree R,BinTree *P);
BinTree Tree(infotype X,BinTree L,BinTree R);
BinTree GetRight(BinTree P);
BinTree GetLeft(BinTree P);
// infotype GetAkar(BinTree P);
boolean IsEmpty(BinTree P);
address Alokasi(infotype X);
#include "bt.c"
#endif
